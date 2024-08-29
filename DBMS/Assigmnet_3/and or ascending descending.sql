create table Assignment3(
	Id int not null,
	name varchar (30) not null,
	Department varchar(20),
	Age int not null,
	Gender varchar(10),
	Bload varchar(5),
	primary key(Id)
);

insert into Assignment3 values
(6024,'Topu', 'CSE', 21, 'Male', 'AB+'),
(6015,'Arif', 'CSE', 22, 'Male', 'B+'),
(5026,'Joy', 'EEE', 20, 'Male', 'A+');

select Id, Name, Age From Assignment3
where Age > 20 AND Id < 6024;

select Id, Name, Age FROM Assignment3
where Id > 6024 OR Age < 21;


select * from Assignment3 order by Id  desc; 

select * from Assignment3 order by Age asc;