create database school_db character set gbk;

use school_db;

create table students (
        student_id int unsigned not null primary key,
        name       char(10) not null,
        sex        char(4) not null,
        birth      date    not null,
        politily   char(20) not null
);


insert into students values (201080701,"张三","男","1994-12-2","自动化1");
insert into students values (201080702,"李四","男","1989-10-8","自动化2");
insert into students values (201080703,"王五","男","1994-8-8","自动化2");
insert into students values (201080704,"路人1","女","1994-7-9","自动化2");
insert into students values (201080705,"路人2","男","1994-12-8","自动化2");
insert into students values (201080706,"路人3","女","1994-11-8","自动化2");
insert into students values (201080707,"路人4","男","1992-1-23","自动化2");

。。。。