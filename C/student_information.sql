create database school_db character set gbk;

use school_db;

create table students (
        student_id int unsigned not null primary key,
        name       char(10) not null,
        sex        char(4) not null,
        birth      date    not null,
        politily   char(20) not null
);


insert into students values (201080701,"����","��","1994-12-2","�Զ���1");
insert into students values (201080702,"����","��","1989-10-8","�Զ���2");
insert into students values (201080703,"����","��","1994-8-8","�Զ���2");
insert into students values (201080704,"·��1","Ů","1994-7-9","�Զ���2");
insert into students values (201080705,"·��2","��","1994-12-8","�Զ���2");
insert into students values (201080706,"·��3","Ů","1994-11-8","�Զ���2");
insert into students values (201080707,"·��4","��","1992-1-23","�Զ���2");

��������