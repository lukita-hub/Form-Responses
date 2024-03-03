--Creating TABLE dogs
CREATE TABLE dogs(
	ID INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL
)

--Creating TABLE cats
CREATE TABLE cats(
	ID INTEGER NOT NULL PRIMARY KEY,
	name VARCHAR(50) NOT NULL
)

--Populating tables
INSERT INTO dogs (ID, name)
VALUES
	(1, 'Bella'),
	(2, 'Maxx'),
	(3, 'Daisy'),
	(4, 'Charlie'),
	(5, 'Lucy'),
	(6, 'Cooper'),
	(7, 'Bailey'),
	(8, 'Sadie'),
	(9, 'Buddy'),
	(10, 'Luna');

INSERT INTO cats (ID, name)
VALUES
	(1, 'Oliver'),
	(2, 'Luna'),
	(3, 'Simba'),
	(4, 'Bella'),
	(5, 'Tiger'),
	(6, 'Chloe'),
	(7, 'Max'),
	(8, 'Cleo'),
	(9, 'Leo'),
	(10, 'Nala');

-- Query to select all distinct pet names from both tables
-- Query to select all distinct pet names from both tables
WITH TABLE_ALL_NAMES AS (
	SELECT name FROM dogs
	UNION
	SELECT name FROM cats)
SELECT DISTINCT TAB.NAME FROM TABLE_ALL_NAMES TAB




