//email validator

#include <iostream>

using namespace std;

int main() {
  string email, password;
  cout << "Enter email address: ";
  cin >> email;
  cout << "Enter password: ";
  cin >> password;
  if (email.find("@") < 0 && email.find("@") > email.length())
    cout << "Email does not contain @\n";
  else
    cout << "Email does contain @\n";
  if (email.find(".com") > email.length())
    cout << "Email does not contain .com\n";
  else
    cout << "Email does contain .com\n";

bool upper = false, lower = false, digit = false;
  for (int i = 0; i < password.length(); i++) {
    if (isdigit(password[i]))
      digit = true;
    if (isupper(password[i]))
      upper = true;
    if (islower(password[i]))
      lower = true;
  }
  if (digit && lower && upper)
    cout << "Password is valid\n";
  else
    cout << "Password is not a valid one";
  return 0;
}
