#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void pizza_points(int min_orders, int min_price) 
{
    fstream file("Customers.txt");

    string line;
    while (getline(file, line)) 
    {
        int count_of_orders = 0;
        string customer_name = "";
        int num_orders = 0;
        bool reading_orders = false;
        bool in_number = false;
        string current_number = "";

        for (int i = 0; i < line.length(); i++) 
        {
            char ch = line[i];

            if (!reading_orders && ch != ' ') 
            {
                customer_name += ch;
            } 
            else if (ch == ' ') 
            {
                reading_orders = true;
            } 
            else if (ch == '[' || ch == ']') 
            {
                continue;
            } 
            else if (ch == ',' || ch == ' ') 
            {
                if (!current_number.empty()) 
                {
                    int price = stoi(current_number);
                    if (price >= min_price) 
                    {
                        count_of_orders++;
                    }
                    current_number = "";
                }
            } 
            else 
            {
                current_number += ch;
            }
        }

        if (count_of_orders >= min_orders) 
        {
            cout << customer_name << endl;
        }
    }

    file.close();
}

int main() 
{
    int min_orders, min_price;

    cout << "Enter Minimum Number of Orders: ";
    cin >> min_orders;
    cout << "Enter Minimum Order Price: ";
    cin >> min_price;

    pizza_points(min_orders, min_price);
}
