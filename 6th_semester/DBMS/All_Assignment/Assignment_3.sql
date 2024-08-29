create table Assignment3(
	ID          INT NOT NULL,
    NAME        VARCHAR (20) NOT NULL,
    AGE         INT NOT NULL,
    ADDRESS     CHAR (25),
    SALARY      DECIMAL (18, 2),
    PRIMARY KEY (ID)
);


insert into Assignment3 values
(10, 'Rohim', 21, 'dhaka', 2000),
(11, 'Topu', 20, 'mymenshingh', 5000),
(12, 'Arif', 22, 'Fulpur', 4000),
(13, 'Korim', 25, 'Dhaka', 7000),
(14, 'Rudra', 26, 'Nikle', 1000),
(15, 'Aabid', 24, 'Dhaka', 5000);


/** AND **/

select ID name, age from Assignment3 where age > 20 AND ID < 14;

/** OR **/

select ID, name, age from Assignment3  where ID > 13 OR age < 22;

/** Ascending **/

select * from Assignment3 order by AGE asc;

/** Descending **/

select * from Assignment3 order by NAME desc;

/** Group by Clause **/

SELECT AGE, MAX(salary) AS MAX_SALARY 
FROM Assignment3 GROUP BY AGE;

