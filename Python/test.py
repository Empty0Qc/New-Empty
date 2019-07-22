'''Implement a crawler program, grab the novel, save the novel content to a file'''
import requests
import bs4  
import re
# ButifulSoul4的缩写

# 1. 先构造一个 HTTP请求，把这个请求发送出去获取到响应

def open_page(url):
    response = requests.get(url)
    # 手动将程序的解析的编码方式设定为 Gbk
    response.ecncoding = 'gbk'
    if response.status_code != 200:
        print(f"requests get {url}")
        return
    return response.text

print(open_page('http://book.zongheng.com/chapter/841970/56888216.html'))
