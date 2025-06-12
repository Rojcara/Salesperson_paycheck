int main() 
{
// inputs 
  double salary;
  double gross;
  double expenses;
  double commission;
  string name1;
  string name2;

  
  
 
  
  cin >> name1 >> name2;
  cin >> salary;
  cin >> commission;
  cin >> gross;
  cin >> expenses;
  
  // used extra quotes to fix spacing issue betewwn first and last name 
  
  cout << "Payroll data for: " << name1 << " " << name2 << endl;
  cout << "Base Salary:" << std::fixed << std::setprecision(2) << setw(10) << "$" <<salary;
  cout << " (" << commission << "%"<< " of " << gross << ")" << endl;
  cout << "Commission:" << setw(11) << "$" << gross * (commission / 100 ) << endl;
  cout << "Expenses:" << setw(13) << "$" << expenses << endl;
 
 // next section for formatting 
  cout << " " << endl;
  cout << right; 
  cout << setw(29) << "--------" << endl;
  cout << " " << endl;
  cout << " " << endl;
  
  
  //Next section for final calculations
  
  cout << " Total: " << setw(14) << "$" << gross * commission / 100 + salary + expenses << endl;
  
  
  
    return 0;
}
