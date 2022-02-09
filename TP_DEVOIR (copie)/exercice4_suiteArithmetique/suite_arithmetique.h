#ifndef SUITE_ARITHMETIQUE_H_INCLUDED
#define SUITE_ARITHMETIQUE_H_INCLUDED

class SuiteArithmetique{

    public :

        //constucteur
        SuiteArithmetique();
        SuiteArithmetique(SuiteArithmetique const& original);
        SuiteArithmetique(float premier_T,float raison_suite);

        //accesseur
        float get_premiert();
        float get_raison();

        //mutateur
        void set_premierT(float premier_T);
        void set_raison(float raison_suite);

        //methode
        float sommeT(int n);
        float niemeT(int k);

        //destructeur
        ~SuiteArithmetique();

    private :
        float premierT;
        float raison;

};

#endif // SUITE_ARITHMETIQUE_H_INCLUDED
