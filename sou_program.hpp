#ifndef SOU_PROGRAM_HPP_INCLUDED
#define SOU_PROGRAM_HPP_INCLUDED

enum TipPrograma {lutke, madjionicar, predstava};
typedef struct
{
  unsigned int dan;
  unsigned int mesec;
  unsigned int godina;
}Datum;

typedef struct
{
    unsigned int sat;
    unsigned int minuti;
}VReme;

class Sou_program
{
private:
    unsigned int brLjudi;
    unsigned int brIzvodjaca;
    TipPrograma tip;
    VReme vreme;
    Datum datum;

};

#endif // SOU_PROGRAM_HPP_INCLUDED
