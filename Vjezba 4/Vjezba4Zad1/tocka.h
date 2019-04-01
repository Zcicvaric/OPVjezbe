

using namespace std;

class tocka
{
    double x, y, z;
    public:
    void postaviVrijednosti(tocka& t, double x = 0, double y = 0, double z = 0);
    void randomTocka(tocka& t, float donjaGranica, float gornjaGranica);
    void ispisiTocku(const tocka& t);
    float udaljenost2D (const tocka& t1, const tocka& t2);
    float udaljenost3D(const tocka& t1, const tocka& t2);
};
