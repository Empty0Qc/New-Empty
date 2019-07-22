'''Implement a crawler program, grab the novel, save the novel content to a file'''
import requests
import bs4  
import re
import time
# ButifulSoul4的缩写

# 1. 先构造一个 HTTP请求，把这个请求发送出去获取到响应
# 既能打开内容页，也能打开菜单页
def open_page(url):
    #headers={
    #    'User-Agent':
    #}
    response = requests.get(url)#,headers=headers)
    # 手动将程序的解析的编码方式设定为 Gbk
    response.ecncoding = 'gbk'
    if response.status_code != 200:
        print(f"requests get {url}")
        return
    return response.text
def test1():
    print(open_page('http://book.zongheng.com/chapter/841970/56888216.html'))


# 2. 根据内容进行解析
# 解析出每个章节的URL （a 标签中的解析）

def parse_main_page(html):
    # a) 创建一个 soup 对象
    soup = bs4.BeautifulSoup(html,"html.parser")
    #找到所有 href 属性由6个连续的数字构成的url
    charts = soup.find_all(href=re.compile(r'\d{6}.html'))
    # c) 根据上一步的结果生成所有章节的 url 的列表
    url_list = ['http://book.zongheng.com/chapter/841970/' + item['href'] for item in charts]
    return url_list

def test2():
    html = open_page('http://book.zongheng.com/chapter/841970/56888216.html')
    print(parse_main_page(html))


# 要解析的详情页
def parse_detail_page(html):
    '''解析出当前章节的标题和正文'''
    soup = bs4.BeautifulSoup(html,'html.parser')
    soup.find_all(class_='bookname')[0].h1.get.text()
    content = soup.find(id_='content')[0].get.text()
    return title,content

def test4():
    html = open_page('http://book.zongheng.com/chapter/841970/56888216.html')
    title,content = parse_detail_page(html)
    print("title: ",title)
    print("content: ",content)

def write_file(title,content):
    with open("tmp.txt",'a',encoding='gbk',errors='ignore') as f:
        f.write(title + '\n' + content + '\n\n\n\n')

def run():
    url = "http://book.zongheng.com/chapter/841970/"
    # 打开入口页面，并分析其中的所有详情页的 url
    html = open_page(url)
    url_list = parse_main_page(html)
    # 2.遍历详情页的 url，依次分析每个详细内容页
    for url in url_list:
        print("crawler url: ",url)
        detail_html = open_page(url)
        title,content = parse_detail_page(detail_html)
        write_file(title,content)
        time.sleep(1)
test4()
