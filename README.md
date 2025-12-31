# Calcola il M.C.D e m.c.m

Questo programma consente all'utente di inserire quanti numeri desidera e di scegliere se calcolare il M.C.D. e il m.c.m. dei numeri selezionati.


## Authors
- [@http-vincel](https://github.com/http-vincel)


## License

MIT License

Copyright (c) [_2025_] [**http-vincel**]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


## Documentation

Il funzionamento è semplice: il programma chiederà cosa vogliamo fare, M.C.D. o m.c.m., e in base alla scelta potremo entrare nel modulo di verifica.
Una volta dentro, ci chiederà di inserire quanti numeri vogliamo utilizzare, ad esempio 3.
Dopo aver inserito la quantità, il programma ci chiederà di inserire un numero alla volta, ripetendo l’operazione tante volte quanti sono i numeri scelti (nell’esempio, 3 volte).
Come test, inseriamo i numeri 124, 18 e 24:
per il m.c.m. il programma restituirà 2232;
per il M.C.D. restituirà 2.


## Usage/Examples

```cpp
// Int Main
int main(int argc, char* argv[])
{
    
    int scelta;
    cout<<"Cosa vuoi fare? mcm[1] or mcd[2]: " << endl;
    cin>>scelta;
```

```cpp
// MCD
int mcd(int a, int b)
{
    while (a != b) 
    {
        if (a > b)
        {
            a = a - b;
        } else
        {
            b = b - a;
        }
    }
    return a;
}
```

```cpp
// MCM
int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}
```
