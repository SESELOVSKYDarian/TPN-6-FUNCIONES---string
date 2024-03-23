#include <iostream>
#include <string>
using namespace std;
string InvertirTexto(string f);
string ArmarFrase(string f);
int main()
{
    string frase;
    cout << "Ingresa el nombre: ";
    getline(cin, frase);
    frase = InvertirTexto(frase);
    cout << "La frase invertida es: " << frase << endl;
    frase = ArmarFrase(frase);
    cout << "La frase armada es: " << frase << endl;
    return 0;
}

string InvertirTexto(string f)
{
	string invertida;
	for (int i = 0; i < f.size(); i++)
	{
		if (f[i] == '(')
		{
			invertida += '(';
			int j = i + 1;
			while (j < f.size() && f[j] != ')')
			{
				j++;
			}
			for (int k = j - 1; k > i; k--)
    		{
    			invertida += f[k];
    		}
    		i = j;
		}
		invertida += f[i];
	}
    return invertida;
}
string ArmarFrase(string f)
{
	string reinvertida;
	for (int i = 0; i < f.size(); i++)
	{
		if (f[i] == '(')
		{
			int j = i + 1;
			while (j < f.size() && f[j] != ')')
			{
				j++;
			}
			for (int k = j - 1; k > i; k--)
    		{
    			reinvertida += f[k];
    		}
    		i = j;
		}
		if (f[i] != ')')
		{
			reinvertida += f[i];
		}
	}
    return reinvertida;
}