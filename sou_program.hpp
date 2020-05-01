#ifndef SOU_PROGRAM_HPP_INCLUDED
#define SOU_PROGRAM_HPP_INCLUDED

enum TipPrograma {lutke, madjionicar, predstava};
typedef struct
{
  unsigned dan;
  unsigned mesec;
  unsigned godina;
}Datum;

typedef struct
{
    unsigned sat;
    unsigned minuti;
}VReme;

class Sou_program
{
private:
    unsigned brLjudi;
    unsigned brIzvodjaca;
    TipPrograma tip;
    VReme vreme;
    Datum datum;
public:


};

#endif // SOU_PROGRAM_HPP_INCLUDED
