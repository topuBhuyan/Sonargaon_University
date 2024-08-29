create database topu_bhuyan;

CREATE TABLE myCustormes (
   ID INT NOT NULL,
   NAME VARCHAR (20) NOT NULL,
   AGE INT NOT NULL,
   ADDRESS CHAR (25),
   SALARY DECIMAL (18, 2),       
   PRIMARY KEY (ID)
);

INSERT INTO  myCustormes VALUES
(10, 'Rohim', 21, 'Dhaka', 2000),
(11, 'Topu', 20, 'Mymensingh', 5000),
(12, 'Arif', 22, 'Fulpur', 10000.50),
(13, 'korim', 25, 'Dhaka', 3500),
(14, 'Rudra', 24, 'Nikle', 25000),
(15, 'Aabid', 25, 'Dhaka', 5000);


select * from myCustormes
where ID in(10, 12, 14, 15); /* IN query */

update myCustormes set ADDRESS = 'Gazipur' where ADDRESS in('Dhaka'); /* Update IN query */

select  * from myCustormes where AGE NOT IN (21,22,24); /*NOT IN query*/


select * from myCustormes where AGE BETWEEN 20 and 24; /*BETEEN query*/


select * from myCustormes where SALARY BETWEEN 2000.00 AND 35000.00 AND ADDRESS  IN ('Gazipur'); /*BWTEEN IN*/


CREATE TABLE myCustormes2 (
   ID INT NOT NULL,
   NAME VARCHAR (20) NOT NULL,
   AGE INT NOT NULL,
   ADDRESS CHAR (25),
   SALARY DECIMAL (18, 2),       
   PRIMARY KEY (ID)
);

insert into myCustormes2 select * from myCustormes
where ID IN (select ID FROM myCustormes);

select * from myCustormers
where SALARY > ANY (SELECT SALARY FROM myCustormers WHERE AGE = 20);



select * from myCustormes where SALARY like '500%';

select * from myCustormers where NAME like '__%';

select * from myCustormes;

