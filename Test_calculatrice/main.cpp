#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool checkValidation(string expression)
{
    bool valide=true;
    try {

       // QString nombres="0123456789";

        vector <char> nombres;
        vector<char> ::iterator rech,rech1;
        for(int i=0;i<10;i++)
        {
            nombres.push_back(i);
        }
        vector <char> exeption; exeption.push_back('+'); exeption.push_back('-');

//        if((!nombres.contains(expression[0]) && !exeption.contains(expression[0]) )  /*||  !nombres.contains(expression[expression.length()-1])*/)
//     {
//         valide=false;
//        //break;
//     }


    for(int i=0;i<expression.length();i++)
    {
        rech=find(nombres.begin(),nombres.end(),expression[i]);
        rech1=find(nombres.begin(),nombres.end(),expression[i+1]);
        if(rech!=nombres.end() && rech1!=nombres.end())

        //if(!nombres. contains(expression[i]) && !nombres.contains(expression[i+1]))
     {
        valide=false;
        break;
    }

    }
    throw string("Error !");

    //return valide;
    }
    catch (string e)
    {

    }

 return valide ;


}

/**======================== EVALUATE()*/
 double evaluate(string expression)
{
    //ExpressionEvaluation ex(this->expression);
       double result=0;
    vector <string> signesRecherche;
      signesRecherche.push_back("+");
      signesRecherche.push_back("-");
      signesRecherche.push_back("x");
      signesRecherche.push_back("÷");
       signesRecherche.push_back("%");


    vector <vector<string>>  signesPosition ;
   vector <string> extractValors;
     string val_content="";
     vector<string>::iterator rech;
 //Extraction des signes et des positions
    //if(ex.ckeckValidation())
    //{
        for( int i=0;i<expression.length();i++)
        {
            //Enregistrement des chiffres dans une chaine de carctere
         val_content+=expression[i];
         rech=find(signesRecherche.begin(),signesRecherche.end(),expression[i]);
          if(rech!=signesRecherche.end())
          {
              //envoi du nombre dans le vecteur (si le caractere courant est un operateur)
              extractValors.push_back(val_content);

              //Stockage de la position (position et valeur) de chaque operateur

           vector <string> content_position;


           //Traitement de l'expression selon l'operateur
            if(expression[i]=='+')
                //double lol = atof(word.c_str());
                  result+=stod(val_content);
            else if(expression[i]=='-')
                result-= stod(val_content);

            else if(expression[i]=='x')
                result*= stod(val_content);

            else if(expression[i]== '/')
                result/= stod(val_content);

             // vidage du contenu de la variable de  et reprise
            val_content="";

          }
        }

        return result;
}

int main()
{
    return 0;
}
