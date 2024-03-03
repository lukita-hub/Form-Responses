--Creating Table Students
CREATE TABLE Students(
	ID INTEGER PRIMARY KEY,
	Name TEXT,
	Value INTEGER	
);
--Creating Table Notes
CREATE TABLE Notes(
	Grade INTEGER,
	Min_Value INTEGER,
	Max_Values INTEGER	
);
--Inserting exampe data into Student table
INSERT INTO Students (ID, Name, Value)
VALUES
	(1, 'Julia', 81),
	(2, 'Carol', 68),
	(3, 'Maria', 99),
	(4, 'Andreia', 78),
	(5, 'Jaqueline', 63),
	(6, 'Marcela', 88);
SELECT * FROM Students
Grade | Min_Value | Max_Value
--Inserting exampe data into Student table
INSERT INTO Notes (Grade, Min_Value, Max_Values)
VALUES
	(1, 0, 9),
	(2, 10, 19),
	(3, 20, 29),
	(4, 30, 39),
	(5, 40, 49),
	(6, 50, 59),
	(7, 60, 69),
	(8, 70, 79),
	(9, 80, 89),
	(10, 90, 100);
SELECT * FROM Notes






