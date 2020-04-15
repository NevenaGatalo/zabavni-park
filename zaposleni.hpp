#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
typedef struct
{
    unsigned int pocetak;
    unsigned int kraj;
}RadnoVreme;
enum TipZaposlenog {animator, cuvar, prodavac_karata, pekar};
class Zaposleni: public Osoba
{
private:
    int plata;
    TipZaposlenog tip;
    RadnoVreme rv;
};

#endif // ZAPOSLENI_HPP_INCLUDED
