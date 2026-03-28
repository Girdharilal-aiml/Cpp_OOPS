/*
Design a C++ program to model a hospital management system with the following requirements:
Requirements:

1. Abstract class MedicalStaff with pure virtual 
   functions:  showRole() and computePay()

2. Person base class (name, age, CNIC) — 
   inherits MedicalStaff

3. Doctor inherits Person:
   - specialization, consultationFee
   - computePay() = consultationFee x patients seen

4. Nurse inherits Person:
   - department, hourlyRate, hoursWorked
   - computePay() = hourlyRate x hoursWorked


*/