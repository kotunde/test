//
// Created by attila on 26.11.2018.
//


//bool mycmp1(const Diak d1, const Diak d2)
//{
//    if (d1.getVnev().compare(d2.getVnev())==0)
//    {
//        return d1.getKnev()<d2.getKnev();
//    }
//    else
//    {
//        return d1.getVnev()<d2.getVnev();
//    }
//}
//bool mycmp2(Diak d1,Diak d2)
//{
//    return d1.getAtlag()<d2.getAtlag();
//}
struct mycmp1
{
    bool operator()(const Diak d1, const Diak d2) const
    {
//        if (d1.getVnev().compare(d2.getVnev())==0)
//        {
//            return d1.getKnev()<d2.getKnev();
//        }
//        else
//        {
//            return d1.getVnev()<d2.getVnev();
//        }
        return d1<d2;
    }
};
struct mycmp2 {
    bool operator()(const Diak d1, const Diak d2) const
    {
        return d1.getAtlag()>d2.getAtlag();
    }
};

Felveteli::Felveteli(string filename)
{
    ifstream ifs(filename);
    if (ifs.is_open())
    {
        ifs >> this->helyekSzama;
        Diak diak;
        while (ifs >>diak)
        {
            this->diakok.push_back(diak);
       
void Felveteli::kiiratas(ostrea
