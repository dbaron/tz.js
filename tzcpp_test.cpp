// This code is generated automatically using generate-cpp-test.py generator from tz.js fork

#include "tzcpp.h"

#ifdef USE_GTEST

#else

#include <iostream>
#include <exception>

#define TZ_CHECK(a, b) \
        do { \
            auto aval__ = (a); \
            auto bval__ = (b); \
            if (aval__ != bval__) { \
                std::cerr << "Error at " << __LINE__ << ": " << aval__ << " != " << bval__ << std::endl; \
                std::cerr << "        " << #a << " != " << #b << std::endl; \
                throw std::runtime_error("Test failed."); \
            } \
        } while (0)

#define TZ_BEGIN_TEST void check_tz()

void check_tz();
int main() {
    try {
        check_tz();
        std::cout << "[OK]" << std::endl;
    } catch (const std::runtime_error& err) {
        std::cerr << "FAILED: " << err.what() << std::endl;
        return 1;
    }
    return 0;
}

#endif

using namespace tzcpp;
TZ_BEGIN_TEST


{
    if (has_timezone("Africa/Abidjan")) {
        TZ_CHECK(from_utc("Africa/Abidjan", 1574649145), 1574649145);
        TZ_CHECK(from_local("Africa/Abidjan", 1574649145), 1574649145);
        TZ_CHECK(from_utc("Africa/Abidjan", 1466947968), 1466947968);
        TZ_CHECK(from_local("Africa/Abidjan", 1466947968), 1466947968);
        TZ_CHECK(from_utc("Africa/Abidjan", 1536373829), 1536373829);
        TZ_CHECK(from_local("Africa/Abidjan", 1536373829), 1536373829);
        TZ_CHECK(from_utc("Africa/Abidjan", 1452090331), 1452090331);
        TZ_CHECK(from_local("Africa/Abidjan", 1452090331), 1452090331);
        TZ_CHECK(from_utc("Africa/Abidjan", 1605988076), 1605988076);
        TZ_CHECK(from_local("Africa/Abidjan", 1605988076), 1605988076);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Abidjan" << std::endl;
    }
    if (has_timezone("Africa/Accra")) {
        TZ_CHECK(from_utc("Africa/Accra", 1558231530), 1558231530);
        TZ_CHECK(from_local("Africa/Accra", 1558231530), 1558231530);
        TZ_CHECK(from_utc("Africa/Accra", 1604967187), 1604967187);
        TZ_CHECK(from_local("Africa/Accra", 1604967187), 1604967187);
        TZ_CHECK(from_utc("Africa/Accra", 1500842218), 1500842218);
        TZ_CHECK(from_local("Africa/Accra", 1500842218), 1500842218);
        TZ_CHECK(from_utc("Africa/Accra", 1532859918), 1532859918);
        TZ_CHECK(from_local("Africa/Accra", 1532859918), 1532859918);
        TZ_CHECK(from_utc("Africa/Accra", 1436097329), 1436097329);
        TZ_CHECK(from_local("Africa/Accra", 1436097329), 1436097329);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Accra" << std::endl;
    }
    if (has_timezone("Africa/Addis_Ababa")) {
        TZ_CHECK(from_utc("Africa/Addis_Ababa", 1578038736), 1578049536);
        TZ_CHECK(from_local("Africa/Addis_Ababa", 1578049536), 1578038736);
        TZ_CHECK(from_utc("Africa/Addis_Ababa", 1456828405), 1456839205);
        TZ_CHECK(from_local("Africa/Addis_Ababa", 1456839205), 1456828405);
        TZ_CHECK(from_utc("Africa/Addis_Ababa", 1603712171), 1603722971);
        TZ_CHECK(from_local("Africa/Addis_Ababa", 1603722971), 1603712171);
        TZ_CHECK(from_utc("Africa/Addis_Ababa", 1514081127), 1514091927);
        TZ_CHECK(from_local("Africa/Addis_Ababa", 1514091927), 1514081127);
        TZ_CHECK(from_utc("Africa/Addis_Ababa", 1417740994), 1417751794);
        TZ_CHECK(from_local("Africa/Addis_Ababa", 1417751794), 1417740994);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Addis_Ababa" << std::endl;
    }
    if (has_timezone("Africa/Algiers")) {
        TZ_CHECK(from_utc("Africa/Algiers", 1590929918), 1590933518);
        TZ_CHECK(from_local("Africa/Algiers", 1590933518), 1590929918);
        TZ_CHECK(from_utc("Africa/Algiers", 1426613281), 1426616881);
        TZ_CHECK(from_local("Africa/Algiers", 1426616881), 1426613281);
        TZ_CHECK(from_utc("Africa/Algiers", 1432046756), 1432050356);
        TZ_CHECK(from_local("Africa/Algiers", 1432050356), 1432046756);
        TZ_CHECK(from_utc("Africa/Algiers", 1543314732), 1543318332);
        TZ_CHECK(from_local("Africa/Algiers", 1543318332), 1543314732);
        TZ_CHECK(from_utc("Africa/Algiers", 1533936554), 1533940154);
        TZ_CHECK(from_local("Africa/Algiers", 1533940154), 1533936554);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Algiers" << std::endl;
    }
    if (has_timezone("Africa/Asmara")) {
        TZ_CHECK(from_utc("Africa/Asmara", 1562043688), 1562054488);
        TZ_CHECK(from_local("Africa/Asmara", 1562054488), 1562043688);
        TZ_CHECK(from_utc("Africa/Asmara", 1487748968), 1487759768);
        TZ_CHECK(from_local("Africa/Asmara", 1487759768), 1487748968);
        TZ_CHECK(from_utc("Africa/Asmara", 1458222815), 1458233615);
        TZ_CHECK(from_local("Africa/Asmara", 1458233615), 1458222815);
        TZ_CHECK(from_utc("Africa/Asmara", 1495516606), 1495527406);
        TZ_CHECK(from_local("Africa/Asmara", 1495527406), 1495516606);
        TZ_CHECK(from_utc("Africa/Asmara", 1546568991), 1546579791);
        TZ_CHECK(from_local("Africa/Asmara", 1546579791), 1546568991);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Asmara" << std::endl;
    }
    if (has_timezone("Africa/Asmera")) {
        TZ_CHECK(from_utc("Africa/Asmera", 1463513071), 1463523871);
        TZ_CHECK(from_local("Africa/Asmera", 1463523871), 1463513071);
        TZ_CHECK(from_utc("Africa/Asmera", 1561655807), 1561666607);
        TZ_CHECK(from_local("Africa/Asmera", 1561666607), 1561655807);
        TZ_CHECK(from_utc("Africa/Asmera", 1482223613), 1482234413);
        TZ_CHECK(from_local("Africa/Asmera", 1482234413), 1482223613);
        TZ_CHECK(from_utc("Africa/Asmera", 1628982236), 1628993036);
        TZ_CHECK(from_local("Africa/Asmera", 1628993036), 1628982236);
        TZ_CHECK(from_utc("Africa/Asmera", 1570313527), 1570324327);
        TZ_CHECK(from_local("Africa/Asmera", 1570324327), 1570313527);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Asmera" << std::endl;
    }
    if (has_timezone("Africa/Bamako")) {
        TZ_CHECK(from_utc("Africa/Bamako", 1435332729), 1435332729);
        TZ_CHECK(from_local("Africa/Bamako", 1435332729), 1435332729);
        TZ_CHECK(from_utc("Africa/Bamako", 1605979122), 1605979122);
        TZ_CHECK(from_local("Africa/Bamako", 1605979122), 1605979122);
        TZ_CHECK(from_utc("Africa/Bamako", 1568706810), 1568706810);
        TZ_CHECK(from_local("Africa/Bamako", 1568706810), 1568706810);
        TZ_CHECK(from_utc("Africa/Bamako", 1486025118), 1486025118);
        TZ_CHECK(from_local("Africa/Bamako", 1486025118), 1486025118);
        TZ_CHECK(from_utc("Africa/Bamako", 1417288217), 1417288217);
        TZ_CHECK(from_local("Africa/Bamako", 1417288217), 1417288217);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bamako" << std::endl;
    }
    if (has_timezone("Africa/Bangui")) {
        TZ_CHECK(from_utc("Africa/Bangui", 1548786486), 1548790086);
        TZ_CHECK(from_local("Africa/Bangui", 1548790086), 1548786486);
        TZ_CHECK(from_utc("Africa/Bangui", 1622006603), 1622010203);
        TZ_CHECK(from_local("Africa/Bangui", 1622010203), 1622006603);
        TZ_CHECK(from_utc("Africa/Bangui", 1485232519), 1485236119);
        TZ_CHECK(from_local("Africa/Bangui", 1485236119), 1485232519);
        TZ_CHECK(from_utc("Africa/Bangui", 1621871543), 1621875143);
        TZ_CHECK(from_local("Africa/Bangui", 1621875143), 1621871543);
        TZ_CHECK(from_utc("Africa/Bangui", 1547320517), 1547324117);
        TZ_CHECK(from_local("Africa/Bangui", 1547324117), 1547320517);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bangui" << std::endl;
    }
    if (has_timezone("Africa/Banjul")) {
        TZ_CHECK(from_utc("Africa/Banjul", 1509028009), 1509028009);
        TZ_CHECK(from_local("Africa/Banjul", 1509028009), 1509028009);
        TZ_CHECK(from_utc("Africa/Banjul", 1478764672), 1478764672);
        TZ_CHECK(from_local("Africa/Banjul", 1478764672), 1478764672);
        TZ_CHECK(from_utc("Africa/Banjul", 1538640197), 1538640197);
        TZ_CHECK(from_local("Africa/Banjul", 1538640197), 1538640197);
        TZ_CHECK(from_utc("Africa/Banjul", 1430664683), 1430664683);
        TZ_CHECK(from_local("Africa/Banjul", 1430664683), 1430664683);
        TZ_CHECK(from_utc("Africa/Banjul", 1500829424), 1500829424);
        TZ_CHECK(from_local("Africa/Banjul", 1500829424), 1500829424);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Banjul" << std::endl;
    }
    if (has_timezone("Africa/Bissau")) {
        TZ_CHECK(from_utc("Africa/Bissau", 1508028014), 1508028014);
        TZ_CHECK(from_local("Africa/Bissau", 1508028014), 1508028014);
        TZ_CHECK(from_utc("Africa/Bissau", 1589296927), 1589296927);
        TZ_CHECK(from_local("Africa/Bissau", 1589296927), 1589296927);
        TZ_CHECK(from_utc("Africa/Bissau", 1494646211), 1494646211);
        TZ_CHECK(from_local("Africa/Bissau", 1494646211), 1494646211);
        TZ_CHECK(from_utc("Africa/Bissau", 1481344549), 1481344549);
        TZ_CHECK(from_local("Africa/Bissau", 1481344549), 1481344549);
        TZ_CHECK(from_utc("Africa/Bissau", 1451757335), 1451757335);
        TZ_CHECK(from_local("Africa/Bissau", 1451757335), 1451757335);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bissau" << std::endl;
    }
    if (has_timezone("Africa/Blantyre")) {
        TZ_CHECK(from_utc("Africa/Blantyre", 1425811263), 1425818463);
        TZ_CHECK(from_local("Africa/Blantyre", 1425818463), 1425811263);
        TZ_CHECK(from_utc("Africa/Blantyre", 1551747651), 1551754851);
        TZ_CHECK(from_local("Africa/Blantyre", 1551754851), 1551747651);
        TZ_CHECK(from_utc("Africa/Blantyre", 1563686685), 1563693885);
        TZ_CHECK(from_local("Africa/Blantyre", 1563693885), 1563686685);
        TZ_CHECK(from_utc("Africa/Blantyre", 1612302647), 1612309847);
        TZ_CHECK(from_local("Africa/Blantyre", 1612309847), 1612302647);
        TZ_CHECK(from_utc("Africa/Blantyre", 1596134067), 1596141267);
        TZ_CHECK(from_local("Africa/Blantyre", 1596141267), 1596134067);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Blantyre" << std::endl;
    }
    if (has_timezone("Africa/Brazzaville")) {
        TZ_CHECK(from_utc("Africa/Brazzaville", 1539127684), 1539131284);
        TZ_CHECK(from_local("Africa/Brazzaville", 1539131284), 1539127684);
        TZ_CHECK(from_utc("Africa/Brazzaville", 1559626023), 1559629623);
        TZ_CHECK(from_local("Africa/Brazzaville", 1559629623), 1559626023);
        TZ_CHECK(from_utc("Africa/Brazzaville", 1590445207), 1590448807);
        TZ_CHECK(from_local("Africa/Brazzaville", 1590448807), 1590445207);
        TZ_CHECK(from_utc("Africa/Brazzaville", 1489961350), 1489964950);
        TZ_CHECK(from_local("Africa/Brazzaville", 1489964950), 1489961350);
        TZ_CHECK(from_utc("Africa/Brazzaville", 1538064504), 1538068104);
        TZ_CHECK(from_local("Africa/Brazzaville", 1538068104), 1538064504);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Brazzaville" << std::endl;
    }
    if (has_timezone("Africa/Bujumbura")) {
        TZ_CHECK(from_utc("Africa/Bujumbura", 1543905845), 1543913045);
        TZ_CHECK(from_local("Africa/Bujumbura", 1543913045), 1543905845);
        TZ_CHECK(from_utc("Africa/Bujumbura", 1435864014), 1435871214);
        TZ_CHECK(from_local("Africa/Bujumbura", 1435871214), 1435864014);
        TZ_CHECK(from_utc("Africa/Bujumbura", 1512070729), 1512077929);
        TZ_CHECK(from_local("Africa/Bujumbura", 1512077929), 1512070729);
        TZ_CHECK(from_utc("Africa/Bujumbura", 1534223834), 1534231034);
        TZ_CHECK(from_local("Africa/Bujumbura", 1534231034), 1534223834);
        TZ_CHECK(from_utc("Africa/Bujumbura", 1562965736), 1562972936);
        TZ_CHECK(from_local("Africa/Bujumbura", 1562972936), 1562965736);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bujumbura" << std::endl;
    }
    if (has_timezone("Africa/Cairo")) {
        TZ_CHECK(from_utc("Africa/Cairo", 1541132958), 1541140158);
        TZ_CHECK(from_local("Africa/Cairo", 1541140158), 1541132958);
        TZ_CHECK(from_utc("Africa/Cairo", 1428199248), 1428206448);
        TZ_CHECK(from_local("Africa/Cairo", 1428206448), 1428199248);
        TZ_CHECK(from_utc("Africa/Cairo", 1549129758), 1549136958);
        TZ_CHECK(from_local("Africa/Cairo", 1549136958), 1549129758);
        TZ_CHECK(from_utc("Africa/Cairo", 1560344826), 1560352026);
        TZ_CHECK(from_local("Africa/Cairo", 1560352026), 1560344826);
        TZ_CHECK(from_utc("Africa/Cairo", 1592071724), 1592078924);
        TZ_CHECK(from_local("Africa/Cairo", 1592078924), 1592071724);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Cairo" << std::endl;
    }
    if (has_timezone("Africa/Casablanca")) {
        TZ_CHECK(from_utc("Africa/Casablanca", 1412545718), 1412549318);
        TZ_CHECK(from_local("Africa/Casablanca", 1412549318), 1412545718);
        TZ_CHECK(from_utc("Africa/Casablanca", 1582010613), 1582014213);
        TZ_CHECK(from_local("Africa/Casablanca", 1582014213), 1582010613);
        TZ_CHECK(from_utc("Africa/Casablanca", 1459537697), 1459541297);
        TZ_CHECK(from_local("Africa/Casablanca", 1459541297), 1459537697);
        TZ_CHECK(from_utc("Africa/Casablanca", 1566282430), 1566286030);
        TZ_CHECK(from_local("Africa/Casablanca", 1566286030), 1566282430);
        TZ_CHECK(from_utc("Africa/Casablanca", 1466912480), 1466912480);
        TZ_CHECK(from_local("Africa/Casablanca", 1466912480), 1466912480);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Casablanca" << std::endl;
    }
    if (has_timezone("Africa/Ceuta")) {
        TZ_CHECK(from_utc("Africa/Ceuta", 1593740536), 1593747736);
        TZ_CHECK(from_local("Africa/Ceuta", 1593747736), 1593740536);
        TZ_CHECK(from_utc("Africa/Ceuta", 1431006960), 1431014160);
        TZ_CHECK(from_local("Africa/Ceuta", 1431014160), 1431006960);
        TZ_CHECK(from_utc("Africa/Ceuta", 1442013360), 1442020560);
        TZ_CHECK(from_local("Africa/Ceuta", 1442020560), 1442013360);
        TZ_CHECK(from_utc("Africa/Ceuta", 1625354432), 1625361632);
        TZ_CHECK(from_local("Africa/Ceuta", 1625361632), 1625354432);
        TZ_CHECK(from_utc("Africa/Ceuta", 1481498078), 1481501678);
        TZ_CHECK(from_local("Africa/Ceuta", 1481501678), 1481498078);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ceuta" << std::endl;
    }
    if (has_timezone("Africa/Conakry")) {
        TZ_CHECK(from_utc("Africa/Conakry", 1458263723), 1458263723);
        TZ_CHECK(from_local("Africa/Conakry", 1458263723), 1458263723);
        TZ_CHECK(from_utc("Africa/Conakry", 1471678411), 1471678411);
        TZ_CHECK(from_local("Africa/Conakry", 1471678411), 1471678411);
        TZ_CHECK(from_utc("Africa/Conakry", 1496720165), 1496720165);
        TZ_CHECK(from_local("Africa/Conakry", 1496720165), 1496720165);
        TZ_CHECK(from_utc("Africa/Conakry", 1572419537), 1572419537);
        TZ_CHECK(from_local("Africa/Conakry", 1572419537), 1572419537);
        TZ_CHECK(from_utc("Africa/Conakry", 1482733011), 1482733011);
        TZ_CHECK(from_local("Africa/Conakry", 1482733011), 1482733011);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Conakry" << std::endl;
    }
    if (has_timezone("Africa/Dakar")) {
        TZ_CHECK(from_utc("Africa/Dakar", 1502652590), 1502652590);
        TZ_CHECK(from_local("Africa/Dakar", 1502652590), 1502652590);
        TZ_CHECK(from_utc("Africa/Dakar", 1502962313), 1502962313);
        TZ_CHECK(from_local("Africa/Dakar", 1502962313), 1502962313);
        TZ_CHECK(from_utc("Africa/Dakar", 1542501991), 1542501991);
        TZ_CHECK(from_local("Africa/Dakar", 1542501991), 1542501991);
        TZ_CHECK(from_utc("Africa/Dakar", 1488968715), 1488968715);
        TZ_CHECK(from_local("Africa/Dakar", 1488968715), 1488968715);
        TZ_CHECK(from_utc("Africa/Dakar", 1415085661), 1415085661);
        TZ_CHECK(from_local("Africa/Dakar", 1415085661), 1415085661);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Dakar" << std::endl;
    }
    if (has_timezone("Africa/Dar_es_Salaam")) {
        TZ_CHECK(from_utc("Africa/Dar_es_Salaam", 1433263507), 1433274307);
        TZ_CHECK(from_local("Africa/Dar_es_Salaam", 1433274307), 1433263507);
        TZ_CHECK(from_utc("Africa/Dar_es_Salaam", 1437987888), 1437998688);
        TZ_CHECK(from_local("Africa/Dar_es_Salaam", 1437998688), 1437987888);
        TZ_CHECK(from_utc("Africa/Dar_es_Salaam", 1503141477), 1503152277);
        TZ_CHECK(from_local("Africa/Dar_es_Salaam", 1503152277), 1503141477);
        TZ_CHECK(from_utc("Africa/Dar_es_Salaam", 1493088711), 1493099511);
        TZ_CHECK(from_local("Africa/Dar_es_Salaam", 1493099511), 1493088711);
        TZ_CHECK(from_utc("Africa/Dar_es_Salaam", 1442628159), 1442638959);
        TZ_CHECK(from_local("Africa/Dar_es_Salaam", 1442638959), 1442628159);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Dar_es_Salaam" << std::endl;
    }
    if (has_timezone("Africa/Djibouti")) {
        TZ_CHECK(from_utc("Africa/Djibouti", 1467594211), 1467605011);
        TZ_CHECK(from_local("Africa/Djibouti", 1467605011), 1467594211);
        TZ_CHECK(from_utc("Africa/Djibouti", 1486176288), 1486187088);
        TZ_CHECK(from_local("Africa/Djibouti", 1486187088), 1486176288);
        TZ_CHECK(from_utc("Africa/Djibouti", 1491587743), 1491598543);
        TZ_CHECK(from_local("Africa/Djibouti", 1491598543), 1491587743);
        TZ_CHECK(from_utc("Africa/Djibouti", 1549338723), 1549349523);
        TZ_CHECK(from_local("Africa/Djibouti", 1549349523), 1549338723);
        TZ_CHECK(from_utc("Africa/Djibouti", 1484240049), 1484250849);
        TZ_CHECK(from_local("Africa/Djibouti", 1484250849), 1484240049);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Djibouti" << std::endl;
    }
    if (has_timezone("Africa/Douala")) {
        TZ_CHECK(from_utc("Africa/Douala", 1442311953), 1442315553);
        TZ_CHECK(from_local("Africa/Douala", 1442315553), 1442311953);
        TZ_CHECK(from_utc("Africa/Douala", 1577360223), 1577363823);
        TZ_CHECK(from_local("Africa/Douala", 1577363823), 1577360223);
        TZ_CHECK(from_utc("Africa/Douala", 1558886237), 1558889837);
        TZ_CHECK(from_local("Africa/Douala", 1558889837), 1558886237);
        TZ_CHECK(from_utc("Africa/Douala", 1453415786), 1453419386);
        TZ_CHECK(from_local("Africa/Douala", 1453419386), 1453415786);
        TZ_CHECK(from_utc("Africa/Douala", 1460959784), 1460963384);
        TZ_CHECK(from_local("Africa/Douala", 1460963384), 1460959784);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Douala" << std::endl;
    }
    if (has_timezone("Africa/El_Aaiun")) {
        TZ_CHECK(from_utc("Africa/El_Aaiun", 1578705875), 1578709475);
        TZ_CHECK(from_local("Africa/El_Aaiun", 1578709475), 1578705875);
        TZ_CHECK(from_utc("Africa/El_Aaiun", 1556694237), 1556697837);
        TZ_CHECK(from_local("Africa/El_Aaiun", 1556697837), 1556694237);
        TZ_CHECK(from_utc("Africa/El_Aaiun", 1411782051), 1411785651);
        TZ_CHECK(from_local("Africa/El_Aaiun", 1411785651), 1411782051);
        TZ_CHECK(from_utc("Africa/El_Aaiun", 1600994069), 1600997669);
        TZ_CHECK(from_local("Africa/El_Aaiun", 1600997669), 1600994069);
        TZ_CHECK(from_utc("Africa/El_Aaiun", 1535381720), 1535385320);
        TZ_CHECK(from_local("Africa/El_Aaiun", 1535385320), 1535381720);
    } else {
        std::cerr << "NO TIMEZONE: Africa/El_Aaiun" << std::endl;
    }
    if (has_timezone("Africa/Freetown")) {
        TZ_CHECK(from_utc("Africa/Freetown", 1626938713), 1626938713);
        TZ_CHECK(from_local("Africa/Freetown", 1626938713), 1626938713);
        TZ_CHECK(from_utc("Africa/Freetown", 1520898268), 1520898268);
        TZ_CHECK(from_local("Africa/Freetown", 1520898268), 1520898268);
        TZ_CHECK(from_utc("Africa/Freetown", 1559787972), 1559787972);
        TZ_CHECK(from_local("Africa/Freetown", 1559787972), 1559787972);
        TZ_CHECK(from_utc("Africa/Freetown", 1443492008), 1443492008);
        TZ_CHECK(from_local("Africa/Freetown", 1443492008), 1443492008);
        TZ_CHECK(from_utc("Africa/Freetown", 1472663964), 1472663964);
        TZ_CHECK(from_local("Africa/Freetown", 1472663964), 1472663964);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Freetown" << std::endl;
    }
    if (has_timezone("Africa/Gaborone")) {
        TZ_CHECK(from_utc("Africa/Gaborone", 1515635392), 1515642592);
        TZ_CHECK(from_local("Africa/Gaborone", 1515642592), 1515635392);
        TZ_CHECK(from_utc("Africa/Gaborone", 1413236700), 1413243900);
        TZ_CHECK(from_local("Africa/Gaborone", 1413243900), 1413236700);
        TZ_CHECK(from_utc("Africa/Gaborone", 1503218282), 1503225482);
        TZ_CHECK(from_local("Africa/Gaborone", 1503225482), 1503218282);
        TZ_CHECK(from_utc("Africa/Gaborone", 1450676836), 1450684036);
        TZ_CHECK(from_local("Africa/Gaborone", 1450684036), 1450676836);
        TZ_CHECK(from_utc("Africa/Gaborone", 1428284796), 1428291996);
        TZ_CHECK(from_local("Africa/Gaborone", 1428291996), 1428284796);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Gaborone" << std::endl;
    }
    if (has_timezone("Africa/Harare")) {
        TZ_CHECK(from_utc("Africa/Harare", 1456545419), 1456552619);
        TZ_CHECK(from_local("Africa/Harare", 1456552619), 1456545419);
        TZ_CHECK(from_utc("Africa/Harare", 1562973133), 1562980333);
        TZ_CHECK(from_local("Africa/Harare", 1562980333), 1562973133);
        TZ_CHECK(from_utc("Africa/Harare", 1418053120), 1418060320);
        TZ_CHECK(from_local("Africa/Harare", 1418060320), 1418053120);
        TZ_CHECK(from_utc("Africa/Harare", 1605172970), 1605180170);
        TZ_CHECK(from_local("Africa/Harare", 1605180170), 1605172970);
        TZ_CHECK(from_utc("Africa/Harare", 1574166120), 1574173320);
        TZ_CHECK(from_local("Africa/Harare", 1574173320), 1574166120);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Harare" << std::endl;
    }
    if (has_timezone("Africa/Johannesburg")) {
        TZ_CHECK(from_utc("Africa/Johannesburg", 1585901982), 1585909182);
        TZ_CHECK(from_local("Africa/Johannesburg", 1585909182), 1585901982);
        TZ_CHECK(from_utc("Africa/Johannesburg", 1482303014), 1482310214);
        TZ_CHECK(from_local("Africa/Johannesburg", 1482310214), 1482303014);
        TZ_CHECK(from_utc("Africa/Johannesburg", 1410012909), 1410020109);
        TZ_CHECK(from_local("Africa/Johannesburg", 1410020109), 1410012909);
        TZ_CHECK(from_utc("Africa/Johannesburg", 1596402059), 1596409259);
        TZ_CHECK(from_local("Africa/Johannesburg", 1596409259), 1596402059);
        TZ_CHECK(from_utc("Africa/Johannesburg", 1590557350), 1590564550);
        TZ_CHECK(from_local("Africa/Johannesburg", 1590564550), 1590557350);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Johannesburg" << std::endl;
    }
    if (has_timezone("Africa/Juba")) {
        TZ_CHECK(from_utc("Africa/Juba", 1478315967), 1478326767);
        TZ_CHECK(from_local("Africa/Juba", 1478326767), 1478315967);
        TZ_CHECK(from_utc("Africa/Juba", 1624488235), 1624499035);
        TZ_CHECK(from_local("Africa/Juba", 1624499035), 1624488235);
        TZ_CHECK(from_utc("Africa/Juba", 1460689335), 1460700135);
        TZ_CHECK(from_local("Africa/Juba", 1460700135), 1460689335);
        TZ_CHECK(from_utc("Africa/Juba", 1503960623), 1503971423);
        TZ_CHECK(from_local("Africa/Juba", 1503971423), 1503960623);
        TZ_CHECK(from_utc("Africa/Juba", 1472597032), 1472607832);
        TZ_CHECK(from_local("Africa/Juba", 1472607832), 1472597032);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Juba" << std::endl;
    }
    if (has_timezone("Africa/Kampala")) {
        TZ_CHECK(from_utc("Africa/Kampala", 1609684279), 1609695079);
        TZ_CHECK(from_local("Africa/Kampala", 1609695079), 1609684279);
        TZ_CHECK(from_utc("Africa/Kampala", 1576226114), 1576236914);
        TZ_CHECK(from_local("Africa/Kampala", 1576236914), 1576226114);
        TZ_CHECK(from_utc("Africa/Kampala", 1561880543), 1561891343);
        TZ_CHECK(from_local("Africa/Kampala", 1561891343), 1561880543);
        TZ_CHECK(from_utc("Africa/Kampala", 1542902316), 1542913116);
        TZ_CHECK(from_local("Africa/Kampala", 1542913116), 1542902316);
        TZ_CHECK(from_utc("Africa/Kampala", 1513538240), 1513549040);
        TZ_CHECK(from_local("Africa/Kampala", 1513549040), 1513538240);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kampala" << std::endl;
    }
    if (has_timezone("Africa/Khartoum")) {
        TZ_CHECK(from_utc("Africa/Khartoum", 1595411353), 1595418553);
        TZ_CHECK(from_local("Africa/Khartoum", 1595418553), 1595411353);
        TZ_CHECK(from_utc("Africa/Khartoum", 1529795288), 1529802488);
        TZ_CHECK(from_local("Africa/Khartoum", 1529802488), 1529795288);
        TZ_CHECK(from_utc("Africa/Khartoum", 1456410881), 1456421681);
        TZ_CHECK(from_local("Africa/Khartoum", 1456421681), 1456410881);
        TZ_CHECK(from_utc("Africa/Khartoum", 1411544449), 1411555249);
        TZ_CHECK(from_local("Africa/Khartoum", 1411555249), 1411544449);
        TZ_CHECK(from_utc("Africa/Khartoum", 1489063365), 1489074165);
        TZ_CHECK(from_local("Africa/Khartoum", 1489074165), 1489063365);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Khartoum" << std::endl;
    }
    if (has_timezone("Africa/Kigali")) {
        TZ_CHECK(from_utc("Africa/Kigali", 1593670076), 1593677276);
        TZ_CHECK(from_local("Africa/Kigali", 1593677276), 1593670076);
        TZ_CHECK(from_utc("Africa/Kigali", 1571889228), 1571896428);
        TZ_CHECK(from_local("Africa/Kigali", 1571896428), 1571889228);
        TZ_CHECK(from_utc("Africa/Kigali", 1441177775), 1441184975);
        TZ_CHECK(from_local("Africa/Kigali", 1441184975), 1441177775);
        TZ_CHECK(from_utc("Africa/Kigali", 1536610224), 1536617424);
        TZ_CHECK(from_local("Africa/Kigali", 1536617424), 1536610224);
        TZ_CHECK(from_utc("Africa/Kigali", 1449713564), 1449720764);
        TZ_CHECK(from_local("Africa/Kigali", 1449720764), 1449713564);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kigali" << std::endl;
    }
    if (has_timezone("Africa/Kinshasa")) {
        TZ_CHECK(from_utc("Africa/Kinshasa", 1414435658), 1414439258);
        TZ_CHECK(from_local("Africa/Kinshasa", 1414439258), 1414435658);
        TZ_CHECK(from_utc("Africa/Kinshasa", 1410057934), 1410061534);
        TZ_CHECK(from_local("Africa/Kinshasa", 1410061534), 1410057934);
        TZ_CHECK(from_utc("Africa/Kinshasa", 1454318233), 1454321833);
        TZ_CHECK(from_local("Africa/Kinshasa", 1454321833), 1454318233);
        TZ_CHECK(from_utc("Africa/Kinshasa", 1517434143), 1517437743);
        TZ_CHECK(from_local("Africa/Kinshasa", 1517437743), 1517434143);
        TZ_CHECK(from_utc("Africa/Kinshasa", 1520899981), 1520903581);
        TZ_CHECK(from_local("Africa/Kinshasa", 1520903581), 1520899981);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kinshasa" << std::endl;
    }
    if (has_timezone("Africa/Lagos")) {
        TZ_CHECK(from_utc("Africa/Lagos", 1458578907), 1458582507);
        TZ_CHECK(from_local("Africa/Lagos", 1458582507), 1458578907);
        TZ_CHECK(from_utc("Africa/Lagos", 1473341687), 1473345287);
        TZ_CHECK(from_local("Africa/Lagos", 1473345287), 1473341687);
        TZ_CHECK(from_utc("Africa/Lagos", 1512130683), 1512134283);
        TZ_CHECK(from_local("Africa/Lagos", 1512134283), 1512130683);
        TZ_CHECK(from_utc("Africa/Lagos", 1600748163), 1600751763);
        TZ_CHECK(from_local("Africa/Lagos", 1600751763), 1600748163);
        TZ_CHECK(from_utc("Africa/Lagos", 1607298956), 1607302556);
        TZ_CHECK(from_local("Africa/Lagos", 1607302556), 1607298956);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lagos" << std::endl;
    }
    if (has_timezone("Africa/Libreville")) {
        TZ_CHECK(from_utc("Africa/Libreville", 1594590485), 1594594085);
        TZ_CHECK(from_local("Africa/Libreville", 1594594085), 1594590485);
        TZ_CHECK(from_utc("Africa/Libreville", 1586753172), 1586756772);
        TZ_CHECK(from_local("Africa/Libreville", 1586756772), 1586753172);
        TZ_CHECK(from_utc("Africa/Libreville", 1434747215), 1434750815);
        TZ_CHECK(from_local("Africa/Libreville", 1434750815), 1434747215);
        TZ_CHECK(from_utc("Africa/Libreville", 1612804836), 1612808436);
        TZ_CHECK(from_local("Africa/Libreville", 1612808436), 1612804836);
        TZ_CHECK(from_utc("Africa/Libreville", 1545936387), 1545939987);
        TZ_CHECK(from_local("Africa/Libreville", 1545939987), 1545936387);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Libreville" << std::endl;
    }
    if (has_timezone("Africa/Lome")) {
        TZ_CHECK(from_utc("Africa/Lome", 1471137996), 1471137996);
        TZ_CHECK(from_local("Africa/Lome", 1471137996), 1471137996);
        TZ_CHECK(from_utc("Africa/Lome", 1557896946), 1557896946);
        TZ_CHECK(from_local("Africa/Lome", 1557896946), 1557896946);
        TZ_CHECK(from_utc("Africa/Lome", 1458341698), 1458341698);
        TZ_CHECK(from_local("Africa/Lome", 1458341698), 1458341698);
        TZ_CHECK(from_utc("Africa/Lome", 1488307798), 1488307798);
        TZ_CHECK(from_local("Africa/Lome", 1488307798), 1488307798);
        TZ_CHECK(from_utc("Africa/Lome", 1440028153), 1440028153);
        TZ_CHECK(from_local("Africa/Lome", 1440028153), 1440028153);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lome" << std::endl;
    }
    if (has_timezone("Africa/Luanda")) {
        TZ_CHECK(from_utc("Africa/Luanda", 1623048344), 1623051944);
        TZ_CHECK(from_local("Africa/Luanda", 1623051944), 1623048344);
        TZ_CHECK(from_utc("Africa/Luanda", 1627870301), 1627873901);
        TZ_CHECK(from_local("Africa/Luanda", 1627873901), 1627870301);
        TZ_CHECK(from_utc("Africa/Luanda", 1583173673), 1583177273);
        TZ_CHECK(from_local("Africa/Luanda", 1583177273), 1583173673);
        TZ_CHECK(from_utc("Africa/Luanda", 1504596451), 1504600051);
        TZ_CHECK(from_local("Africa/Luanda", 1504600051), 1504596451);
        TZ_CHECK(from_utc("Africa/Luanda", 1442829979), 1442833579);
        TZ_CHECK(from_local("Africa/Luanda", 1442833579), 1442829979);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Luanda" << std::endl;
    }
    if (has_timezone("Africa/Lubumbashi")) {
        TZ_CHECK(from_utc("Africa/Lubumbashi", 1520846881), 1520854081);
        TZ_CHECK(from_local("Africa/Lubumbashi", 1520854081), 1520846881);
        TZ_CHECK(from_utc("Africa/Lubumbashi", 1428882186), 1428889386);
        TZ_CHECK(from_local("Africa/Lubumbashi", 1428889386), 1428882186);
        TZ_CHECK(from_utc("Africa/Lubumbashi", 1483738542), 1483745742);
        TZ_CHECK(from_local("Africa/Lubumbashi", 1483745742), 1483738542);
        TZ_CHECK(from_utc("Africa/Lubumbashi", 1445512995), 1445520195);
        TZ_CHECK(from_local("Africa/Lubumbashi", 1445520195), 1445512995);
        TZ_CHECK(from_utc("Africa/Lubumbashi", 1569214203), 1569221403);
        TZ_CHECK(from_local("Africa/Lubumbashi", 1569221403), 1569214203);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lubumbashi" << std::endl;
    }
    if (has_timezone("Africa/Lusaka")) {
        TZ_CHECK(from_utc("Africa/Lusaka", 1584763296), 1584770496);
        TZ_CHECK(from_local("Africa/Lusaka", 1584770496), 1584763296);
        TZ_CHECK(from_utc("Africa/Lusaka", 1463795780), 1463802980);
        TZ_CHECK(from_local("Africa/Lusaka", 1463802980), 1463795780);
        TZ_CHECK(from_utc("Africa/Lusaka", 1448868814), 1448876014);
        TZ_CHECK(from_local("Africa/Lusaka", 1448876014), 1448868814);
        TZ_CHECK(from_utc("Africa/Lusaka", 1622605279), 1622612479);
        TZ_CHECK(from_local("Africa/Lusaka", 1622612479), 1622605279);
        TZ_CHECK(from_utc("Africa/Lusaka", 1547876251), 1547883451);
        TZ_CHECK(from_local("Africa/Lusaka", 1547883451), 1547876251);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lusaka" << std::endl;
    }
    if (has_timezone("Africa/Malabo")) {
        TZ_CHECK(from_utc("Africa/Malabo", 1539184767), 1539188367);
        TZ_CHECK(from_local("Africa/Malabo", 1539188367), 1539184767);
        TZ_CHECK(from_utc("Africa/Malabo", 1623524511), 1623528111);
        TZ_CHECK(from_local("Africa/Malabo", 1623528111), 1623524511);
        TZ_CHECK(from_utc("Africa/Malabo", 1520004565), 1520008165);
        TZ_CHECK(from_local("Africa/Malabo", 1520008165), 1520004565);
        TZ_CHECK(from_utc("Africa/Malabo", 1497760643), 1497764243);
        TZ_CHECK(from_local("Africa/Malabo", 1497764243), 1497760643);
        TZ_CHECK(from_utc("Africa/Malabo", 1584901931), 1584905531);
        TZ_CHECK(from_local("Africa/Malabo", 1584905531), 1584901931);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Malabo" << std::endl;
    }
    if (has_timezone("Africa/Maputo")) {
        TZ_CHECK(from_utc("Africa/Maputo", 1515591552), 1515598752);
        TZ_CHECK(from_local("Africa/Maputo", 1515598752), 1515591552);
        TZ_CHECK(from_utc("Africa/Maputo", 1490180670), 1490187870);
        TZ_CHECK(from_local("Africa/Maputo", 1490187870), 1490180670);
        TZ_CHECK(from_utc("Africa/Maputo", 1534251008), 1534258208);
        TZ_CHECK(from_local("Africa/Maputo", 1534258208), 1534251008);
        TZ_CHECK(from_utc("Africa/Maputo", 1628063921), 1628071121);
        TZ_CHECK(from_local("Africa/Maputo", 1628071121), 1628063921);
        TZ_CHECK(from_utc("Africa/Maputo", 1444869317), 1444876517);
        TZ_CHECK(from_local("Africa/Maputo", 1444876517), 1444869317);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Maputo" << std::endl;
    }
    if (has_timezone("Africa/Maseru")) {
        TZ_CHECK(from_utc("Africa/Maseru", 1563944394), 1563951594);
        TZ_CHECK(from_local("Africa/Maseru", 1563951594), 1563944394);
        TZ_CHECK(from_utc("Africa/Maseru", 1568216639), 1568223839);
        TZ_CHECK(from_local("Africa/Maseru", 1568223839), 1568216639);
        TZ_CHECK(from_utc("Africa/Maseru", 1466544771), 1466551971);
        TZ_CHECK(from_local("Africa/Maseru", 1466551971), 1466544771);
        TZ_CHECK(from_utc("Africa/Maseru", 1522044449), 1522051649);
        TZ_CHECK(from_local("Africa/Maseru", 1522051649), 1522044449);
        TZ_CHECK(from_utc("Africa/Maseru", 1482739402), 1482746602);
        TZ_CHECK(from_local("Africa/Maseru", 1482746602), 1482739402);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Maseru" << std::endl;
    }
    if (has_timezone("Africa/Mbabane")) {
        TZ_CHECK(from_utc("Africa/Mbabane", 1572444798), 1572451998);
        TZ_CHECK(from_local("Africa/Mbabane", 1572451998), 1572444798);
        TZ_CHECK(from_utc("Africa/Mbabane", 1425133324), 1425140524);
        TZ_CHECK(from_local("Africa/Mbabane", 1425140524), 1425133324);
        TZ_CHECK(from_utc("Africa/Mbabane", 1413171038), 1413178238);
        TZ_CHECK(from_local("Africa/Mbabane", 1413178238), 1413171038);
        TZ_CHECK(from_utc("Africa/Mbabane", 1427665424), 1427672624);
        TZ_CHECK(from_local("Africa/Mbabane", 1427672624), 1427665424);
        TZ_CHECK(from_utc("Africa/Mbabane", 1503065692), 1503072892);
        TZ_CHECK(from_local("Africa/Mbabane", 1503072892), 1503065692);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Mbabane" << std::endl;
    }
    if (has_timezone("Africa/Mogadishu")) {
        TZ_CHECK(from_utc("Africa/Mogadishu", 1531996758), 1532007558);
        TZ_CHECK(from_local("Africa/Mogadishu", 1532007558), 1531996758);
        TZ_CHECK(from_utc("Africa/Mogadishu", 1456590947), 1456601747);
        TZ_CHECK(from_local("Africa/Mogadishu", 1456601747), 1456590947);
        TZ_CHECK(from_utc("Africa/Mogadishu", 1565817577), 1565828377);
        TZ_CHECK(from_local("Africa/Mogadishu", 1565828377), 1565817577);
        TZ_CHECK(from_utc("Africa/Mogadishu", 1560282523), 1560293323);
        TZ_CHECK(from_local("Africa/Mogadishu", 1560293323), 1560282523);
        TZ_CHECK(from_utc("Africa/Mogadishu", 1430934429), 1430945229);
        TZ_CHECK(from_local("Africa/Mogadishu", 1430945229), 1430934429);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Mogadishu" << std::endl;
    }
    if (has_timezone("Africa/Monrovia")) {
        TZ_CHECK(from_utc("Africa/Monrovia", 1474387054), 1474387054);
        TZ_CHECK(from_local("Africa/Monrovia", 1474387054), 1474387054);
        TZ_CHECK(from_utc("Africa/Monrovia", 1441573370), 1441573370);
        TZ_CHECK(from_local("Africa/Monrovia", 1441573370), 1441573370);
        TZ_CHECK(from_utc("Africa/Monrovia", 1589977646), 1589977646);
        TZ_CHECK(from_local("Africa/Monrovia", 1589977646), 1589977646);
        TZ_CHECK(from_utc("Africa/Monrovia", 1613872799), 1613872799);
        TZ_CHECK(from_local("Africa/Monrovia", 1613872799), 1613872799);
        TZ_CHECK(from_utc("Africa/Monrovia", 1458200964), 1458200964);
        TZ_CHECK(from_local("Africa/Monrovia", 1458200964), 1458200964);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Monrovia" << std::endl;
    }
    if (has_timezone("Africa/Nairobi")) {
        TZ_CHECK(from_utc("Africa/Nairobi", 1459551417), 1459562217);
        TZ_CHECK(from_local("Africa/Nairobi", 1459562217), 1459551417);
        TZ_CHECK(from_utc("Africa/Nairobi", 1570176172), 1570186972);
        TZ_CHECK(from_local("Africa/Nairobi", 1570186972), 1570176172);
        TZ_CHECK(from_utc("Africa/Nairobi", 1454202352), 1454213152);
        TZ_CHECK(from_local("Africa/Nairobi", 1454213152), 1454202352);
        TZ_CHECK(from_utc("Africa/Nairobi", 1571756297), 1571767097);
        TZ_CHECK(from_local("Africa/Nairobi", 1571767097), 1571756297);
        TZ_CHECK(from_utc("Africa/Nairobi", 1500567466), 1500578266);
        TZ_CHECK(from_local("Africa/Nairobi", 1500578266), 1500567466);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Nairobi" << std::endl;
    }
    if (has_timezone("Africa/Ndjamena")) {
        TZ_CHECK(from_utc("Africa/Ndjamena", 1456630241), 1456633841);
        TZ_CHECK(from_local("Africa/Ndjamena", 1456633841), 1456630241);
        TZ_CHECK(from_utc("Africa/Ndjamena", 1411918659), 1411922259);
        TZ_CHECK(from_local("Africa/Ndjamena", 1411922259), 1411918659);
        TZ_CHECK(from_utc("Africa/Ndjamena", 1443358620), 1443362220);
        TZ_CHECK(from_local("Africa/Ndjamena", 1443362220), 1443358620);
        TZ_CHECK(from_utc("Africa/Ndjamena", 1541511990), 1541515590);
        TZ_CHECK(from_local("Africa/Ndjamena", 1541515590), 1541511990);
        TZ_CHECK(from_utc("Africa/Ndjamena", 1612454083), 1612457683);
        TZ_CHECK(from_local("Africa/Ndjamena", 1612457683), 1612454083);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ndjamena" << std::endl;
    }
    if (has_timezone("Africa/Niamey")) {
        TZ_CHECK(from_utc("Africa/Niamey", 1617940905), 1617944505);
        TZ_CHECK(from_local("Africa/Niamey", 1617944505), 1617940905);
        TZ_CHECK(from_utc("Africa/Niamey", 1594503449), 1594507049);
        TZ_CHECK(from_local("Africa/Niamey", 1594507049), 1594503449);
        TZ_CHECK(from_utc("Africa/Niamey", 1480803481), 1480807081);
        TZ_CHECK(from_local("Africa/Niamey", 1480807081), 1480803481);
        TZ_CHECK(from_utc("Africa/Niamey", 1417998274), 1418001874);
        TZ_CHECK(from_local("Africa/Niamey", 1418001874), 1417998274);
        TZ_CHECK(from_utc("Africa/Niamey", 1546162974), 1546166574);
        TZ_CHECK(from_local("Africa/Niamey", 1546166574), 1546162974);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Niamey" << std::endl;
    }
    if (has_timezone("Africa/Nouakchott")) {
        TZ_CHECK(from_utc("Africa/Nouakchott", 1420635123), 1420635123);
        TZ_CHECK(from_local("Africa/Nouakchott", 1420635123), 1420635123);
        TZ_CHECK(from_utc("Africa/Nouakchott", 1453717652), 1453717652);
        TZ_CHECK(from_local("Africa/Nouakchott", 1453717652), 1453717652);
        TZ_CHECK(from_utc("Africa/Nouakchott", 1558311872), 1558311872);
        TZ_CHECK(from_local("Africa/Nouakchott", 1558311872), 1558311872);
        TZ_CHECK(from_utc("Africa/Nouakchott", 1411917933), 1411917933);
        TZ_CHECK(from_local("Africa/Nouakchott", 1411917933), 1411917933);
        TZ_CHECK(from_utc("Africa/Nouakchott", 1474619058), 1474619058);
        TZ_CHECK(from_local("Africa/Nouakchott", 1474619058), 1474619058);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Nouakchott" << std::endl;
    }
    if (has_timezone("Africa/Ouagadougou")) {
        TZ_CHECK(from_utc("Africa/Ouagadougou", 1411178372), 1411178372);
        TZ_CHECK(from_local("Africa/Ouagadougou", 1411178372), 1411178372);
        TZ_CHECK(from_utc("Africa/Ouagadougou", 1538511035), 1538511035);
        TZ_CHECK(from_local("Africa/Ouagadougou", 1538511035), 1538511035);
        TZ_CHECK(from_utc("Africa/Ouagadougou", 1420056288), 1420056288);
        TZ_CHECK(from_local("Africa/Ouagadougou", 1420056288), 1420056288);
        TZ_CHECK(from_utc("Africa/Ouagadougou", 1445729713), 1445729713);
        TZ_CHECK(from_local("Africa/Ouagadougou", 1445729713), 1445729713);
        TZ_CHECK(from_utc("Africa/Ouagadougou", 1474173023), 1474173023);
        TZ_CHECK(from_local("Africa/Ouagadougou", 1474173023), 1474173023);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ouagadougou" << std::endl;
    }
    if (has_timezone("Africa/Porto-Novo")) {
        TZ_CHECK(from_utc("Africa/Porto-Novo", 1585738344), 1585741944);
        TZ_CHECK(from_local("Africa/Porto-Novo", 1585741944), 1585738344);
        TZ_CHECK(from_utc("Africa/Porto-Novo", 1505394941), 1505398541);
        TZ_CHECK(from_local("Africa/Porto-Novo", 1505398541), 1505394941);
        TZ_CHECK(from_utc("Africa/Porto-Novo", 1473588234), 1473591834);
        TZ_CHECK(from_local("Africa/Porto-Novo", 1473591834), 1473588234);
        TZ_CHECK(from_utc("Africa/Porto-Novo", 1469967758), 1469971358);
        TZ_CHECK(from_local("Africa/Porto-Novo", 1469971358), 1469967758);
        TZ_CHECK(from_utc("Africa/Porto-Novo", 1589342489), 1589346089);
        TZ_CHECK(from_local("Africa/Porto-Novo", 1589346089), 1589342489);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Porto-Novo" << std::endl;
    }
    if (has_timezone("Africa/Sao_Tome")) {
        TZ_CHECK(from_utc("Africa/Sao_Tome", 1487451927), 1487451927);
        TZ_CHECK(from_local("Africa/Sao_Tome", 1487451927), 1487451927);
        TZ_CHECK(from_utc("Africa/Sao_Tome", 1617651850), 1617651850);
        TZ_CHECK(from_local("Africa/Sao_Tome", 1617651850), 1617651850);
        TZ_CHECK(from_utc("Africa/Sao_Tome", 1481426958), 1481426958);
        TZ_CHECK(from_local("Africa/Sao_Tome", 1481426958), 1481426958);
        TZ_CHECK(from_utc("Africa/Sao_Tome", 1509960788), 1509960788);
        TZ_CHECK(from_local("Africa/Sao_Tome", 1509960788), 1509960788);
        TZ_CHECK(from_utc("Africa/Sao_Tome", 1443127607), 1443127607);
        TZ_CHECK(from_local("Africa/Sao_Tome", 1443127607), 1443127607);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Sao_Tome" << std::endl;
    }
    if (has_timezone("Africa/Timbuktu")) {
        TZ_CHECK(from_utc("Africa/Timbuktu", 1575532693), 1575532693);
        TZ_CHECK(from_local("Africa/Timbuktu", 1575532693), 1575532693);
        TZ_CHECK(from_utc("Africa/Timbuktu", 1449351825), 1449351825);
        TZ_CHECK(from_local("Africa/Timbuktu", 1449351825), 1449351825);
        TZ_CHECK(from_utc("Africa/Timbuktu", 1513760784), 1513760784);
        TZ_CHECK(from_local("Africa/Timbuktu", 1513760784), 1513760784);
        TZ_CHECK(from_utc("Africa/Timbuktu", 1564437751), 1564437751);
        TZ_CHECK(from_local("Africa/Timbuktu", 1564437751), 1564437751);
        TZ_CHECK(from_utc("Africa/Timbuktu", 1482412899), 1482412899);
        TZ_CHECK(from_local("Africa/Timbuktu", 1482412899), 1482412899);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Timbuktu" << std::endl;
    }
    if (has_timezone("Africa/Tripoli")) {
        TZ_CHECK(from_utc("Africa/Tripoli", 1482903538), 1482910738);
        TZ_CHECK(from_local("Africa/Tripoli", 1482910738), 1482903538);
        TZ_CHECK(from_utc("Africa/Tripoli", 1443424374), 1443431574);
        TZ_CHECK(from_local("Africa/Tripoli", 1443431574), 1443424374);
        TZ_CHECK(from_utc("Africa/Tripoli", 1577768265), 1577775465);
        TZ_CHECK(from_local("Africa/Tripoli", 1577775465), 1577768265);
        TZ_CHECK(from_utc("Africa/Tripoli", 1511015539), 1511022739);
        TZ_CHECK(from_local("Africa/Tripoli", 1511022739), 1511015539);
        TZ_CHECK(from_utc("Africa/Tripoli", 1412018356), 1412025556);
        TZ_CHECK(from_local("Africa/Tripoli", 1412025556), 1412018356);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Tripoli" << std::endl;
    }
    if (has_timezone("Africa/Tunis")) {
        TZ_CHECK(from_utc("Africa/Tunis", 1571580017), 1571583617);
        TZ_CHECK(from_local("Africa/Tunis", 1571583617), 1571580017);
        TZ_CHECK(from_utc("Africa/Tunis", 1567885410), 1567889010);
        TZ_CHECK(from_local("Africa/Tunis", 1567889010), 1567885410);
        TZ_CHECK(from_utc("Africa/Tunis", 1593607837), 1593611437);
        TZ_CHECK(from_local("Africa/Tunis", 1593611437), 1593607837);
        TZ_CHECK(from_utc("Africa/Tunis", 1470251147), 1470254747);
        TZ_CHECK(from_local("Africa/Tunis", 1470254747), 1470251147);
        TZ_CHECK(from_utc("Africa/Tunis", 1414825740), 1414829340);
        TZ_CHECK(from_local("Africa/Tunis", 1414829340), 1414825740);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Tunis" << std::endl;
    }
    if (has_timezone("Africa/Windhoek")) {
        TZ_CHECK(from_utc("Africa/Windhoek", 1450291998), 1450299198);
        TZ_CHECK(from_local("Africa/Windhoek", 1450299198), 1450291998);
        TZ_CHECK(from_utc("Africa/Windhoek", 1460359725), 1460363325);
        TZ_CHECK(from_local("Africa/Windhoek", 1460363325), 1460359725);
        TZ_CHECK(from_utc("Africa/Windhoek", 1576085190), 1576092390);
        TZ_CHECK(from_local("Africa/Windhoek", 1576092390), 1576085190);
        TZ_CHECK(from_utc("Africa/Windhoek", 1608811330), 1608818530);
        TZ_CHECK(from_local("Africa/Windhoek", 1608818530), 1608811330);
        TZ_CHECK(from_utc("Africa/Windhoek", 1568548791), 1568555991);
        TZ_CHECK(from_local("Africa/Windhoek", 1568555991), 1568548791);
    } else {
        std::cerr << "NO TIMEZONE: Africa/Windhoek" << std::endl;
    }
    if (has_timezone("America/Adak")) {
        TZ_CHECK(from_utc("America/Adak", 1630239115), 1630206715);
        TZ_CHECK(from_local("America/Adak", 1630206715), 1630239115);
        TZ_CHECK(from_utc("America/Adak", 1491545059), 1491512659);
        TZ_CHECK(from_local("America/Adak", 1491512659), 1491545059);
        TZ_CHECK(from_utc("America/Adak", 1591410118), 1591377718);
        TZ_CHECK(from_local("America/Adak", 1591377718), 1591410118);
        TZ_CHECK(from_utc("America/Adak", 1523234647), 1523202247);
        TZ_CHECK(from_local("America/Adak", 1523202247), 1523234647);
        TZ_CHECK(from_utc("America/Adak", 1515013219), 1514977219);
        TZ_CHECK(from_local("America/Adak", 1514977219), 1515013219);
    } else {
        std::cerr << "NO TIMEZONE: America/Adak" << std::endl;
    }
    if (has_timezone("America/Anchorage")) {
        TZ_CHECK(from_utc("America/Anchorage", 1426748711), 1426719911);
        TZ_CHECK(from_local("America/Anchorage", 1426719911), 1426748711);
        TZ_CHECK(from_utc("America/Anchorage", 1598782274), 1598753474);
        TZ_CHECK(from_local("America/Anchorage", 1598753474), 1598782274);
        TZ_CHECK(from_utc("America/Anchorage", 1438203332), 1438174532);
        TZ_CHECK(from_local("America/Anchorage", 1438174532), 1438203332);
        TZ_CHECK(from_utc("America/Anchorage", 1467704396), 1467675596);
        TZ_CHECK(from_local("America/Anchorage", 1467675596), 1467704396);
        TZ_CHECK(from_utc("America/Anchorage", 1517528770), 1517496370);
        TZ_CHECK(from_local("America/Anchorage", 1517496370), 1517528770);
    } else {
        std::cerr << "NO TIMEZONE: America/Anchorage" << std::endl;
    }
    if (has_timezone("America/Anguilla")) {
        TZ_CHECK(from_utc("America/Anguilla", 1610646049), 1610631649);
        TZ_CHECK(from_local("America/Anguilla", 1610631649), 1610646049);
        TZ_CHECK(from_utc("America/Anguilla", 1549037572), 1549023172);
        TZ_CHECK(from_local("America/Anguilla", 1549023172), 1549037572);
        TZ_CHECK(from_utc("America/Anguilla", 1576560704), 1576546304);
        TZ_CHECK(from_local("America/Anguilla", 1576546304), 1576560704);
        TZ_CHECK(from_utc("America/Anguilla", 1565646262), 1565631862);
        TZ_CHECK(from_local("America/Anguilla", 1565631862), 1565646262);
        TZ_CHECK(from_utc("America/Anguilla", 1625532049), 1625517649);
        TZ_CHECK(from_local("America/Anguilla", 1625517649), 1625532049);
    } else {
        std::cerr << "NO TIMEZONE: America/Anguilla" << std::endl;
    }
    if (has_timezone("America/Antigua")) {
        TZ_CHECK(from_utc("America/Antigua", 1529117576), 1529103176);
        TZ_CHECK(from_local("America/Antigua", 1529103176), 1529117576);
        TZ_CHECK(from_utc("America/Antigua", 1606903426), 1606889026);
        TZ_CHECK(from_local("America/Antigua", 1606889026), 1606903426);
        TZ_CHECK(from_utc("America/Antigua", 1466193571), 1466179171);
        TZ_CHECK(from_local("America/Antigua", 1466179171), 1466193571);
        TZ_CHECK(from_utc("America/Antigua", 1492225883), 1492211483);
        TZ_CHECK(from_local("America/Antigua", 1492211483), 1492225883);
        TZ_CHECK(from_utc("America/Antigua", 1501592797), 1501578397);
        TZ_CHECK(from_local("America/Antigua", 1501578397), 1501592797);
    } else {
        std::cerr << "NO TIMEZONE: America/Antigua" << std::endl;
    }
    if (has_timezone("America/Araguaina")) {
        TZ_CHECK(from_utc("America/Araguaina", 1442067406), 1442056606);
        TZ_CHECK(from_local("America/Araguaina", 1442056606), 1442067406);
        TZ_CHECK(from_utc("America/Araguaina", 1500117906), 1500107106);
        TZ_CHECK(from_local("America/Araguaina", 1500107106), 1500117906);
        TZ_CHECK(from_utc("America/Araguaina", 1542008918), 1541998118);
        TZ_CHECK(from_local("America/Araguaina", 1541998118), 1542008918);
        TZ_CHECK(from_utc("America/Araguaina", 1613555327), 1613544527);
        TZ_CHECK(from_local("America/Araguaina", 1613544527), 1613555327);
        TZ_CHECK(from_utc("America/Araguaina", 1488023946), 1488013146);
        TZ_CHECK(from_local("America/Araguaina", 1488013146), 1488023946);
    } else {
        std::cerr << "NO TIMEZONE: America/Araguaina" << std::endl;
    }
    if (has_timezone("America/Argentina/Buenos_Aires")) {
        TZ_CHECK(from_utc("America/Argentina/Buenos_Aires", 1567498519), 1567487719);
        TZ_CHECK(from_local("America/Argentina/Buenos_Aires", 1567487719), 1567498519);
        TZ_CHECK(from_utc("America/Argentina/Buenos_Aires", 1512061491), 1512050691);
        TZ_CHECK(from_local("America/Argentina/Buenos_Aires", 1512050691), 1512061491);
        TZ_CHECK(from_utc("America/Argentina/Buenos_Aires", 1582657459), 1582646659);
        TZ_CHECK(from_local("America/Argentina/Buenos_Aires", 1582646659), 1582657459);
        TZ_CHECK(from_utc("America/Argentina/Buenos_Aires", 1457159554), 1457148754);
        TZ_CHECK(from_local("America/Argentina/Buenos_Aires", 1457148754), 1457159554);
        TZ_CHECK(from_utc("America/Argentina/Buenos_Aires", 1523672280), 1523661480);
        TZ_CHECK(from_local("America/Argentina/Buenos_Aires", 1523661480), 1523672280);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Buenos_Aires" << std::endl;
    }
    if (has_timezone("America/Argentina/Catamarca")) {
        TZ_CHECK(from_utc("America/Argentina/Catamarca", 1565297367), 1565286567);
        TZ_CHECK(from_local("America/Argentina/Catamarca", 1565286567), 1565297367);
        TZ_CHECK(from_utc("America/Argentina/Catamarca", 1538930718), 1538919918);
        TZ_CHECK(from_local("America/Argentina/Catamarca", 1538919918), 1538930718);
        TZ_CHECK(from_utc("America/Argentina/Catamarca", 1623813680), 1623802880);
        TZ_CHECK(from_local("America/Argentina/Catamarca", 1623802880), 1623813680);
        TZ_CHECK(from_utc("America/Argentina/Catamarca", 1630022407), 1630011607);
        TZ_CHECK(from_local("America/Argentina/Catamarca", 1630011607), 1630022407);
        TZ_CHECK(from_utc("America/Argentina/Catamarca", 1609746593), 1609735793);
        TZ_CHECK(from_local("America/Argentina/Catamarca", 1609735793), 1609746593);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Catamarca" << std::endl;
    }
    if (has_timezone("America/Argentina/ComodRivadavia")) {
        TZ_CHECK(from_utc("America/Argentina/ComodRivadavia", 1543242678), 1543231878);
        TZ_CHECK(from_local("America/Argentina/ComodRivadavia", 1543231878), 1543242678);
        TZ_CHECK(from_utc("America/Argentina/ComodRivadavia", 1547630465), 1547619665);
        TZ_CHECK(from_local("America/Argentina/ComodRivadavia", 1547619665), 1547630465);
        TZ_CHECK(from_utc("America/Argentina/ComodRivadavia", 1420481988), 1420471188);
        TZ_CHECK(from_local("America/Argentina/ComodRivadavia", 1420471188), 1420481988);
        TZ_CHECK(from_utc("America/Argentina/ComodRivadavia", 1600181180), 1600170380);
        TZ_CHECK(from_local("America/Argentina/ComodRivadavia", 1600170380), 1600181180);
        TZ_CHECK(from_utc("America/Argentina/ComodRivadavia", 1464911827), 1464901027);
        TZ_CHECK(from_local("America/Argentina/ComodRivadavia", 1464901027), 1464911827);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/ComodRivadavia" << std::endl;
    }
    if (has_timezone("America/Argentina/Cordoba")) {
        TZ_CHECK(from_utc("America/Argentina/Cordoba", 1522747025), 1522736225);
        TZ_CHECK(from_local("America/Argentina/Cordoba", 1522736225), 1522747025);
        TZ_CHECK(from_utc("America/Argentina/Cordoba", 1607210301), 1607199501);
        TZ_CHECK(from_local("America/Argentina/Cordoba", 1607199501), 1607210301);
        TZ_CHECK(from_utc("America/Argentina/Cordoba", 1481047421), 1481036621);
        TZ_CHECK(from_local("America/Argentina/Cordoba", 1481036621), 1481047421);
        TZ_CHECK(from_utc("America/Argentina/Cordoba", 1573954377), 1573943577);
        TZ_CHECK(from_local("America/Argentina/Cordoba", 1573943577), 1573954377);
        TZ_CHECK(from_utc("America/Argentina/Cordoba", 1476639219), 1476628419);
        TZ_CHECK(from_local("America/Argentina/Cordoba", 1476628419), 1476639219);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Cordoba" << std::endl;
    }
    if (has_timezone("America/Argentina/Jujuy")) {
        TZ_CHECK(from_utc("America/Argentina/Jujuy", 1494339926), 1494329126);
        TZ_CHECK(from_local("America/Argentina/Jujuy", 1494329126), 1494339926);
        TZ_CHECK(from_utc("America/Argentina/Jujuy", 1528456499), 1528445699);
        TZ_CHECK(from_local("America/Argentina/Jujuy", 1528445699), 1528456499);
        TZ_CHECK(from_utc("America/Argentina/Jujuy", 1452179482), 1452168682);
        TZ_CHECK(from_local("America/Argentina/Jujuy", 1452168682), 1452179482);
        TZ_CHECK(from_utc("America/Argentina/Jujuy", 1485485619), 1485474819);
        TZ_CHECK(from_local("America/Argentina/Jujuy", 1485474819), 1485485619);
        TZ_CHECK(from_utc("America/Argentina/Jujuy", 1567459837), 1567449037);
        TZ_CHECK(from_local("America/Argentina/Jujuy", 1567449037), 1567459837);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Jujuy" << std::endl;
    }
    if (has_timezone("America/Argentina/La_Rioja")) {
        TZ_CHECK(from_utc("America/Argentina/La_Rioja", 1463329537), 1463318737);
        TZ_CHECK(from_local("America/Argentina/La_Rioja", 1463318737), 1463329537);
        TZ_CHECK(from_utc("America/Argentina/La_Rioja", 1458490491), 1458479691);
        TZ_CHECK(from_local("America/Argentina/La_Rioja", 1458479691), 1458490491);
        TZ_CHECK(from_utc("America/Argentina/La_Rioja", 1585927123), 1585916323);
        TZ_CHECK(from_local("America/Argentina/La_Rioja", 1585916323), 1585927123);
        TZ_CHECK(from_utc("America/Argentina/La_Rioja", 1523609272), 1523598472);
        TZ_CHECK(from_local("America/Argentina/La_Rioja", 1523598472), 1523609272);
        TZ_CHECK(from_utc("America/Argentina/La_Rioja", 1490347582), 1490336782);
        TZ_CHECK(from_local("America/Argentina/La_Rioja", 1490336782), 1490347582);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/La_Rioja" << std::endl;
    }
    if (has_timezone("America/Argentina/Mendoza")) {
        TZ_CHECK(from_utc("America/Argentina/Mendoza", 1565577136), 1565566336);
        TZ_CHECK(from_local("America/Argentina/Mendoza", 1565566336), 1565577136);
        TZ_CHECK(from_utc("America/Argentina/Mendoza", 1529134181), 1529123381);
        TZ_CHECK(from_local("America/Argentina/Mendoza", 1529123381), 1529134181);
        TZ_CHECK(from_utc("America/Argentina/Mendoza", 1552268010), 1552257210);
        TZ_CHECK(from_local("America/Argentina/Mendoza", 1552257210), 1552268010);
        TZ_CHECK(from_utc("America/Argentina/Mendoza", 1558998143), 1558987343);
        TZ_CHECK(from_local("America/Argentina/Mendoza", 1558987343), 1558998143);
        TZ_CHECK(from_utc("America/Argentina/Mendoza", 1604958289), 1604947489);
        TZ_CHECK(from_local("America/Argentina/Mendoza", 1604947489), 1604958289);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Mendoza" << std::endl;
    }
    if (has_timezone("America/Argentina/Rio_Gallegos")) {
        TZ_CHECK(from_utc("America/Argentina/Rio_Gallegos", 1556455950), 1556445150);
        TZ_CHECK(from_local("America/Argentina/Rio_Gallegos", 1556445150), 1556455950);
        TZ_CHECK(from_utc("America/Argentina/Rio_Gallegos", 1435392352), 1435381552);
        TZ_CHECK(from_local("America/Argentina/Rio_Gallegos", 1435381552), 1435392352);
        TZ_CHECK(from_utc("America/Argentina/Rio_Gallegos", 1586993568), 1586982768);
        TZ_CHECK(from_local("America/Argentina/Rio_Gallegos", 1586982768), 1586993568);
        TZ_CHECK(from_utc("America/Argentina/Rio_Gallegos", 1515606017), 1515595217);
        TZ_CHECK(from_local("America/Argentina/Rio_Gallegos", 1515595217), 1515606017);
        TZ_CHECK(from_utc("America/Argentina/Rio_Gallegos", 1566707312), 1566696512);
        TZ_CHECK(from_local("America/Argentina/Rio_Gallegos", 1566696512), 1566707312);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Rio_Gallegos" << std::endl;
    }
    if (has_timezone("America/Argentina/Salta")) {
        TZ_CHECK(from_utc("America/Argentina/Salta", 1612380519), 1612369719);
        TZ_CHECK(from_local("America/Argentina/Salta", 1612369719), 1612380519);
        TZ_CHECK(from_utc("America/Argentina/Salta", 1453550185), 1453539385);
        TZ_CHECK(from_local("America/Argentina/Salta", 1453539385), 1453550185);
        TZ_CHECK(from_utc("America/Argentina/Salta", 1459722710), 1459711910);
        TZ_CHECK(from_local("America/Argentina/Salta", 1459711910), 1459722710);
        TZ_CHECK(from_utc("America/Argentina/Salta", 1598604683), 1598593883);
        TZ_CHECK(from_local("America/Argentina/Salta", 1598593883), 1598604683);
        TZ_CHECK(from_utc("America/Argentina/Salta", 1439792783), 1439781983);
        TZ_CHECK(from_local("America/Argentina/Salta", 1439781983), 1439792783);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Salta" << std::endl;
    }
    if (has_timezone("America/Argentina/San_Juan")) {
        TZ_CHECK(from_utc("America/Argentina/San_Juan", 1591315271), 1591304471);
        TZ_CHECK(from_local("America/Argentina/San_Juan", 1591304471), 1591315271);
        TZ_CHECK(from_utc("America/Argentina/San_Juan", 1456019224), 1456008424);
        TZ_CHECK(from_local("America/Argentina/San_Juan", 1456008424), 1456019224);
        TZ_CHECK(from_utc("America/Argentina/San_Juan", 1441742041), 1441731241);
        TZ_CHECK(from_local("America/Argentina/San_Juan", 1441731241), 1441742041);
        TZ_CHECK(from_utc("America/Argentina/San_Juan", 1460869804), 1460859004);
        TZ_CHECK(from_local("America/Argentina/San_Juan", 1460859004), 1460869804);
        TZ_CHECK(from_utc("America/Argentina/San_Juan", 1621453757), 1621442957);
        TZ_CHECK(from_local("America/Argentina/San_Juan", 1621442957), 1621453757);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/San_Juan" << std::endl;
    }
    if (has_timezone("America/Argentina/San_Luis")) {
        TZ_CHECK(from_utc("America/Argentina/San_Luis", 1476736811), 1476726011);
        TZ_CHECK(from_local("America/Argentina/San_Luis", 1476726011), 1476736811);
        TZ_CHECK(from_utc("America/Argentina/San_Luis", 1493840093), 1493829293);
        TZ_CHECK(from_local("America/Argentina/San_Luis", 1493829293), 1493840093);
        TZ_CHECK(from_utc("America/Argentina/San_Luis", 1561894368), 1561883568);
        TZ_CHECK(from_local("America/Argentina/San_Luis", 1561883568), 1561894368);
        TZ_CHECK(from_utc("America/Argentina/San_Luis", 1413992993), 1413982193);
        TZ_CHECK(from_local("America/Argentina/San_Luis", 1413982193), 1413992993);
        TZ_CHECK(from_utc("America/Argentina/San_Luis", 1439747754), 1439736954);
        TZ_CHECK(from_local("America/Argentina/San_Luis", 1439736954), 1439747754);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/San_Luis" << std::endl;
    }
    if (has_timezone("America/Argentina/Tucuman")) {
        TZ_CHECK(from_utc("America/Argentina/Tucuman", 1495771979), 1495761179);
        TZ_CHECK(from_local("America/Argentina/Tucuman", 1495761179), 1495771979);
        TZ_CHECK(from_utc("America/Argentina/Tucuman", 1410457742), 1410446942);
        TZ_CHECK(from_local("America/Argentina/Tucuman", 1410446942), 1410457742);
        TZ_CHECK(from_utc("America/Argentina/Tucuman", 1425622637), 1425611837);
        TZ_CHECK(from_local("America/Argentina/Tucuman", 1425611837), 1425622637);
        TZ_CHECK(from_utc("America/Argentina/Tucuman", 1593873898), 1593863098);
        TZ_CHECK(from_local("America/Argentina/Tucuman", 1593863098), 1593873898);
        TZ_CHECK(from_utc("America/Argentina/Tucuman", 1450057076), 1450046276);
        TZ_CHECK(from_local("America/Argentina/Tucuman", 1450046276), 1450057076);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Tucuman" << std::endl;
    }
    if (has_timezone("America/Argentina/Ushuaia")) {
        TZ_CHECK(from_utc("America/Argentina/Ushuaia", 1426419155), 1426408355);
        TZ_CHECK(from_local("America/Argentina/Ushuaia", 1426408355), 1426419155);
        TZ_CHECK(from_utc("America/Argentina/Ushuaia", 1627611704), 1627600904);
        TZ_CHECK(from_local("America/Argentina/Ushuaia", 1627600904), 1627611704);
        TZ_CHECK(from_utc("America/Argentina/Ushuaia", 1587752103), 1587741303);
        TZ_CHECK(from_local("America/Argentina/Ushuaia", 1587741303), 1587752103);
        TZ_CHECK(from_utc("America/Argentina/Ushuaia", 1564949792), 1564938992);
        TZ_CHECK(from_local("America/Argentina/Ushuaia", 1564938992), 1564949792);
        TZ_CHECK(from_utc("America/Argentina/Ushuaia", 1452745424), 1452734624);
        TZ_CHECK(from_local("America/Argentina/Ushuaia", 1452734624), 1452745424);
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Ushuaia" << std::endl;
    }
    if (has_timezone("America/Aruba")) {
        TZ_CHECK(from_utc("America/Aruba", 1536426431), 1536412031);
        TZ_CHECK(from_local("America/Aruba", 1536412031), 1536426431);
        TZ_CHECK(from_utc("America/Aruba", 1442671132), 1442656732);
        TZ_CHECK(from_local("America/Aruba", 1442656732), 1442671132);
        TZ_CHECK(from_utc("America/Aruba", 1426905432), 1426891032);
        TZ_CHECK(from_local("America/Aruba", 1426891032), 1426905432);
        TZ_CHECK(from_utc("America/Aruba", 1579194749), 1579180349);
        TZ_CHECK(from_local("America/Aruba", 1579180349), 1579194749);
        TZ_CHECK(from_utc("America/Aruba", 1453802899), 1453788499);
        TZ_CHECK(from_local("America/Aruba", 1453788499), 1453802899);
    } else {
        std::cerr << "NO TIMEZONE: America/Aruba" << std::endl;
    }
    if (has_timezone("America/Asuncion")) {
        TZ_CHECK(from_utc("America/Asuncion", 1627542770), 1627528370);
        TZ_CHECK(from_local("America/Asuncion", 1627528370), 1627542770);
        TZ_CHECK(from_utc("America/Asuncion", 1620772958), 1620758558);
        TZ_CHECK(from_local("America/Asuncion", 1620758558), 1620772958);
        TZ_CHECK(from_utc("America/Asuncion", 1460476680), 1460462280);
        TZ_CHECK(from_local("America/Asuncion", 1460462280), 1460476680);
        TZ_CHECK(from_utc("America/Asuncion", 1597994405), 1597980005);
        TZ_CHECK(from_local("America/Asuncion", 1597980005), 1597994405);
        TZ_CHECK(from_utc("America/Asuncion", 1538693366), 1538678966);
        TZ_CHECK(from_local("America/Asuncion", 1538678966), 1538693366);
    } else {
        std::cerr << "NO TIMEZONE: America/Asuncion" << std::endl;
    }
    if (has_timezone("America/Atikokan")) {
        TZ_CHECK(from_utc("America/Atikokan", 1412208780), 1412190780);
        TZ_CHECK(from_local("America/Atikokan", 1412190780), 1412208780);
        TZ_CHECK(from_utc("America/Atikokan", 1606538123), 1606520123);
        TZ_CHECK(from_local("America/Atikokan", 1606520123), 1606538123);
        TZ_CHECK(from_utc("America/Atikokan", 1622786931), 1622768931);
        TZ_CHECK(from_local("America/Atikokan", 1622768931), 1622786931);
        TZ_CHECK(from_utc("America/Atikokan", 1451223446), 1451205446);
        TZ_CHECK(from_local("America/Atikokan", 1451205446), 1451223446);
        TZ_CHECK(from_utc("America/Atikokan", 1467169075), 1467151075);
        TZ_CHECK(from_local("America/Atikokan", 1467151075), 1467169075);
    } else {
        std::cerr << "NO TIMEZONE: America/Atikokan" << std::endl;
    }
    if (has_timezone("America/Atka")) {
        TZ_CHECK(from_utc("America/Atka", 1444171733), 1444139333);
        TZ_CHECK(from_local("America/Atka", 1444139333), 1444171733);
        TZ_CHECK(from_utc("America/Atka", 1498996447), 1498964047);
        TZ_CHECK(from_local("America/Atka", 1498964047), 1498996447);
        TZ_CHECK(from_utc("America/Atka", 1444450693), 1444418293);
        TZ_CHECK(from_local("America/Atka", 1444418293), 1444450693);
        TZ_CHECK(from_utc("America/Atka", 1441372328), 1441339928);
        TZ_CHECK(from_local("America/Atka", 1441339928), 1441372328);
        TZ_CHECK(from_utc("America/Atka", 1593311213), 1593278813);
        TZ_CHECK(from_local("America/Atka", 1593278813), 1593311213);
    } else {
        std::cerr << "NO TIMEZONE: America/Atka" << std::endl;
    }
    if (has_timezone("America/Bahia")) {
        TZ_CHECK(from_utc("America/Bahia", 1451095666), 1451084866);
        TZ_CHECK(from_local("America/Bahia", 1451084866), 1451095666);
        TZ_CHECK(from_utc("America/Bahia", 1420967403), 1420956603);
        TZ_CHECK(from_local("America/Bahia", 1420956603), 1420967403);
        TZ_CHECK(from_utc("America/Bahia", 1603517050), 1603506250);
        TZ_CHECK(from_local("America/Bahia", 1603506250), 1603517050);
        TZ_CHECK(from_utc("America/Bahia", 1614445300), 1614434500);
        TZ_CHECK(from_local("America/Bahia", 1614434500), 1614445300);
        TZ_CHECK(from_utc("America/Bahia", 1418114928), 1418104128);
        TZ_CHECK(from_local("America/Bahia", 1418104128), 1418114928);
    } else {
        std::cerr << "NO TIMEZONE: America/Bahia" << std::endl;
    }
    if (has_timezone("America/Bahia_Banderas")) {
        TZ_CHECK(from_utc("America/Bahia_Banderas", 1450432474), 1450410874);
        TZ_CHECK(from_local("America/Bahia_Banderas", 1450410874), 1450432474);
        TZ_CHECK(from_utc("America/Bahia_Banderas", 1484819725), 1484798125);
        TZ_CHECK(from_local("America/Bahia_Banderas", 1484798125), 1484819725);
        TZ_CHECK(from_utc("America/Bahia_Banderas", 1520104079), 1520082479);
        TZ_CHECK(from_local("America/Bahia_Banderas", 1520082479), 1520104079);
        TZ_CHECK(from_utc("America/Bahia_Banderas", 1465349555), 1465331555);
        TZ_CHECK(from_local("America/Bahia_Banderas", 1465331555), 1465349555);
        TZ_CHECK(from_utc("America/Bahia_Banderas", 1528433025), 1528415025);
        TZ_CHECK(from_local("America/Bahia_Banderas", 1528415025), 1528433025);
    } else {
        std::cerr << "NO TIMEZONE: America/Bahia_Banderas" << std::endl;
    }
    if (has_timezone("America/Barbados")) {
        TZ_CHECK(from_utc("America/Barbados", 1569152374), 1569137974);
        TZ_CHECK(from_local("America/Barbados", 1569137974), 1569152374);
        TZ_CHECK(from_utc("America/Barbados", 1536680184), 1536665784);
        TZ_CHECK(from_local("America/Barbados", 1536665784), 1536680184);
        TZ_CHECK(from_utc("America/Barbados", 1621875539), 1621861139);
        TZ_CHECK(from_local("America/Barbados", 1621861139), 1621875539);
        TZ_CHECK(from_utc("America/Barbados", 1538671496), 1538657096);
        TZ_CHECK(from_local("America/Barbados", 1538657096), 1538671496);
        TZ_CHECK(from_utc("America/Barbados", 1534866790), 1534852390);
        TZ_CHECK(from_local("America/Barbados", 1534852390), 1534866790);
    } else {
        std::cerr << "NO TIMEZONE: America/Barbados" << std::endl;
    }
    if (has_timezone("America/Belem")) {
        TZ_CHECK(from_utc("America/Belem", 1528837453), 1528826653);
        TZ_CHECK(from_local("America/Belem", 1528826653), 1528837453);
        TZ_CHECK(from_utc("America/Belem", 1624927534), 1624916734);
        TZ_CHECK(from_local("America/Belem", 1624916734), 1624927534);
        TZ_CHECK(from_utc("America/Belem", 1527414793), 1527403993);
        TZ_CHECK(from_local("America/Belem", 1527403993), 1527414793);
        TZ_CHECK(from_utc("America/Belem", 1487132043), 1487121243);
        TZ_CHECK(from_local("America/Belem", 1487121243), 1487132043);
        TZ_CHECK(from_utc("America/Belem", 1558241659), 1558230859);
        TZ_CHECK(from_local("America/Belem", 1558230859), 1558241659);
    } else {
        std::cerr << "NO TIMEZONE: America/Belem" << std::endl;
    }
    if (has_timezone("America/Belize")) {
        TZ_CHECK(from_utc("America/Belize", 1583404952), 1583383352);
        TZ_CHECK(from_local("America/Belize", 1583383352), 1583404952);
        TZ_CHECK(from_utc("America/Belize", 1593334191), 1593312591);
        TZ_CHECK(from_local("America/Belize", 1593312591), 1593334191);
        TZ_CHECK(from_utc("America/Belize", 1497662119), 1497640519);
        TZ_CHECK(from_local("America/Belize", 1497640519), 1497662119);
        TZ_CHECK(from_utc("America/Belize", 1556763230), 1556741630);
        TZ_CHECK(from_local("America/Belize", 1556741630), 1556763230);
        TZ_CHECK(from_utc("America/Belize", 1428034899), 1428013299);
        TZ_CHECK(from_local("America/Belize", 1428013299), 1428034899);
    } else {
        std::cerr << "NO TIMEZONE: America/Belize" << std::endl;
    }
    if (has_timezone("America/Blanc-Sablon")) {
        TZ_CHECK(from_utc("America/Blanc-Sablon", 1546807915), 1546793515);
        TZ_CHECK(from_local("America/Blanc-Sablon", 1546793515), 1546807915);
        TZ_CHECK(from_utc("America/Blanc-Sablon", 1620695195), 1620680795);
        TZ_CHECK(from_local("America/Blanc-Sablon", 1620680795), 1620695195);
        TZ_CHECK(from_utc("America/Blanc-Sablon", 1601228041), 1601213641);
        TZ_CHECK(from_local("America/Blanc-Sablon", 1601213641), 1601228041);
        TZ_CHECK(from_utc("America/Blanc-Sablon", 1471792475), 1471778075);
        TZ_CHECK(from_local("America/Blanc-Sablon", 1471778075), 1471792475);
        TZ_CHECK(from_utc("America/Blanc-Sablon", 1429399403), 1429385003);
        TZ_CHECK(from_local("America/Blanc-Sablon", 1429385003), 1429399403);
    } else {
        std::cerr << "NO TIMEZONE: America/Blanc-Sablon" << std::endl;
    }
    if (has_timezone("America/Boa_Vista")) {
        TZ_CHECK(from_utc("America/Boa_Vista", 1515181806), 1515167406);
        TZ_CHECK(from_local("America/Boa_Vista", 1515167406), 1515181806);
        TZ_CHECK(from_utc("America/Boa_Vista", 1525625374), 1525610974);
        TZ_CHECK(from_local("America/Boa_Vista", 1525610974), 1525625374);
        TZ_CHECK(from_utc("America/Boa_Vista", 1515330691), 1515316291);
        TZ_CHECK(from_local("America/Boa_Vista", 1515316291), 1515330691);
        TZ_CHECK(from_utc("America/Boa_Vista", 1505875425), 1505861025);
        TZ_CHECK(from_local("America/Boa_Vista", 1505861025), 1505875425);
        TZ_CHECK(from_utc("America/Boa_Vista", 1420652267), 1420637867);
        TZ_CHECK(from_local("America/Boa_Vista", 1420637867), 1420652267);
    } else {
        std::cerr << "NO TIMEZONE: America/Boa_Vista" << std::endl;
    }
    if (has_timezone("America/Bogota")) {
        TZ_CHECK(from_utc("America/Bogota", 1507695745), 1507677745);
        TZ_CHECK(from_local("America/Bogota", 1507677745), 1507695745);
        TZ_CHECK(from_utc("America/Bogota", 1590181246), 1590163246);
        TZ_CHECK(from_local("America/Bogota", 1590163246), 1590181246);
        TZ_CHECK(from_utc("America/Bogota", 1542713444), 1542695444);
        TZ_CHECK(from_local("America/Bogota", 1542695444), 1542713444);
        TZ_CHECK(from_utc("America/Bogota", 1608596286), 1608578286);
        TZ_CHECK(from_local("America/Bogota", 1608578286), 1608596286);
        TZ_CHECK(from_utc("America/Bogota", 1612365901), 1612347901);
        TZ_CHECK(from_local("America/Bogota", 1612347901), 1612365901);
    } else {
        std::cerr << "NO TIMEZONE: America/Bogota" << std::endl;
    }
    if (has_timezone("America/Boise")) {
        TZ_CHECK(from_utc("America/Boise", 1461715258), 1461693658);
        TZ_CHECK(from_local("America/Boise", 1461693658), 1461715258);
        TZ_CHECK(from_utc("America/Boise", 1413377478), 1413355878);
        TZ_CHECK(from_local("America/Boise", 1413355878), 1413377478);
        TZ_CHECK(from_utc("America/Boise", 1554443819), 1554422219);
        TZ_CHECK(from_local("America/Boise", 1554422219), 1554443819);
        TZ_CHECK(from_utc("America/Boise", 1507809659), 1507788059);
        TZ_CHECK(from_local("America/Boise", 1507788059), 1507809659);
        TZ_CHECK(from_utc("America/Boise", 1559020357), 1558998757);
        TZ_CHECK(from_local("America/Boise", 1558998757), 1559020357);
    } else {
        std::cerr << "NO TIMEZONE: America/Boise" << std::endl;
    }
    if (has_timezone("America/Buenos_Aires")) {
        TZ_CHECK(from_utc("America/Buenos_Aires", 1492088505), 1492077705);
        TZ_CHECK(from_local("America/Buenos_Aires", 1492077705), 1492088505);
        TZ_CHECK(from_utc("America/Buenos_Aires", 1420554451), 1420543651);
        TZ_CHECK(from_local("America/Buenos_Aires", 1420543651), 1420554451);
        TZ_CHECK(from_utc("America/Buenos_Aires", 1468843493), 1468832693);
        TZ_CHECK(from_local("America/Buenos_Aires", 1468832693), 1468843493);
        TZ_CHECK(from_utc("America/Buenos_Aires", 1420606665), 1420595865);
        TZ_CHECK(from_local("America/Buenos_Aires", 1420595865), 1420606665);
        TZ_CHECK(from_utc("America/Buenos_Aires", 1441271126), 1441260326);
        TZ_CHECK(from_local("America/Buenos_Aires", 1441260326), 1441271126);
    } else {
        std::cerr << "NO TIMEZONE: America/Buenos_Aires" << std::endl;
    }
    if (has_timezone("America/Cambridge_Bay")) {
        TZ_CHECK(from_utc("America/Cambridge_Bay", 1493390423), 1493368823);
        TZ_CHECK(from_local("America/Cambridge_Bay", 1493368823), 1493390423);
        TZ_CHECK(from_utc("America/Cambridge_Bay", 1486121409), 1486096209);
        TZ_CHECK(from_local("America/Cambridge_Bay", 1486096209), 1486121409);
        TZ_CHECK(from_utc("America/Cambridge_Bay", 1502906472), 1502884872);
        TZ_CHECK(from_local("America/Cambridge_Bay", 1502884872), 1502906472);
        TZ_CHECK(from_utc("America/Cambridge_Bay", 1513152518), 1513127318);
        TZ_CHECK(from_local("America/Cambridge_Bay", 1513127318), 1513152518);
        TZ_CHECK(from_utc("America/Cambridge_Bay", 1492855573), 1492833973);
        TZ_CHECK(from_local("America/Cambridge_Bay", 1492833973), 1492855573);
    } else {
        std::cerr << "NO TIMEZONE: America/Cambridge_Bay" << std::endl;
    }
    if (has_timezone("America/Campo_Grande")) {
        TZ_CHECK(from_utc("America/Campo_Grande", 1492243268), 1492228868);
        TZ_CHECK(from_local("America/Campo_Grande", 1492228868), 1492243268);
        TZ_CHECK(from_utc("America/Campo_Grande", 1587160204), 1587145804);
        TZ_CHECK(from_local("America/Campo_Grande", 1587145804), 1587160204);
        TZ_CHECK(from_utc("America/Campo_Grande", 1603122241), 1603107841);
        TZ_CHECK(from_local("America/Campo_Grande", 1603107841), 1603122241);
        TZ_CHECK(from_utc("America/Campo_Grande", 1607400575), 1607386175);
        TZ_CHECK(from_local("America/Campo_Grande", 1607386175), 1607400575);
        TZ_CHECK(from_utc("America/Campo_Grande", 1561112841), 1561098441);
        TZ_CHECK(from_local("America/Campo_Grande", 1561098441), 1561112841);
    } else {
        std::cerr << "NO TIMEZONE: America/Campo_Grande" << std::endl;
    }
    if (has_timezone("America/Cancun")) {
        TZ_CHECK(from_utc("America/Cancun", 1464091016), 1464073016);
        TZ_CHECK(from_local("America/Cancun", 1464073016), 1464091016);
        TZ_CHECK(from_utc("America/Cancun", 1449403788), 1449385788);
        TZ_CHECK(from_local("America/Cancun", 1449385788), 1449403788);
        TZ_CHECK(from_utc("America/Cancun", 1486989730), 1486971730);
        TZ_CHECK(from_local("America/Cancun", 1486971730), 1486989730);
        TZ_CHECK(from_utc("America/Cancun", 1521261241), 1521243241);
        TZ_CHECK(from_local("America/Cancun", 1521243241), 1521261241);
        TZ_CHECK(from_utc("America/Cancun", 1541070536), 1541052536);
        TZ_CHECK(from_local("America/Cancun", 1541052536), 1541070536);
    } else {
        std::cerr << "NO TIMEZONE: America/Cancun" << std::endl;
    }
    if (has_timezone("America/Caracas")) {
        TZ_CHECK(from_utc("America/Caracas", 1443267297), 1443251097);
        TZ_CHECK(from_local("America/Caracas", 1443251097), 1443267297);
        TZ_CHECK(from_utc("America/Caracas", 1537155980), 1537141580);
        TZ_CHECK(from_local("America/Caracas", 1537141580), 1537155980);
        TZ_CHECK(from_utc("America/Caracas", 1416238758), 1416222558);
        TZ_CHECK(from_local("America/Caracas", 1416222558), 1416238758);
        TZ_CHECK(from_utc("America/Caracas", 1516610567), 1516596167);
        TZ_CHECK(from_local("America/Caracas", 1516596167), 1516610567);
        TZ_CHECK(from_utc("America/Caracas", 1468784508), 1468770108);
        TZ_CHECK(from_local("America/Caracas", 1468770108), 1468784508);
    } else {
        std::cerr << "NO TIMEZONE: America/Caracas" << std::endl;
    }
    if (has_timezone("America/Catamarca")) {
        TZ_CHECK(from_utc("America/Catamarca", 1430955838), 1430945038);
        TZ_CHECK(from_local("America/Catamarca", 1430945038), 1430955838);
        TZ_CHECK(from_utc("America/Catamarca", 1461151106), 1461140306);
        TZ_CHECK(from_local("America/Catamarca", 1461140306), 1461151106);
        TZ_CHECK(from_utc("America/Catamarca", 1607583417), 1607572617);
        TZ_CHECK(from_local("America/Catamarca", 1607572617), 1607583417);
        TZ_CHECK(from_utc("America/Catamarca", 1547846244), 1547835444);
        TZ_CHECK(from_local("America/Catamarca", 1547835444), 1547846244);
        TZ_CHECK(from_utc("America/Catamarca", 1419783841), 1419773041);
        TZ_CHECK(from_local("America/Catamarca", 1419773041), 1419783841);
    } else {
        std::cerr << "NO TIMEZONE: America/Catamarca" << std::endl;
    }
    if (has_timezone("America/Cayenne")) {
        TZ_CHECK(from_utc("America/Cayenne", 1498116103), 1498105303);
        TZ_CHECK(from_local("America/Cayenne", 1498105303), 1498116103);
        TZ_CHECK(from_utc("America/Cayenne", 1512552294), 1512541494);
        TZ_CHECK(from_local("America/Cayenne", 1512541494), 1512552294);
        TZ_CHECK(from_utc("America/Cayenne", 1515965802), 1515955002);
        TZ_CHECK(from_local("America/Cayenne", 1515955002), 1515965802);
        TZ_CHECK(from_utc("America/Cayenne", 1615465074), 1615454274);
        TZ_CHECK(from_local("America/Cayenne", 1615454274), 1615465074);
        TZ_CHECK(from_utc("America/Cayenne", 1576416538), 1576405738);
        TZ_CHECK(from_local("America/Cayenne", 1576405738), 1576416538);
    } else {
        std::cerr << "NO TIMEZONE: America/Cayenne" << std::endl;
    }
    if (has_timezone("America/Cayman")) {
        TZ_CHECK(from_utc("America/Cayman", 1619194558), 1619176558);
        TZ_CHECK(from_local("America/Cayman", 1619176558), 1619194558);
        TZ_CHECK(from_utc("America/Cayman", 1541038471), 1541020471);
        TZ_CHECK(from_local("America/Cayman", 1541020471), 1541038471);
        TZ_CHECK(from_utc("America/Cayman", 1542340219), 1542322219);
        TZ_CHECK(from_local("America/Cayman", 1542322219), 1542340219);
        TZ_CHECK(from_utc("America/Cayman", 1439873935), 1439855935);
        TZ_CHECK(from_local("America/Cayman", 1439855935), 1439873935);
        TZ_CHECK(from_utc("America/Cayman", 1517699393), 1517681393);
        TZ_CHECK(from_local("America/Cayman", 1517681393), 1517699393);
    } else {
        std::cerr << "NO TIMEZONE: America/Cayman" << std::endl;
    }
    if (has_timezone("America/Chicago")) {
        TZ_CHECK(from_utc("America/Chicago", 1513650423), 1513628823);
        TZ_CHECK(from_local("America/Chicago", 1513628823), 1513650423);
        TZ_CHECK(from_utc("America/Chicago", 1617599003), 1617581003);
        TZ_CHECK(from_local("America/Chicago", 1617581003), 1617599003);
        TZ_CHECK(from_utc("America/Chicago", 1599654555), 1599636555);
        TZ_CHECK(from_local("America/Chicago", 1599636555), 1599654555);
        TZ_CHECK(from_utc("America/Chicago", 1436892754), 1436874754);
        TZ_CHECK(from_local("America/Chicago", 1436874754), 1436892754);
        TZ_CHECK(from_utc("America/Chicago", 1595430685), 1595412685);
        TZ_CHECK(from_local("America/Chicago", 1595412685), 1595430685);
    } else {
        std::cerr << "NO TIMEZONE: America/Chicago" << std::endl;
    }
    if (has_timezone("America/Chihuahua")) {
        TZ_CHECK(from_utc("America/Chihuahua", 1463614627), 1463593027);
        TZ_CHECK(from_local("America/Chihuahua", 1463593027), 1463614627);
        TZ_CHECK(from_utc("America/Chihuahua", 1415969468), 1415944268);
        TZ_CHECK(from_local("America/Chihuahua", 1415944268), 1415969468);
        TZ_CHECK(from_utc("America/Chihuahua", 1622815326), 1622793726);
        TZ_CHECK(from_local("America/Chihuahua", 1622793726), 1622815326);
        TZ_CHECK(from_utc("America/Chihuahua", 1597149262), 1597127662);
        TZ_CHECK(from_local("America/Chihuahua", 1597127662), 1597149262);
        TZ_CHECK(from_utc("America/Chihuahua", 1607455761), 1607430561);
        TZ_CHECK(from_local("America/Chihuahua", 1607430561), 1607455761);
    } else {
        std::cerr << "NO TIMEZONE: America/Chihuahua" << std::endl;
    }
    if (has_timezone("America/Coral_Harbour")) {
        TZ_CHECK(from_utc("America/Coral_Harbour", 1544386555), 1544368555);
        TZ_CHECK(from_local("America/Coral_Harbour", 1544368555), 1544386555);
        TZ_CHECK(from_utc("America/Coral_Harbour", 1413213889), 1413195889);
        TZ_CHECK(from_local("America/Coral_Harbour", 1413195889), 1413213889);
        TZ_CHECK(from_utc("America/Coral_Harbour", 1586223072), 1586205072);
        TZ_CHECK(from_local("America/Coral_Harbour", 1586205072), 1586223072);
        TZ_CHECK(from_utc("America/Coral_Harbour", 1435150110), 1435132110);
        TZ_CHECK(from_local("America/Coral_Harbour", 1435132110), 1435150110);
        TZ_CHECK(from_utc("America/Coral_Harbour", 1540152894), 1540134894);
        TZ_CHECK(from_local("America/Coral_Harbour", 1540134894), 1540152894);
    } else {
        std::cerr << "NO TIMEZONE: America/Coral_Harbour" << std::endl;
    }
    if (has_timezone("America/Cordoba")) {
        TZ_CHECK(from_utc("America/Cordoba", 1472108776), 1472097976);
        TZ_CHECK(from_local("America/Cordoba", 1472097976), 1472108776);
        TZ_CHECK(from_utc("America/Cordoba", 1492473589), 1492462789);
        TZ_CHECK(from_local("America/Cordoba", 1492462789), 1492473589);
        TZ_CHECK(from_utc("America/Cordoba", 1589089950), 1589079150);
        TZ_CHECK(from_local("America/Cordoba", 1589079150), 1589089950);
        TZ_CHECK(from_utc("America/Cordoba", 1470010915), 1470000115);
        TZ_CHECK(from_local("America/Cordoba", 1470000115), 1470010915);
        TZ_CHECK(from_utc("America/Cordoba", 1426614942), 1426604142);
        TZ_CHECK(from_local("America/Cordoba", 1426604142), 1426614942);
    } else {
        std::cerr << "NO TIMEZONE: America/Cordoba" << std::endl;
    }
    if (has_timezone("America/Costa_Rica")) {
        TZ_CHECK(from_utc("America/Costa_Rica", 1434232835), 1434211235);
        TZ_CHECK(from_local("America/Costa_Rica", 1434211235), 1434232835);
        TZ_CHECK(from_utc("America/Costa_Rica", 1628612137), 1628590537);
        TZ_CHECK(from_local("America/Costa_Rica", 1628590537), 1628612137);
        TZ_CHECK(from_utc("America/Costa_Rica", 1525791380), 1525769780);
        TZ_CHECK(from_local("America/Costa_Rica", 1525769780), 1525791380);
        TZ_CHECK(from_utc("America/Costa_Rica", 1410559554), 1410537954);
        TZ_CHECK(from_local("America/Costa_Rica", 1410537954), 1410559554);
        TZ_CHECK(from_utc("America/Costa_Rica", 1597404528), 1597382928);
        TZ_CHECK(from_local("America/Costa_Rica", 1597382928), 1597404528);
    } else {
        std::cerr << "NO TIMEZONE: America/Costa_Rica" << std::endl;
    }
    if (has_timezone("America/Creston")) {
        TZ_CHECK(from_utc("America/Creston", 1433850292), 1433825092);
        TZ_CHECK(from_local("America/Creston", 1433825092), 1433850292);
        TZ_CHECK(from_utc("America/Creston", 1619570024), 1619544824);
        TZ_CHECK(from_local("America/Creston", 1619544824), 1619570024);
        TZ_CHECK(from_utc("America/Creston", 1568716133), 1568690933);
        TZ_CHECK(from_local("America/Creston", 1568690933), 1568716133);
        TZ_CHECK(from_utc("America/Creston", 1479422531), 1479397331);
        TZ_CHECK(from_local("America/Creston", 1479397331), 1479422531);
        TZ_CHECK(from_utc("America/Creston", 1565258727), 1565233527);
        TZ_CHECK(from_local("America/Creston", 1565233527), 1565258727);
    } else {
        std::cerr << "NO TIMEZONE: America/Creston" << std::endl;
    }
    if (has_timezone("America/Cuiaba")) {
        TZ_CHECK(from_utc("America/Cuiaba", 1504796773), 1504782373);
        TZ_CHECK(from_local("America/Cuiaba", 1504782373), 1504796773);
        TZ_CHECK(from_utc("America/Cuiaba", 1432878718), 1432864318);
        TZ_CHECK(from_local("America/Cuiaba", 1432864318), 1432878718);
        TZ_CHECK(from_utc("America/Cuiaba", 1620991628), 1620977228);
        TZ_CHECK(from_local("America/Cuiaba", 1620977228), 1620991628);
        TZ_CHECK(from_utc("America/Cuiaba", 1583108019), 1583093619);
        TZ_CHECK(from_local("America/Cuiaba", 1583093619), 1583108019);
        TZ_CHECK(from_utc("America/Cuiaba", 1553804208), 1553789808);
        TZ_CHECK(from_local("America/Cuiaba", 1553789808), 1553804208);
    } else {
        std::cerr << "NO TIMEZONE: America/Cuiaba" << std::endl;
    }
    if (has_timezone("America/Curacao")) {
        TZ_CHECK(from_utc("America/Curacao", 1505208562), 1505194162);
        TZ_CHECK(from_local("America/Curacao", 1505194162), 1505208562);
        TZ_CHECK(from_utc("America/Curacao", 1552425956), 1552411556);
        TZ_CHECK(from_local("America/Curacao", 1552411556), 1552425956);
        TZ_CHECK(from_utc("America/Curacao", 1433185216), 1433170816);
        TZ_CHECK(from_local("America/Curacao", 1433170816), 1433185216);
        TZ_CHECK(from_utc("America/Curacao", 1606999012), 1606984612);
        TZ_CHECK(from_local("America/Curacao", 1606984612), 1606999012);
        TZ_CHECK(from_utc("America/Curacao", 1493101383), 1493086983);
        TZ_CHECK(from_local("America/Curacao", 1493086983), 1493101383);
    } else {
        std::cerr << "NO TIMEZONE: America/Curacao" << std::endl;
    }
    if (has_timezone("America/Danmarkshavn")) {
        TZ_CHECK(from_utc("America/Danmarkshavn", 1552608786), 1552608786);
        TZ_CHECK(from_local("America/Danmarkshavn", 1552608786), 1552608786);
        TZ_CHECK(from_utc("America/Danmarkshavn", 1595717509), 1595717509);
        TZ_CHECK(from_local("America/Danmarkshavn", 1595717509), 1595717509);
        TZ_CHECK(from_utc("America/Danmarkshavn", 1612513739), 1612513739);
        TZ_CHECK(from_local("America/Danmarkshavn", 1612513739), 1612513739);
        TZ_CHECK(from_utc("America/Danmarkshavn", 1458784797), 1458784797);
        TZ_CHECK(from_local("America/Danmarkshavn", 1458784797), 1458784797);
        TZ_CHECK(from_utc("America/Danmarkshavn", 1604970422), 1604970422);
        TZ_CHECK(from_local("America/Danmarkshavn", 1604970422), 1604970422);
    } else {
        std::cerr << "NO TIMEZONE: America/Danmarkshavn" << std::endl;
    }
    if (has_timezone("America/Dawson")) {
        TZ_CHECK(from_utc("America/Dawson", 1531344299), 1531319099);
        TZ_CHECK(from_local("America/Dawson", 1531319099), 1531344299);
        TZ_CHECK(from_utc("America/Dawson", 1588681080), 1588655880);
        TZ_CHECK(from_local("America/Dawson", 1588655880), 1588681080);
        TZ_CHECK(from_utc("America/Dawson", 1445669495), 1445644295);
        TZ_CHECK(from_local("America/Dawson", 1445644295), 1445669495);
        TZ_CHECK(from_utc("America/Dawson", 1608240814), 1608212014);
        TZ_CHECK(from_local("America/Dawson", 1608212014), 1608240814);
        TZ_CHECK(from_utc("America/Dawson", 1576365665), 1576336865);
        TZ_CHECK(from_local("America/Dawson", 1576336865), 1576365665);
    } else {
        std::cerr << "NO TIMEZONE: America/Dawson" << std::endl;
    }
    if (has_timezone("America/Dawson_Creek")) {
        TZ_CHECK(from_utc("America/Dawson_Creek", 1427562689), 1427537489);
        TZ_CHECK(from_local("America/Dawson_Creek", 1427537489), 1427562689);
        TZ_CHECK(from_utc("America/Dawson_Creek", 1487934541), 1487909341);
        TZ_CHECK(from_local("America/Dawson_Creek", 1487909341), 1487934541);
        TZ_CHECK(from_utc("America/Dawson_Creek", 1572251139), 1572225939);
        TZ_CHECK(from_local("America/Dawson_Creek", 1572225939), 1572251139);
        TZ_CHECK(from_utc("America/Dawson_Creek", 1469390127), 1469364927);
        TZ_CHECK(from_local("America/Dawson_Creek", 1469364927), 1469390127);
        TZ_CHECK(from_utc("America/Dawson_Creek", 1596775137), 1596749937);
        TZ_CHECK(from_local("America/Dawson_Creek", 1596749937), 1596775137);
    } else {
        std::cerr << "NO TIMEZONE: America/Dawson_Creek" << std::endl;
    }
    if (has_timezone("America/Denver")) {
        TZ_CHECK(from_utc("America/Denver", 1494957194), 1494935594);
        TZ_CHECK(from_local("America/Denver", 1494935594), 1494957194);
        TZ_CHECK(from_utc("America/Denver", 1576605550), 1576580350);
        TZ_CHECK(from_local("America/Denver", 1576580350), 1576605550);
        TZ_CHECK(from_utc("America/Denver", 1447990463), 1447965263);
        TZ_CHECK(from_local("America/Denver", 1447965263), 1447990463);
        TZ_CHECK(from_utc("America/Denver", 1470533385), 1470511785);
        TZ_CHECK(from_local("America/Denver", 1470511785), 1470533385);
        TZ_CHECK(from_utc("America/Denver", 1517189145), 1517163945);
        TZ_CHECK(from_local("America/Denver", 1517163945), 1517189145);
    } else {
        std::cerr << "NO TIMEZONE: America/Denver" << std::endl;
    }
    if (has_timezone("America/Detroit")) {
        TZ_CHECK(from_utc("America/Detroit", 1467501111), 1467486711);
        TZ_CHECK(from_local("America/Detroit", 1467486711), 1467501111);
        TZ_CHECK(from_utc("America/Detroit", 1545132443), 1545114443);
        TZ_CHECK(from_local("America/Detroit", 1545114443), 1545132443);
        TZ_CHECK(from_utc("America/Detroit", 1473235170), 1473220770);
        TZ_CHECK(from_local("America/Detroit", 1473220770), 1473235170);
        TZ_CHECK(from_utc("America/Detroit", 1564211363), 1564196963);
        TZ_CHECK(from_local("America/Detroit", 1564196963), 1564211363);
        TZ_CHECK(from_utc("America/Detroit", 1461640018), 1461625618);
        TZ_CHECK(from_local("America/Detroit", 1461625618), 1461640018);
    } else {
        std::cerr << "NO TIMEZONE: America/Detroit" << std::endl;
    }
    if (has_timezone("America/Dominica")) {
        TZ_CHECK(from_utc("America/Dominica", 1584427832), 1584413432);
        TZ_CHECK(from_local("America/Dominica", 1584413432), 1584427832);
        TZ_CHECK(from_utc("America/Dominica", 1474214909), 1474200509);
        TZ_CHECK(from_local("America/Dominica", 1474200509), 1474214909);
        TZ_CHECK(from_utc("America/Dominica", 1561483472), 1561469072);
        TZ_CHECK(from_local("America/Dominica", 1561469072), 1561483472);
        TZ_CHECK(from_utc("America/Dominica", 1489919044), 1489904644);
        TZ_CHECK(from_local("America/Dominica", 1489904644), 1489919044);
        TZ_CHECK(from_utc("America/Dominica", 1440639473), 1440625073);
        TZ_CHECK(from_local("America/Dominica", 1440625073), 1440639473);
    } else {
        std::cerr << "NO TIMEZONE: America/Dominica" << std::endl;
    }
    if (has_timezone("America/Edmonton")) {
        TZ_CHECK(from_utc("America/Edmonton", 1537838303), 1537816703);
        TZ_CHECK(from_local("America/Edmonton", 1537816703), 1537838303);
        TZ_CHECK(from_utc("America/Edmonton", 1448059721), 1448034521);
        TZ_CHECK(from_local("America/Edmonton", 1448034521), 1448059721);
        TZ_CHECK(from_utc("America/Edmonton", 1542798324), 1542773124);
        TZ_CHECK(from_local("America/Edmonton", 1542773124), 1542798324);
        TZ_CHECK(from_utc("America/Edmonton", 1468907733), 1468886133);
        TZ_CHECK(from_local("America/Edmonton", 1468886133), 1468907733);
        TZ_CHECK(from_utc("America/Edmonton", 1536732811), 1536711211);
        TZ_CHECK(from_local("America/Edmonton", 1536711211), 1536732811);
    } else {
        std::cerr << "NO TIMEZONE: America/Edmonton" << std::endl;
    }
    if (has_timezone("America/Eirunepe")) {
        TZ_CHECK(from_utc("America/Eirunepe", 1580837615), 1580819615);
        TZ_CHECK(from_local("America/Eirunepe", 1580819615), 1580837615);
        TZ_CHECK(from_utc("America/Eirunepe", 1542112211), 1542094211);
        TZ_CHECK(from_local("America/Eirunepe", 1542094211), 1542112211);
        TZ_CHECK(from_utc("America/Eirunepe", 1449324189), 1449306189);
        TZ_CHECK(from_local("America/Eirunepe", 1449306189), 1449324189);
        TZ_CHECK(from_utc("America/Eirunepe", 1545330252), 1545312252);
        TZ_CHECK(from_local("America/Eirunepe", 1545312252), 1545330252);
        TZ_CHECK(from_utc("America/Eirunepe", 1575064182), 1575046182);
        TZ_CHECK(from_local("America/Eirunepe", 1575046182), 1575064182);
    } else {
        std::cerr << "NO TIMEZONE: America/Eirunepe" << std::endl;
    }
    if (has_timezone("America/El_Salvador")) {
        TZ_CHECK(from_utc("America/El_Salvador", 1509019753), 1508998153);
        TZ_CHECK(from_local("America/El_Salvador", 1508998153), 1509019753);
        TZ_CHECK(from_utc("America/El_Salvador", 1539778375), 1539756775);
        TZ_CHECK(from_local("America/El_Salvador", 1539756775), 1539778375);
        TZ_CHECK(from_utc("America/El_Salvador", 1430370916), 1430349316);
        TZ_CHECK(from_local("America/El_Salvador", 1430349316), 1430370916);
        TZ_CHECK(from_utc("America/El_Salvador", 1501240064), 1501218464);
        TZ_CHECK(from_local("America/El_Salvador", 1501218464), 1501240064);
        TZ_CHECK(from_utc("America/El_Salvador", 1613476438), 1613454838);
        TZ_CHECK(from_local("America/El_Salvador", 1613454838), 1613476438);
    } else {
        std::cerr << "NO TIMEZONE: America/El_Salvador" << std::endl;
    }
    if (has_timezone("America/Ensenada")) {
        TZ_CHECK(from_utc("America/Ensenada", 1628615980), 1628590780);
        TZ_CHECK(from_local("America/Ensenada", 1628590780), 1628615980);
        TZ_CHECK(from_utc("America/Ensenada", 1481867906), 1481839106);
        TZ_CHECK(from_local("America/Ensenada", 1481839106), 1481867906);
        TZ_CHECK(from_utc("America/Ensenada", 1581216098), 1581187298);
        TZ_CHECK(from_local("America/Ensenada", 1581187298), 1581216098);
        TZ_CHECK(from_utc("America/Ensenada", 1436988710), 1436963510);
        TZ_CHECK(from_local("America/Ensenada", 1436963510), 1436988710);
        TZ_CHECK(from_utc("America/Ensenada", 1593346224), 1593321024);
        TZ_CHECK(from_local("America/Ensenada", 1593321024), 1593346224);
    } else {
        std::cerr << "NO TIMEZONE: America/Ensenada" << std::endl;
    }
    if (has_timezone("America/Fort_Nelson")) {
        TZ_CHECK(from_utc("America/Fort_Nelson", 1532023964), 1531998764);
        TZ_CHECK(from_local("America/Fort_Nelson", 1531998764), 1532023964);
        TZ_CHECK(from_utc("America/Fort_Nelson", 1526227422), 1526202222);
        TZ_CHECK(from_local("America/Fort_Nelson", 1526202222), 1526227422);
        TZ_CHECK(from_utc("America/Fort_Nelson", 1586111846), 1586086646);
        TZ_CHECK(from_local("America/Fort_Nelson", 1586086646), 1586111846);
        TZ_CHECK(from_utc("America/Fort_Nelson", 1429267509), 1429242309);
        TZ_CHECK(from_local("America/Fort_Nelson", 1429242309), 1429267509);
        TZ_CHECK(from_utc("America/Fort_Nelson", 1424929206), 1424900406);
        TZ_CHECK(from_local("America/Fort_Nelson", 1424900406), 1424929206);
    } else {
        std::cerr << "NO TIMEZONE: America/Fort_Nelson" << std::endl;
    }
    if (has_timezone("America/Fort_Wayne")) {
        TZ_CHECK(from_utc("America/Fort_Wayne", 1600672444), 1600658044);
        TZ_CHECK(from_local("America/Fort_Wayne", 1600658044), 1600672444);
        TZ_CHECK(from_utc("America/Fort_Wayne", 1518268443), 1518250443);
        TZ_CHECK(from_local("America/Fort_Wayne", 1518250443), 1518268443);
        TZ_CHECK(from_utc("America/Fort_Wayne", 1500177099), 1500162699);
        TZ_CHECK(from_local("America/Fort_Wayne", 1500162699), 1500177099);
        TZ_CHECK(from_utc("America/Fort_Wayne", 1499677641), 1499663241);
        TZ_CHECK(from_local("America/Fort_Wayne", 1499663241), 1499677641);
        TZ_CHECK(from_utc("America/Fort_Wayne", 1574239987), 1574221987);
        TZ_CHECK(from_local("America/Fort_Wayne", 1574221987), 1574239987);
    } else {
        std::cerr << "NO TIMEZONE: America/Fort_Wayne" << std::endl;
    }
    if (has_timezone("America/Fortaleza")) {
        TZ_CHECK(from_utc("America/Fortaleza", 1411490473), 1411479673);
        TZ_CHECK(from_local("America/Fortaleza", 1411479673), 1411490473);
        TZ_CHECK(from_utc("America/Fortaleza", 1486442725), 1486431925);
        TZ_CHECK(from_local("America/Fortaleza", 1486431925), 1486442725);
        TZ_CHECK(from_utc("America/Fortaleza", 1558826842), 1558816042);
        TZ_CHECK(from_local("America/Fortaleza", 1558816042), 1558826842);
        TZ_CHECK(from_utc("America/Fortaleza", 1436692966), 1436682166);
        TZ_CHECK(from_local("America/Fortaleza", 1436682166), 1436692966);
        TZ_CHECK(from_utc("America/Fortaleza", 1584411056), 1584400256);
        TZ_CHECK(from_local("America/Fortaleza", 1584400256), 1584411056);
    } else {
        std::cerr << "NO TIMEZONE: America/Fortaleza" << std::endl;
    }
    if (has_timezone("America/Glace_Bay")) {
        TZ_CHECK(from_utc("America/Glace_Bay", 1558023321), 1558012521);
        TZ_CHECK(from_local("America/Glace_Bay", 1558012521), 1558023321);
        TZ_CHECK(from_utc("America/Glace_Bay", 1531695081), 1531684281);
        TZ_CHECK(from_local("America/Glace_Bay", 1531684281), 1531695081);
        TZ_CHECK(from_utc("America/Glace_Bay", 1548778123), 1548763723);
        TZ_CHECK(from_local("America/Glace_Bay", 1548763723), 1548778123);
        TZ_CHECK(from_utc("America/Glace_Bay", 1538599404), 1538588604);
        TZ_CHECK(from_local("America/Glace_Bay", 1538588604), 1538599404);
        TZ_CHECK(from_utc("America/Glace_Bay", 1439910940), 1439900140);
        TZ_CHECK(from_local("America/Glace_Bay", 1439900140), 1439910940);
    } else {
        std::cerr << "NO TIMEZONE: America/Glace_Bay" << std::endl;
    }
    if (has_timezone("America/Godthab")) {
        TZ_CHECK(from_utc("America/Godthab", 1538668860), 1538661660);
        TZ_CHECK(from_local("America/Godthab", 1538661660), 1538668860);
        TZ_CHECK(from_utc("America/Godthab", 1480052209), 1480041409);
        TZ_CHECK(from_local("America/Godthab", 1480041409), 1480052209);
        TZ_CHECK(from_utc("America/Godthab", 1571401760), 1571394560);
        TZ_CHECK(from_local("America/Godthab", 1571394560), 1571401760);
        TZ_CHECK(from_utc("America/Godthab", 1479122407), 1479111607);
        TZ_CHECK(from_local("America/Godthab", 1479111607), 1479122407);
        TZ_CHECK(from_utc("America/Godthab", 1624653758), 1624646558);
        TZ_CHECK(from_local("America/Godthab", 1624646558), 1624653758);
    } else {
        std::cerr << "NO TIMEZONE: America/Godthab" << std::endl;
    }
    if (has_timezone("America/Goose_Bay")) {
        TZ_CHECK(from_utc("America/Goose_Bay", 1468782100), 1468771300);
        TZ_CHECK(from_local("America/Goose_Bay", 1468771300), 1468782100);
        TZ_CHECK(from_utc("America/Goose_Bay", 1610080359), 1610065959);
        TZ_CHECK(from_local("America/Goose_Bay", 1610065959), 1610080359);
        TZ_CHECK(from_utc("America/Goose_Bay", 1627920319), 1627909519);
        TZ_CHECK(from_local("America/Goose_Bay", 1627909519), 1627920319);
        TZ_CHECK(from_utc("America/Goose_Bay", 1481030464), 1481016064);
        TZ_CHECK(from_local("America/Goose_Bay", 1481016064), 1481030464);
        TZ_CHECK(from_utc("America/Goose_Bay", 1561277524), 1561266724);
        TZ_CHECK(from_local("America/Goose_Bay", 1561266724), 1561277524);
    } else {
        std::cerr << "NO TIMEZONE: America/Goose_Bay" << std::endl;
    }
    if (has_timezone("America/Grand_Turk")) {
        TZ_CHECK(from_utc("America/Grand_Turk", 1549421341), 1549403341);
        TZ_CHECK(from_local("America/Grand_Turk", 1549403341), 1549421341);
        TZ_CHECK(from_utc("America/Grand_Turk", 1452133208), 1452118808);
        TZ_CHECK(from_local("America/Grand_Turk", 1452118808), 1452133208);
        TZ_CHECK(from_utc("America/Grand_Turk", 1544186183), 1544168183);
        TZ_CHECK(from_local("America/Grand_Turk", 1544168183), 1544186183);
        TZ_CHECK(from_utc("America/Grand_Turk", 1527192854), 1527178454);
        TZ_CHECK(from_local("America/Grand_Turk", 1527178454), 1527192854);
        TZ_CHECK(from_utc("America/Grand_Turk", 1585960344), 1585945944);
        TZ_CHECK(from_local("America/Grand_Turk", 1585945944), 1585960344);
    } else {
        std::cerr << "NO TIMEZONE: America/Grand_Turk" << std::endl;
    }
    if (has_timezone("America/Grenada")) {
        TZ_CHECK(from_utc("America/Grenada", 1455147425), 1455133025);
        TZ_CHECK(from_local("America/Grenada", 1455133025), 1455147425);
        TZ_CHECK(from_utc("America/Grenada", 1570207671), 1570193271);
        TZ_CHECK(from_local("America/Grenada", 1570193271), 1570207671);
        TZ_CHECK(from_utc("America/Grenada", 1471156687), 1471142287);
        TZ_CHECK(from_local("America/Grenada", 1471142287), 1471156687);
        TZ_CHECK(from_utc("America/Grenada", 1577497332), 1577482932);
        TZ_CHECK(from_local("America/Grenada", 1577482932), 1577497332);
        TZ_CHECK(from_utc("America/Grenada", 1543174061), 1543159661);
        TZ_CHECK(from_local("America/Grenada", 1543159661), 1543174061);
    } else {
        std::cerr << "NO TIMEZONE: America/Grenada" << std::endl;
    }
    if (has_timezone("America/Guadeloupe")) {
        TZ_CHECK(from_utc("America/Guadeloupe", 1530343008), 1530328608);
        TZ_CHECK(from_local("America/Guadeloupe", 1530328608), 1530343008);
        TZ_CHECK(from_utc("America/Guadeloupe", 1619182688), 1619168288);
        TZ_CHECK(from_local("America/Guadeloupe", 1619168288), 1619182688);
        TZ_CHECK(from_utc("America/Guadeloupe", 1588846079), 1588831679);
        TZ_CHECK(from_local("America/Guadeloupe", 1588831679), 1588846079);
        TZ_CHECK(from_utc("America/Guadeloupe", 1541721191), 1541706791);
        TZ_CHECK(from_local("America/Guadeloupe", 1541706791), 1541721191);
        TZ_CHECK(from_utc("America/Guadeloupe", 1584383750), 1584369350);
        TZ_CHECK(from_local("America/Guadeloupe", 1584369350), 1584383750);
    } else {
        std::cerr << "NO TIMEZONE: America/Guadeloupe" << std::endl;
    }
    if (has_timezone("America/Guatemala")) {
        TZ_CHECK(from_utc("America/Guatemala", 1412879916), 1412858316);
        TZ_CHECK(from_local("America/Guatemala", 1412858316), 1412879916);
        TZ_CHECK(from_utc("America/Guatemala", 1606539727), 1606518127);
        TZ_CHECK(from_local("America/Guatemala", 1606518127), 1606539727);
        TZ_CHECK(from_utc("America/Guatemala", 1525350919), 1525329319);
        TZ_CHECK(from_local("America/Guatemala", 1525329319), 1525350919);
        TZ_CHECK(from_utc("America/Guatemala", 1615709467), 1615687867);
        TZ_CHECK(from_local("America/Guatemala", 1615687867), 1615709467);
        TZ_CHECK(from_utc("America/Guatemala", 1485325282), 1485303682);
        TZ_CHECK(from_local("America/Guatemala", 1485303682), 1485325282);
    } else {
        std::cerr << "NO TIMEZONE: America/Guatemala" << std::endl;
    }
    if (has_timezone("America/Guayaquil")) {
        TZ_CHECK(from_utc("America/Guayaquil", 1598721300), 1598703300);
        TZ_CHECK(from_local("America/Guayaquil", 1598703300), 1598721300);
        TZ_CHECK(from_utc("America/Guayaquil", 1559818211), 1559800211);
        TZ_CHECK(from_local("America/Guayaquil", 1559800211), 1559818211);
        TZ_CHECK(from_utc("America/Guayaquil", 1519446794), 1519428794);
        TZ_CHECK(from_local("America/Guayaquil", 1519428794), 1519446794);
        TZ_CHECK(from_utc("America/Guayaquil", 1419028439), 1419010439);
        TZ_CHECK(from_local("America/Guayaquil", 1419010439), 1419028439);
        TZ_CHECK(from_utc("America/Guayaquil", 1600479805), 1600461805);
        TZ_CHECK(from_local("America/Guayaquil", 1600461805), 1600479805);
    } else {
        std::cerr << "NO TIMEZONE: America/Guayaquil" << std::endl;
    }
    if (has_timezone("America/Guyana")) {
        TZ_CHECK(from_utc("America/Guyana", 1553751948), 1553737548);
        TZ_CHECK(from_local("America/Guyana", 1553737548), 1553751948);
        TZ_CHECK(from_utc("America/Guyana", 1526376948), 1526362548);
        TZ_CHECK(from_local("America/Guyana", 1526362548), 1526376948);
        TZ_CHECK(from_utc("America/Guyana", 1560942041), 1560927641);
        TZ_CHECK(from_local("America/Guyana", 1560927641), 1560942041);
        TZ_CHECK(from_utc("America/Guyana", 1620470042), 1620455642);
        TZ_CHECK(from_local("America/Guyana", 1620455642), 1620470042);
        TZ_CHECK(from_utc("America/Guyana", 1566695653), 1566681253);
        TZ_CHECK(from_local("America/Guyana", 1566681253), 1566695653);
    } else {
        std::cerr << "NO TIMEZONE: America/Guyana" << std::endl;
    }
    if (has_timezone("America/Halifax")) {
        TZ_CHECK(from_utc("America/Halifax", 1527973698), 1527962898);
        TZ_CHECK(from_local("America/Halifax", 1527962898), 1527973698);
        TZ_CHECK(from_utc("America/Halifax", 1578192836), 1578178436);
        TZ_CHECK(from_local("America/Halifax", 1578178436), 1578192836);
        TZ_CHECK(from_utc("America/Halifax", 1605663054), 1605648654);
        TZ_CHECK(from_local("America/Halifax", 1605648654), 1605663054);
        TZ_CHECK(from_utc("America/Halifax", 1518745119), 1518730719);
        TZ_CHECK(from_local("America/Halifax", 1518730719), 1518745119);
        TZ_CHECK(from_utc("America/Halifax", 1460464910), 1460454110);
        TZ_CHECK(from_local("America/Halifax", 1460454110), 1460464910);
    } else {
        std::cerr << "NO TIMEZONE: America/Halifax" << std::endl;
    }
    if (has_timezone("America/Havana")) {
        TZ_CHECK(from_utc("America/Havana", 1499149934), 1499135534);
        TZ_CHECK(from_local("America/Havana", 1499135534), 1499149934);
        TZ_CHECK(from_utc("America/Havana", 1621987802), 1621973402);
        TZ_CHECK(from_local("America/Havana", 1621973402), 1621987802);
        TZ_CHECK(from_utc("America/Havana", 1511702806), 1511684806);
        TZ_CHECK(from_local("America/Havana", 1511684806), 1511702806);
        TZ_CHECK(from_utc("America/Havana", 1488538538), 1488520538);
        TZ_CHECK(from_local("America/Havana", 1488520538), 1488538538);
        TZ_CHECK(from_utc("America/Havana", 1607647039), 1607629039);
        TZ_CHECK(from_local("America/Havana", 1607629039), 1607647039);
    } else {
        std::cerr << "NO TIMEZONE: America/Havana" << std::endl;
    }
    if (has_timezone("America/Hermosillo")) {
        TZ_CHECK(from_utc("America/Hermosillo", 1547887674), 1547862474);
        TZ_CHECK(from_local("America/Hermosillo", 1547862474), 1547887674);
        TZ_CHECK(from_utc("America/Hermosillo", 1457634772), 1457609572);
        TZ_CHECK(from_local("America/Hermosillo", 1457609572), 1457634772);
        TZ_CHECK(from_utc("America/Hermosillo", 1559069950), 1559044750);
        TZ_CHECK(from_local("America/Hermosillo", 1559044750), 1559069950);
        TZ_CHECK(from_utc("America/Hermosillo", 1506861911), 1506836711);
        TZ_CHECK(from_local("America/Hermosillo", 1506836711), 1506861911);
        TZ_CHECK(from_utc("America/Hermosillo", 1566914158), 1566888958);
        TZ_CHECK(from_local("America/Hermosillo", 1566888958), 1566914158);
    } else {
        std::cerr << "NO TIMEZONE: America/Hermosillo" << std::endl;
    }
    if (has_timezone("America/Indiana/Indianapolis")) {
        TZ_CHECK(from_utc("America/Indiana/Indianapolis", 1601240898), 1601226498);
        TZ_CHECK(from_local("America/Indiana/Indianapolis", 1601226498), 1601240898);
        TZ_CHECK(from_utc("America/Indiana/Indianapolis", 1553378660), 1553364260);
        TZ_CHECK(from_local("America/Indiana/Indianapolis", 1553364260), 1553378660);
        TZ_CHECK(from_utc("America/Indiana/Indianapolis", 1435757147), 1435742747);
        TZ_CHECK(from_local("America/Indiana/Indianapolis", 1435742747), 1435757147);
        TZ_CHECK(from_utc("America/Indiana/Indianapolis", 1566558604), 1566544204);
        TZ_CHECK(from_local("America/Indiana/Indianapolis", 1566544204), 1566558604);
        TZ_CHECK(from_utc("America/Indiana/Indianapolis", 1487448062), 1487430062);
        TZ_CHECK(from_local("America/Indiana/Indianapolis", 1487430062), 1487448062);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Indianapolis" << std::endl;
    }
    if (has_timezone("America/Indiana/Knox")) {
        TZ_CHECK(from_utc("America/Indiana/Knox", 1523181970), 1523163970);
        TZ_CHECK(from_local("America/Indiana/Knox", 1523163970), 1523181970);
        TZ_CHECK(from_utc("America/Indiana/Knox", 1459806661), 1459788661);
        TZ_CHECK(from_local("America/Indiana/Knox", 1459788661), 1459806661);
        TZ_CHECK(from_utc("America/Indiana/Knox", 1540674795), 1540656795);
        TZ_CHECK(from_local("America/Indiana/Knox", 1540656795), 1540674795);
        TZ_CHECK(from_utc("America/Indiana/Knox", 1616509864), 1616491864);
        TZ_CHECK(from_local("America/Indiana/Knox", 1616491864), 1616509864);
        TZ_CHECK(from_utc("America/Indiana/Knox", 1505858608), 1505840608);
        TZ_CHECK(from_local("America/Indiana/Knox", 1505840608), 1505858608);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Knox" << std::endl;
    }
    if (has_timezone("America/Indiana/Marengo")) {
        TZ_CHECK(from_utc("America/Indiana/Marengo", 1411523781), 1411509381);
        TZ_CHECK(from_local("America/Indiana/Marengo", 1411509381), 1411523781);
        TZ_CHECK(from_utc("America/Indiana/Marengo", 1473976262), 1473961862);
        TZ_CHECK(from_local("America/Indiana/Marengo", 1473961862), 1473976262);
        TZ_CHECK(from_utc("America/Indiana/Marengo", 1413531676), 1413517276);
        TZ_CHECK(from_local("America/Indiana/Marengo", 1413517276), 1413531676);
        TZ_CHECK(from_utc("America/Indiana/Marengo", 1593454426), 1593440026);
        TZ_CHECK(from_local("America/Indiana/Marengo", 1593440026), 1593454426);
        TZ_CHECK(from_utc("America/Indiana/Marengo", 1544200812), 1544182812);
        TZ_CHECK(from_local("America/Indiana/Marengo", 1544182812), 1544200812);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Marengo" << std::endl;
    }
    if (has_timezone("America/Indiana/Petersburg")) {
        TZ_CHECK(from_utc("America/Indiana/Petersburg", 1435618861), 1435604461);
        TZ_CHECK(from_local("America/Indiana/Petersburg", 1435604461), 1435618861);
        TZ_CHECK(from_utc("America/Indiana/Petersburg", 1572333490), 1572319090);
        TZ_CHECK(from_local("America/Indiana/Petersburg", 1572319090), 1572333490);
        TZ_CHECK(from_utc("America/Indiana/Petersburg", 1624025650), 1624011250);
        TZ_CHECK(from_local("America/Indiana/Petersburg", 1624011250), 1624025650);
        TZ_CHECK(from_utc("America/Indiana/Petersburg", 1436849990), 1436835590);
        TZ_CHECK(from_local("America/Indiana/Petersburg", 1436835590), 1436849990);
        TZ_CHECK(from_utc("America/Indiana/Petersburg", 1469246877), 1469232477);
        TZ_CHECK(from_local("America/Indiana/Petersburg", 1469232477), 1469246877);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Petersburg" << std::endl;
    }
    if (has_timezone("America/Indiana/Tell_City")) {
        TZ_CHECK(from_utc("America/Indiana/Tell_City", 1413207150), 1413189150);
        TZ_CHECK(from_local("America/Indiana/Tell_City", 1413189150), 1413207150);
        TZ_CHECK(from_utc("America/Indiana/Tell_City", 1589742057), 1589724057);
        TZ_CHECK(from_local("America/Indiana/Tell_City", 1589724057), 1589742057);
        TZ_CHECK(from_utc("America/Indiana/Tell_City", 1505849965), 1505831965);
        TZ_CHECK(from_local("America/Indiana/Tell_City", 1505831965), 1505849965);
        TZ_CHECK(from_utc("America/Indiana/Tell_City", 1586221254), 1586203254);
        TZ_CHECK(from_local("America/Indiana/Tell_City", 1586203254), 1586221254);
        TZ_CHECK(from_utc("America/Indiana/Tell_City", 1486425830), 1486404230);
        TZ_CHECK(from_local("America/Indiana/Tell_City", 1486404230), 1486425830);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Tell_City" << std::endl;
    }
    if (has_timezone("America/Indiana/Vevay")) {
        TZ_CHECK(from_utc("America/Indiana/Vevay", 1498342487), 1498328087);
        TZ_CHECK(from_local("America/Indiana/Vevay", 1498328087), 1498342487);
        TZ_CHECK(from_utc("America/Indiana/Vevay", 1461254962), 1461240562);
        TZ_CHECK(from_local("America/Indiana/Vevay", 1461240562), 1461254962);
        TZ_CHECK(from_utc("America/Indiana/Vevay", 1527180577), 1527166177);
        TZ_CHECK(from_local("America/Indiana/Vevay", 1527166177), 1527180577);
        TZ_CHECK(from_utc("America/Indiana/Vevay", 1452999861), 1452981861);
        TZ_CHECK(from_local("America/Indiana/Vevay", 1452981861), 1452999861);
        TZ_CHECK(from_utc("America/Indiana/Vevay", 1486821805), 1486803805);
        TZ_CHECK(from_local("America/Indiana/Vevay", 1486803805), 1486821805);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Vevay" << std::endl;
    }
    if (has_timezone("America/Indiana/Vincennes")) {
        TZ_CHECK(from_utc("America/Indiana/Vincennes", 1605181041), 1605163041);
        TZ_CHECK(from_local("America/Indiana/Vincennes", 1605163041), 1605181041);
        TZ_CHECK(from_utc("America/Indiana/Vincennes", 1431100737), 1431086337);
        TZ_CHECK(from_local("America/Indiana/Vincennes", 1431086337), 1431100737);
        TZ_CHECK(from_utc("America/Indiana/Vincennes", 1435025801), 1435011401);
        TZ_CHECK(from_local("America/Indiana/Vincennes", 1435011401), 1435025801);
        TZ_CHECK(from_utc("America/Indiana/Vincennes", 1430495983), 1430481583);
        TZ_CHECK(from_local("America/Indiana/Vincennes", 1430481583), 1430495983);
        TZ_CHECK(from_utc("America/Indiana/Vincennes", 1440363653), 1440349253);
        TZ_CHECK(from_local("America/Indiana/Vincennes", 1440349253), 1440363653);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Vincennes" << std::endl;
    }
    if (has_timezone("America/Indiana/Winamac")) {
        TZ_CHECK(from_utc("America/Indiana/Winamac", 1602503301), 1602488901);
        TZ_CHECK(from_local("America/Indiana/Winamac", 1602488901), 1602503301);
        TZ_CHECK(from_utc("America/Indiana/Winamac", 1590476428), 1590462028);
        TZ_CHECK(from_local("America/Indiana/Winamac", 1590462028), 1590476428);
        TZ_CHECK(from_utc("America/Indiana/Winamac", 1431917321), 1431902921);
        TZ_CHECK(from_local("America/Indiana/Winamac", 1431902921), 1431917321);
        TZ_CHECK(from_utc("America/Indiana/Winamac", 1472943826), 1472929426);
        TZ_CHECK(from_local("America/Indiana/Winamac", 1472929426), 1472943826);
        TZ_CHECK(from_utc("America/Indiana/Winamac", 1591796938), 1591782538);
        TZ_CHECK(from_local("America/Indiana/Winamac", 1591782538), 1591796938);
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Winamac" << std::endl;
    }
    if (has_timezone("America/Indianapolis")) {
        TZ_CHECK(from_utc("America/Indianapolis", 1597671325), 1597656925);
        TZ_CHECK(from_local("America/Indianapolis", 1597656925), 1597671325);
        TZ_CHECK(from_utc("America/Indianapolis", 1490942131), 1490927731);
        TZ_CHECK(from_local("America/Indianapolis", 1490927731), 1490942131);
        TZ_CHECK(from_utc("America/Indianapolis", 1446271341), 1446256941);
        TZ_CHECK(from_local("America/Indianapolis", 1446256941), 1446271341);
        TZ_CHECK(from_utc("America/Indianapolis", 1498256825), 1498242425);
        TZ_CHECK(from_local("America/Indianapolis", 1498242425), 1498256825);
        TZ_CHECK(from_utc("America/Indianapolis", 1526924690), 1526910290);
        TZ_CHECK(from_local("America/Indianapolis", 1526910290), 1526924690);
    } else {
        std::cerr << "NO TIMEZONE: America/Indianapolis" << std::endl;
    }
    if (has_timezone("America/Inuvik")) {
        TZ_CHECK(from_utc("America/Inuvik", 1598501420), 1598479820);
        TZ_CHECK(from_local("America/Inuvik", 1598479820), 1598501420);
        TZ_CHECK(from_utc("America/Inuvik", 1503412296), 1503390696);
        TZ_CHECK(from_local("America/Inuvik", 1503390696), 1503412296);
        TZ_CHECK(from_utc("America/Inuvik", 1479769871), 1479744671);
        TZ_CHECK(from_local("America/Inuvik", 1479744671), 1479769871);
        TZ_CHECK(from_utc("America/Inuvik", 1577326079), 1577300879);
        TZ_CHECK(from_local("America/Inuvik", 1577300879), 1577326079);
        TZ_CHECK(from_utc("America/Inuvik", 1419607416), 1419582216);
        TZ_CHECK(from_local("America/Inuvik", 1419582216), 1419607416);
    } else {
        std::cerr << "NO TIMEZONE: America/Inuvik" << std::endl;
    }
    if (has_timezone("America/Iqaluit")) {
        TZ_CHECK(from_utc("America/Iqaluit", 1475602323), 1475587923);
        TZ_CHECK(from_local("America/Iqaluit", 1475587923), 1475602323);
        TZ_CHECK(from_utc("America/Iqaluit", 1463628546), 1463614146);
        TZ_CHECK(from_local("America/Iqaluit", 1463614146), 1463628546);
        TZ_CHECK(from_utc("America/Iqaluit", 1630212089), 1630197689);
        TZ_CHECK(from_local("America/Iqaluit", 1630197689), 1630212089);
        TZ_CHECK(from_utc("America/Iqaluit", 1542609994), 1542591994);
        TZ_CHECK(from_local("America/Iqaluit", 1542591994), 1542609994);
        TZ_CHECK(from_utc("America/Iqaluit", 1448077259), 1448059259);
        TZ_CHECK(from_local("America/Iqaluit", 1448059259), 1448077259);
    } else {
        std::cerr << "NO TIMEZONE: America/Iqaluit" << std::endl;
    }
    if (has_timezone("America/Jamaica")) {
        TZ_CHECK(from_utc("America/Jamaica", 1551738102), 1551720102);
        TZ_CHECK(from_local("America/Jamaica", 1551720102), 1551738102);
        TZ_CHECK(from_utc("America/Jamaica", 1618045479), 1618027479);
        TZ_CHECK(from_local("America/Jamaica", 1618027479), 1618045479);
        TZ_CHECK(from_utc("America/Jamaica", 1565548561), 1565530561);
        TZ_CHECK(from_local("America/Jamaica", 1565530561), 1565548561);
        TZ_CHECK(from_utc("America/Jamaica", 1563044251), 1563026251);
        TZ_CHECK(from_local("America/Jamaica", 1563026251), 1563044251);
        TZ_CHECK(from_utc("America/Jamaica", 1509942910), 1509924910);
        TZ_CHECK(from_local("America/Jamaica", 1509924910), 1509942910);
    } else {
        std::cerr << "NO TIMEZONE: America/Jamaica" << std::endl;
    }
    if (has_timezone("America/Jujuy")) {
        TZ_CHECK(from_utc("America/Jujuy", 1579100634), 1579089834);
        TZ_CHECK(from_local("America/Jujuy", 1579089834), 1579100634);
        TZ_CHECK(from_utc("America/Jujuy", 1560236200), 1560225400);
        TZ_CHECK(from_local("America/Jujuy", 1560225400), 1560236200);
        TZ_CHECK(from_utc("America/Jujuy", 1418769421), 1418758621);
        TZ_CHECK(from_local("America/Jujuy", 1418758621), 1418769421);
        TZ_CHECK(from_utc("America/Jujuy", 1533989539), 1533978739);
        TZ_CHECK(from_local("America/Jujuy", 1533978739), 1533989539);
        TZ_CHECK(from_utc("America/Jujuy", 1599238970), 1599228170);
        TZ_CHECK(from_local("America/Jujuy", 1599228170), 1599238970);
    } else {
        std::cerr << "NO TIMEZONE: America/Jujuy" << std::endl;
    }
    if (has_timezone("America/Juneau")) {
        TZ_CHECK(from_utc("America/Juneau", 1434062311), 1434033511);
        TZ_CHECK(from_local("America/Juneau", 1434033511), 1434062311);
        TZ_CHECK(from_utc("America/Juneau", 1568701581), 1568672781);
        TZ_CHECK(from_local("America/Juneau", 1568672781), 1568701581);
        TZ_CHECK(from_utc("America/Juneau", 1485379292), 1485346892);
        TZ_CHECK(from_local("America/Juneau", 1485346892), 1485379292);
        TZ_CHECK(from_utc("America/Juneau", 1473942499), 1473913699);
        TZ_CHECK(from_local("America/Juneau", 1473913699), 1473942499);
        TZ_CHECK(from_utc("America/Juneau", 1626670459), 1626641659);
        TZ_CHECK(from_local("America/Juneau", 1626641659), 1626670459);
    } else {
        std::cerr << "NO TIMEZONE: America/Juneau" << std::endl;
    }
    if (has_timezone("America/Kentucky/Louisville")) {
        TZ_CHECK(from_utc("America/Kentucky/Louisville", 1547401039), 1547383039);
        TZ_CHECK(from_local("America/Kentucky/Louisville", 1547383039), 1547401039);
        TZ_CHECK(from_utc("America/Kentucky/Louisville", 1496430444), 1496416044);
        TZ_CHECK(from_local("America/Kentucky/Louisville", 1496416044), 1496430444);
        TZ_CHECK(from_utc("America/Kentucky/Louisville", 1599560747), 1599546347);
        TZ_CHECK(from_local("America/Kentucky/Louisville", 1599546347), 1599560747);
        TZ_CHECK(from_utc("America/Kentucky/Louisville", 1448235198), 1448217198);
        TZ_CHECK(from_local("America/Kentucky/Louisville", 1448217198), 1448235198);
        TZ_CHECK(from_utc("America/Kentucky/Louisville", 1578963107), 1578945107);
        TZ_CHECK(from_local("America/Kentucky/Louisville", 1578945107), 1578963107);
    } else {
        std::cerr << "NO TIMEZONE: America/Kentucky/Louisville" << std::endl;
    }
    if (has_timezone("America/Kentucky/Monticello")) {
        TZ_CHECK(from_utc("America/Kentucky/Monticello", 1492892057), 1492877657);
        TZ_CHECK(from_local("America/Kentucky/Monticello", 1492877657), 1492892057);
        TZ_CHECK(from_utc("America/Kentucky/Monticello", 1456015521), 1455997521);
        TZ_CHECK(from_local("America/Kentucky/Monticello", 1455997521), 1456015521);
        TZ_CHECK(from_utc("America/Kentucky/Monticello", 1555741221), 1555726821);
        TZ_CHECK(from_local("America/Kentucky/Monticello", 1555726821), 1555741221);
        TZ_CHECK(from_utc("America/Kentucky/Monticello", 1412987645), 1412973245);
        TZ_CHECK(from_local("America/Kentucky/Monticello", 1412973245), 1412987645);
        TZ_CHECK(from_utc("America/Kentucky/Monticello", 1440314539), 1440300139);
        TZ_CHECK(from_local("America/Kentucky/Monticello", 1440300139), 1440314539);
    } else {
        std::cerr << "NO TIMEZONE: America/Kentucky/Monticello" << std::endl;
    }
    if (has_timezone("America/Knox_IN")) {
        TZ_CHECK(from_utc("America/Knox_IN", 1483348634), 1483327034);
        TZ_CHECK(from_local("America/Knox_IN", 1483327034), 1483348634);
        TZ_CHECK(from_utc("America/Knox_IN", 1455293790), 1455272190);
        TZ_CHECK(from_local("America/Knox_IN", 1455272190), 1455293790);
        TZ_CHECK(from_utc("America/Knox_IN", 1508503333), 1508485333);
        TZ_CHECK(from_local("America/Knox_IN", 1508485333), 1508503333);
        TZ_CHECK(from_utc("America/Knox_IN", 1427335917), 1427317917);
        TZ_CHECK(from_local("America/Knox_IN", 1427317917), 1427335917);
        TZ_CHECK(from_utc("America/Knox_IN", 1477677713), 1477659713);
        TZ_CHECK(from_local("America/Knox_IN", 1477659713), 1477677713);
    } else {
        std::cerr << "NO TIMEZONE: America/Knox_IN" << std::endl;
    }
    if (has_timezone("America/Kralendijk")) {
        TZ_CHECK(from_utc("America/Kralendijk", 1427622771), 1427608371);
        TZ_CHECK(from_local("America/Kralendijk", 1427608371), 1427622771);
        TZ_CHECK(from_utc("America/Kralendijk", 1579637361), 1579622961);
        TZ_CHECK(from_local("America/Kralendijk", 1579622961), 1579637361);
        TZ_CHECK(from_utc("America/Kralendijk", 1488527261), 1488512861);
        TZ_CHECK(from_local("America/Kralendijk", 1488512861), 1488527261);
        TZ_CHECK(from_utc("America/Kralendijk", 1561975113), 1561960713);
        TZ_CHECK(from_local("America/Kralendijk", 1561960713), 1561975113);
        TZ_CHECK(from_utc("America/Kralendijk", 1482234169), 1482219769);
        TZ_CHECK(from_local("America/Kralendijk", 1482219769), 1482234169);
    } else {
        std::cerr << "NO TIMEZONE: America/Kralendijk" << std::endl;
    }
    if (has_timezone("America/La_Paz")) {
        TZ_CHECK(from_utc("America/La_Paz", 1518083542), 1518069142);
        TZ_CHECK(from_local("America/La_Paz", 1518069142), 1518083542);
        TZ_CHECK(from_utc("America/La_Paz", 1617615559), 1617601159);
        TZ_CHECK(from_local("America/La_Paz", 1617601159), 1617615559);
        TZ_CHECK(from_utc("America/La_Paz", 1428341979), 1428327579);
        TZ_CHECK(from_local("America/La_Paz", 1428327579), 1428341979);
        TZ_CHECK(from_utc("America/La_Paz", 1525907541), 1525893141);
        TZ_CHECK(from_local("America/La_Paz", 1525893141), 1525907541);
        TZ_CHECK(from_utc("America/La_Paz", 1613412743), 1613398343);
        TZ_CHECK(from_local("America/La_Paz", 1613398343), 1613412743);
    } else {
        std::cerr << "NO TIMEZONE: America/La_Paz" << std::endl;
    }
    if (has_timezone("America/Lima")) {
        TZ_CHECK(from_utc("America/Lima", 1535177336), 1535159336);
        TZ_CHECK(from_local("America/Lima", 1535159336), 1535177336);
        TZ_CHECK(from_utc("America/Lima", 1609163912), 1609145912);
        TZ_CHECK(from_local("America/Lima", 1609145912), 1609163912);
        TZ_CHECK(from_utc("America/Lima", 1477344090), 1477326090);
        TZ_CHECK(from_local("America/Lima", 1477326090), 1477344090);
        TZ_CHECK(from_utc("America/Lima", 1603505789), 1603487789);
        TZ_CHECK(from_local("America/Lima", 1603487789), 1603505789);
        TZ_CHECK(from_utc("America/Lima", 1486150484), 1486132484);
        TZ_CHECK(from_local("America/Lima", 1486132484), 1486150484);
    } else {
        std::cerr << "NO TIMEZONE: America/Lima" << std::endl;
    }
    if (has_timezone("America/Los_Angeles")) {
        TZ_CHECK(from_utc("America/Los_Angeles", 1509106384), 1509081184);
        TZ_CHECK(from_local("America/Los_Angeles", 1509081184), 1509106384);
        TZ_CHECK(from_utc("America/Los_Angeles", 1524144287), 1524119087);
        TZ_CHECK(from_local("America/Los_Angeles", 1524119087), 1524144287);
        TZ_CHECK(from_utc("America/Los_Angeles", 1552733365), 1552708165);
        TZ_CHECK(from_local("America/Los_Angeles", 1552708165), 1552733365);
        TZ_CHECK(from_utc("America/Los_Angeles", 1435424149), 1435398949);
        TZ_CHECK(from_local("America/Los_Angeles", 1435398949), 1435424149);
        TZ_CHECK(from_utc("America/Los_Angeles", 1433802519), 1433777319);
        TZ_CHECK(from_local("America/Los_Angeles", 1433777319), 1433802519);
    } else {
        std::cerr << "NO TIMEZONE: America/Los_Angeles" << std::endl;
    }
    if (has_timezone("America/Louisville")) {
        TZ_CHECK(from_utc("America/Louisville", 1519223296), 1519205296);
        TZ_CHECK(from_local("America/Louisville", 1519205296), 1519223296);
        TZ_CHECK(from_utc("America/Louisville", 1517760039), 1517742039);
        TZ_CHECK(from_local("America/Louisville", 1517742039), 1517760039);
        TZ_CHECK(from_utc("America/Louisville", 1416736883), 1416718883);
        TZ_CHECK(from_local("America/Louisville", 1416718883), 1416736883);
        TZ_CHECK(from_utc("America/Louisville", 1495407831), 1495393431);
        TZ_CHECK(from_local("America/Louisville", 1495393431), 1495407831);
        TZ_CHECK(from_utc("America/Louisville", 1451362548), 1451344548);
        TZ_CHECK(from_local("America/Louisville", 1451344548), 1451362548);
    } else {
        std::cerr << "NO TIMEZONE: America/Louisville" << std::endl;
    }
    if (has_timezone("America/Lower_Princes")) {
        TZ_CHECK(from_utc("America/Lower_Princes", 1540872574), 1540858174);
        TZ_CHECK(from_local("America/Lower_Princes", 1540858174), 1540872574);
        TZ_CHECK(from_utc("America/Lower_Princes", 1569043915), 1569029515);
        TZ_CHECK(from_local("America/Lower_Princes", 1569029515), 1569043915);
        TZ_CHECK(from_utc("America/Lower_Princes", 1458764130), 1458749730);
        TZ_CHECK(from_local("America/Lower_Princes", 1458749730), 1458764130);
        TZ_CHECK(from_utc("America/Lower_Princes", 1567617403), 1567603003);
        TZ_CHECK(from_local("America/Lower_Princes", 1567603003), 1567617403);
        TZ_CHECK(from_utc("America/Lower_Princes", 1581940779), 1581926379);
        TZ_CHECK(from_local("America/Lower_Princes", 1581926379), 1581940779);
    } else {
        std::cerr << "NO TIMEZONE: America/Lower_Princes" << std::endl;
    }
    if (has_timezone("America/Maceio")) {
        TZ_CHECK(from_utc("America/Maceio", 1477326147), 1477315347);
        TZ_CHECK(from_local("America/Maceio", 1477315347), 1477326147);
        TZ_CHECK(from_utc("America/Maceio", 1572670836), 1572660036);
        TZ_CHECK(from_local("America/Maceio", 1572660036), 1572670836);
        TZ_CHECK(from_utc("America/Maceio", 1523110140), 1523099340);
        TZ_CHECK(from_local("America/Maceio", 1523099340), 1523110140);
        TZ_CHECK(from_utc("America/Maceio", 1616557712), 1616546912);
        TZ_CHECK(from_local("America/Maceio", 1616546912), 1616557712);
        TZ_CHECK(from_utc("America/Maceio", 1624695407), 1624684607);
        TZ_CHECK(from_local("America/Maceio", 1624684607), 1624695407);
    } else {
        std::cerr << "NO TIMEZONE: America/Maceio" << std::endl;
    }
    if (has_timezone("America/Managua")) {
        TZ_CHECK(from_utc("America/Managua", 1481443442), 1481421842);
        TZ_CHECK(from_local("America/Managua", 1481421842), 1481443442);
        TZ_CHECK(from_utc("America/Managua", 1492580663), 1492559063);
        TZ_CHECK(from_local("America/Managua", 1492559063), 1492580663);
        TZ_CHECK(from_utc("America/Managua", 1627851412), 1627829812);
        TZ_CHECK(from_local("America/Managua", 1627829812), 1627851412);
        TZ_CHECK(from_utc("America/Managua", 1476004677), 1475983077);
        TZ_CHECK(from_local("America/Managua", 1475983077), 1476004677);
        TZ_CHECK(from_utc("America/Managua", 1480354131), 1480332531);
        TZ_CHECK(from_local("America/Managua", 1480332531), 1480354131);
    } else {
        std::cerr << "NO TIMEZONE: America/Managua" << std::endl;
    }
    if (has_timezone("America/Manaus")) {
        TZ_CHECK(from_utc("America/Manaus", 1417503213), 1417488813);
        TZ_CHECK(from_local("America/Manaus", 1417488813), 1417503213);
        TZ_CHECK(from_utc("America/Manaus", 1444470817), 1444456417);
        TZ_CHECK(from_local("America/Manaus", 1444456417), 1444470817);
        TZ_CHECK(from_utc("America/Manaus", 1487175417), 1487161017);
        TZ_CHECK(from_local("America/Manaus", 1487161017), 1487175417);
        TZ_CHECK(from_utc("America/Manaus", 1542162708), 1542148308);
        TZ_CHECK(from_local("America/Manaus", 1542148308), 1542162708);
        TZ_CHECK(from_utc("America/Manaus", 1580238986), 1580224586);
        TZ_CHECK(from_local("America/Manaus", 1580224586), 1580238986);
    } else {
        std::cerr << "NO TIMEZONE: America/Manaus" << std::endl;
    }
    if (has_timezone("America/Marigot")) {
        TZ_CHECK(from_utc("America/Marigot", 1549844004), 1549829604);
        TZ_CHECK(from_local("America/Marigot", 1549829604), 1549844004);
        TZ_CHECK(from_utc("America/Marigot", 1486374627), 1486360227);
        TZ_CHECK(from_local("America/Marigot", 1486360227), 1486374627);
        TZ_CHECK(from_utc("America/Marigot", 1509446713), 1509432313);
        TZ_CHECK(from_local("America/Marigot", 1509432313), 1509446713);
        TZ_CHECK(from_utc("America/Marigot", 1622724018), 1622709618);
        TZ_CHECK(from_local("America/Marigot", 1622709618), 1622724018);
        TZ_CHECK(from_utc("America/Marigot", 1578838982), 1578824582);
        TZ_CHECK(from_local("America/Marigot", 1578824582), 1578838982);
    } else {
        std::cerr << "NO TIMEZONE: America/Marigot" << std::endl;
    }
    if (has_timezone("America/Martinique")) {
        TZ_CHECK(from_utc("America/Martinique", 1447339715), 1447325315);
        TZ_CHECK(from_local("America/Martinique", 1447325315), 1447339715);
        TZ_CHECK(from_utc("America/Martinique", 1576721861), 1576707461);
        TZ_CHECK(from_local("America/Martinique", 1576707461), 1576721861);
        TZ_CHECK(from_utc("America/Martinique", 1619461141), 1619446741);
        TZ_CHECK(from_local("America/Martinique", 1619446741), 1619461141);
        TZ_CHECK(from_utc("America/Martinique", 1624443789), 1624429389);
        TZ_CHECK(from_local("America/Martinique", 1624429389), 1624443789);
        TZ_CHECK(from_utc("America/Martinique", 1523549630), 1523535230);
        TZ_CHECK(from_local("America/Martinique", 1523535230), 1523549630);
    } else {
        std::cerr << "NO TIMEZONE: America/Martinique" << std::endl;
    }
    if (has_timezone("America/Matamoros")) {
        TZ_CHECK(from_utc("America/Matamoros", 1468249488), 1468231488);
        TZ_CHECK(from_local("America/Matamoros", 1468231488), 1468249488);
        TZ_CHECK(from_utc("America/Matamoros", 1519274477), 1519252877);
        TZ_CHECK(from_local("America/Matamoros", 1519252877), 1519274477);
        TZ_CHECK(from_utc("America/Matamoros", 1434724031), 1434706031);
        TZ_CHECK(from_local("America/Matamoros", 1434706031), 1434724031);
        TZ_CHECK(from_utc("America/Matamoros", 1505143654), 1505125654);
        TZ_CHECK(from_local("America/Matamoros", 1505125654), 1505143654);
        TZ_CHECK(from_utc("America/Matamoros", 1570533197), 1570515197);
        TZ_CHECK(from_local("America/Matamoros", 1570515197), 1570533197);
    } else {
        std::cerr << "NO TIMEZONE: America/Matamoros" << std::endl;
    }
    if (has_timezone("America/Mazatlan")) {
        TZ_CHECK(from_utc("America/Mazatlan", 1415258504), 1415233304);
        TZ_CHECK(from_local("America/Mazatlan", 1415233304), 1415258504);
        TZ_CHECK(from_utc("America/Mazatlan", 1552554750), 1552529550);
        TZ_CHECK(from_local("America/Mazatlan", 1552529550), 1552554750);
        TZ_CHECK(from_utc("America/Mazatlan", 1461749658), 1461728058);
        TZ_CHECK(from_local("America/Mazatlan", 1461728058), 1461749658);
        TZ_CHECK(from_utc("America/Mazatlan", 1420848689), 1420823489);
        TZ_CHECK(from_local("America/Mazatlan", 1420823489), 1420848689);
        TZ_CHECK(from_utc("America/Mazatlan", 1611444293), 1611419093);
        TZ_CHECK(from_local("America/Mazatlan", 1611419093), 1611444293);
    } else {
        std::cerr << "NO TIMEZONE: America/Mazatlan" << std::endl;
    }
    if (has_timezone("America/Mendoza")) {
        TZ_CHECK(from_utc("America/Mendoza", 1615451569), 1615440769);
        TZ_CHECK(from_local("America/Mendoza", 1615440769), 1615451569);
        TZ_CHECK(from_utc("America/Mendoza", 1475172530), 1475161730);
        TZ_CHECK(from_local("America/Mendoza", 1475161730), 1475172530);
        TZ_CHECK(from_utc("America/Mendoza", 1425397898), 1425387098);
        TZ_CHECK(from_local("America/Mendoza", 1425387098), 1425397898);
        TZ_CHECK(from_utc("America/Mendoza", 1486070670), 1486059870);
        TZ_CHECK(from_local("America/Mendoza", 1486059870), 1486070670);
        TZ_CHECK(from_utc("America/Mendoza", 1555641691), 1555630891);
        TZ_CHECK(from_local("America/Mendoza", 1555630891), 1555641691);
    } else {
        std::cerr << "NO TIMEZONE: America/Mendoza" << std::endl;
    }
    if (has_timezone("America/Menominee")) {
        TZ_CHECK(from_utc("America/Menominee", 1523132293), 1523114293);
        TZ_CHECK(from_local("America/Menominee", 1523114293), 1523132293);
        TZ_CHECK(from_utc("America/Menominee", 1495245067), 1495227067);
        TZ_CHECK(from_local("America/Menominee", 1495227067), 1495245067);
        TZ_CHECK(from_utc("America/Menominee", 1442531877), 1442513877);
        TZ_CHECK(from_local("America/Menominee", 1442513877), 1442531877);
        TZ_CHECK(from_utc("America/Menominee", 1555475485), 1555457485);
        TZ_CHECK(from_local("America/Menominee", 1555457485), 1555475485);
        TZ_CHECK(from_utc("America/Menominee", 1571908402), 1571890402);
        TZ_CHECK(from_local("America/Menominee", 1571890402), 1571908402);
    } else {
        std::cerr << "NO TIMEZONE: America/Menominee" << std::endl;
    }
    if (has_timezone("America/Merida")) {
        TZ_CHECK(from_utc("America/Merida", 1414547186), 1414525586);
        TZ_CHECK(from_local("America/Merida", 1414525586), 1414547186);
        TZ_CHECK(from_utc("America/Merida", 1433440409), 1433422409);
        TZ_CHECK(from_local("America/Merida", 1433422409), 1433440409);
        TZ_CHECK(from_utc("America/Merida", 1609333259), 1609311659);
        TZ_CHECK(from_local("America/Merida", 1609311659), 1609333259);
        TZ_CHECK(from_utc("America/Merida", 1437836391), 1437818391);
        TZ_CHECK(from_local("America/Merida", 1437818391), 1437836391);
        TZ_CHECK(from_utc("America/Merida", 1437670407), 1437652407);
        TZ_CHECK(from_local("America/Merida", 1437652407), 1437670407);
    } else {
        std::cerr << "NO TIMEZONE: America/Merida" << std::endl;
    }
    if (has_timezone("America/Metlakatla")) {
        TZ_CHECK(from_utc("America/Metlakatla", 1428756396), 1428727596);
        TZ_CHECK(from_local("America/Metlakatla", 1428727596), 1428756396);
        TZ_CHECK(from_utc("America/Metlakatla", 1463329930), 1463301130);
        TZ_CHECK(from_local("America/Metlakatla", 1463301130), 1463329930);
        TZ_CHECK(from_utc("America/Metlakatla", 1477201907), 1477173107);
        TZ_CHECK(from_local("America/Metlakatla", 1477173107), 1477201907);
        TZ_CHECK(from_utc("America/Metlakatla", 1450216442), 1450184042);
        TZ_CHECK(from_local("America/Metlakatla", 1450184042), 1450216442);
        TZ_CHECK(from_utc("America/Metlakatla", 1584073631), 1584044831);
        TZ_CHECK(from_local("America/Metlakatla", 1584044831), 1584073631);
    } else {
        std::cerr << "NO TIMEZONE: America/Metlakatla" << std::endl;
    }
    if (has_timezone("America/Mexico_City")) {
        TZ_CHECK(from_utc("America/Mexico_City", 1568046052), 1568028052);
        TZ_CHECK(from_local("America/Mexico_City", 1568028052), 1568046052);
        TZ_CHECK(from_utc("America/Mexico_City", 1623449579), 1623431579);
        TZ_CHECK(from_local("America/Mexico_City", 1623431579), 1623449579);
        TZ_CHECK(from_utc("America/Mexico_City", 1469182684), 1469164684);
        TZ_CHECK(from_local("America/Mexico_City", 1469164684), 1469182684);
        TZ_CHECK(from_utc("America/Mexico_City", 1445643448), 1445625448);
        TZ_CHECK(from_local("America/Mexico_City", 1445625448), 1445643448);
        TZ_CHECK(from_utc("America/Mexico_City", 1587099883), 1587081883);
        TZ_CHECK(from_local("America/Mexico_City", 1587081883), 1587099883);
    } else {
        std::cerr << "NO TIMEZONE: America/Mexico_City" << std::endl;
    }
    if (has_timezone("America/Miquelon")) {
        TZ_CHECK(from_utc("America/Miquelon", 1611336331), 1611325531);
        TZ_CHECK(from_local("America/Miquelon", 1611325531), 1611336331);
        TZ_CHECK(from_utc("America/Miquelon", 1608479583), 1608468783);
        TZ_CHECK(from_local("America/Miquelon", 1608468783), 1608479583);
        TZ_CHECK(from_utc("America/Miquelon", 1555758868), 1555751668);
        TZ_CHECK(from_local("America/Miquelon", 1555751668), 1555758868);
        TZ_CHECK(from_utc("America/Miquelon", 1531710378), 1531703178);
        TZ_CHECK(from_local("America/Miquelon", 1531703178), 1531710378);
        TZ_CHECK(from_utc("America/Miquelon", 1608288323), 1608277523);
        TZ_CHECK(from_local("America/Miquelon", 1608277523), 1608288323);
    } else {
        std::cerr << "NO TIMEZONE: America/Miquelon" << std::endl;
    }
    if (has_timezone("America/Moncton")) {
        TZ_CHECK(from_utc("America/Moncton", 1607749099), 1607734699);
        TZ_CHECK(from_local("America/Moncton", 1607734699), 1607749099);
        TZ_CHECK(from_utc("America/Moncton", 1467957474), 1467946674);
        TZ_CHECK(from_local("America/Moncton", 1467946674), 1467957474);
        TZ_CHECK(from_utc("America/Moncton", 1532475419), 1532464619);
        TZ_CHECK(from_local("America/Moncton", 1532464619), 1532475419);
        TZ_CHECK(from_utc("America/Moncton", 1485667391), 1485652991);
        TZ_CHECK(from_local("America/Moncton", 1485652991), 1485667391);
        TZ_CHECK(from_utc("America/Moncton", 1604175355), 1604164555);
        TZ_CHECK(from_local("America/Moncton", 1604164555), 1604175355);
    } else {
        std::cerr << "NO TIMEZONE: America/Moncton" << std::endl;
    }
    if (has_timezone("America/Monterrey")) {
        TZ_CHECK(from_utc("America/Monterrey", 1623559651), 1623541651);
        TZ_CHECK(from_local("America/Monterrey", 1623541651), 1623559651);
        TZ_CHECK(from_utc("America/Monterrey", 1591156608), 1591138608);
        TZ_CHECK(from_local("America/Monterrey", 1591138608), 1591156608);
        TZ_CHECK(from_utc("America/Monterrey", 1536405945), 1536387945);
        TZ_CHECK(from_local("America/Monterrey", 1536387945), 1536405945);
        TZ_CHECK(from_utc("America/Monterrey", 1412812362), 1412794362);
        TZ_CHECK(from_local("America/Monterrey", 1412794362), 1412812362);
        TZ_CHECK(from_utc("America/Monterrey", 1461689471), 1461671471);
        TZ_CHECK(from_local("America/Monterrey", 1461671471), 1461689471);
    } else {
        std::cerr << "NO TIMEZONE: America/Monterrey" << std::endl;
    }
    if (has_timezone("America/Montevideo")) {
        TZ_CHECK(from_utc("America/Montevideo", 1510923280), 1510912480);
        TZ_CHECK(from_local("America/Montevideo", 1510912480), 1510923280);
        TZ_CHECK(from_utc("America/Montevideo", 1628560799), 1628549999);
        TZ_CHECK(from_local("America/Montevideo", 1628549999), 1628560799);
        TZ_CHECK(from_utc("America/Montevideo", 1417830883), 1417823683);
        TZ_CHECK(from_local("America/Montevideo", 1417823683), 1417830883);
        TZ_CHECK(from_utc("America/Montevideo", 1612150797), 1612139997);
        TZ_CHECK(from_local("America/Montevideo", 1612139997), 1612150797);
        TZ_CHECK(from_utc("America/Montevideo", 1513110746), 1513099946);
        TZ_CHECK(from_local("America/Montevideo", 1513099946), 1513110746);
    } else {
        std::cerr << "NO TIMEZONE: America/Montevideo" << std::endl;
    }
    if (has_timezone("America/Montreal")) {
        TZ_CHECK(from_utc("America/Montreal", 1516493855), 1516475855);
        TZ_CHECK(from_local("America/Montreal", 1516475855), 1516493855);
        TZ_CHECK(from_utc("America/Montreal", 1587476582), 1587462182);
        TZ_CHECK(from_local("America/Montreal", 1587462182), 1587476582);
        TZ_CHECK(from_utc("America/Montreal", 1439452752), 1439438352);
        TZ_CHECK(from_local("America/Montreal", 1439438352), 1439452752);
        TZ_CHECK(from_utc("America/Montreal", 1455573681), 1455555681);
        TZ_CHECK(from_local("America/Montreal", 1455555681), 1455573681);
        TZ_CHECK(from_utc("America/Montreal", 1432200970), 1432186570);
        TZ_CHECK(from_local("America/Montreal", 1432186570), 1432200970);
    } else {
        std::cerr << "NO TIMEZONE: America/Montreal" << std::endl;
    }
    if (has_timezone("America/Montserrat")) {
        TZ_CHECK(from_utc("America/Montserrat", 1552981839), 1552967439);
        TZ_CHECK(from_local("America/Montserrat", 1552967439), 1552981839);
        TZ_CHECK(from_utc("America/Montserrat", 1581292591), 1581278191);
        TZ_CHECK(from_local("America/Montserrat", 1581278191), 1581292591);
        TZ_CHECK(from_utc("America/Montserrat", 1495682317), 1495667917);
        TZ_CHECK(from_local("America/Montserrat", 1495667917), 1495682317);
        TZ_CHECK(from_utc("America/Montserrat", 1492049273), 1492034873);
        TZ_CHECK(from_local("America/Montserrat", 1492034873), 1492049273);
        TZ_CHECK(from_utc("America/Montserrat", 1474029690), 1474015290);
        TZ_CHECK(from_local("America/Montserrat", 1474015290), 1474029690);
    } else {
        std::cerr << "NO TIMEZONE: America/Montserrat" << std::endl;
    }
    if (has_timezone("America/Nassau")) {
        TZ_CHECK(from_utc("America/Nassau", 1440755031), 1440740631);
        TZ_CHECK(from_local("America/Nassau", 1440740631), 1440755031);
        TZ_CHECK(from_utc("America/Nassau", 1480606651), 1480588651);
        TZ_CHECK(from_local("America/Nassau", 1480588651), 1480606651);
        TZ_CHECK(from_utc("America/Nassau", 1628320724), 1628306324);
        TZ_CHECK(from_local("America/Nassau", 1628306324), 1628320724);
        TZ_CHECK(from_utc("America/Nassau", 1616664689), 1616650289);
        TZ_CHECK(from_local("America/Nassau", 1616650289), 1616664689);
        TZ_CHECK(from_utc("America/Nassau", 1431407561), 1431393161);
        TZ_CHECK(from_local("America/Nassau", 1431393161), 1431407561);
    } else {
        std::cerr << "NO TIMEZONE: America/Nassau" << std::endl;
    }
    if (has_timezone("America/New_York")) {
        TZ_CHECK(from_utc("America/New_York", 1419209162), 1419191162);
        TZ_CHECK(from_local("America/New_York", 1419191162), 1419209162);
        TZ_CHECK(from_utc("America/New_York", 1543710402), 1543692402);
        TZ_CHECK(from_local("America/New_York", 1543692402), 1543710402);
        TZ_CHECK(from_utc("America/New_York", 1476973920), 1476959520);
        TZ_CHECK(from_local("America/New_York", 1476959520), 1476973920);
        TZ_CHECK(from_utc("America/New_York", 1513046441), 1513028441);
        TZ_CHECK(from_local("America/New_York", 1513028441), 1513046441);
        TZ_CHECK(from_utc("America/New_York", 1495072963), 1495058563);
        TZ_CHECK(from_local("America/New_York", 1495058563), 1495072963);
    } else {
        std::cerr << "NO TIMEZONE: America/New_York" << std::endl;
    }
    if (has_timezone("America/Nipigon")) {
        TZ_CHECK(from_utc("America/Nipigon", 1567356828), 1567342428);
        TZ_CHECK(from_local("America/Nipigon", 1567342428), 1567356828);
        TZ_CHECK(from_utc("America/Nipigon", 1553643688), 1553629288);
        TZ_CHECK(from_local("America/Nipigon", 1553629288), 1553643688);
        TZ_CHECK(from_utc("America/Nipigon", 1614187551), 1614169551);
        TZ_CHECK(from_local("America/Nipigon", 1614169551), 1614187551);
        TZ_CHECK(from_utc("America/Nipigon", 1439759126), 1439744726);
        TZ_CHECK(from_local("America/Nipigon", 1439744726), 1439759126);
        TZ_CHECK(from_utc("America/Nipigon", 1565908557), 1565894157);
        TZ_CHECK(from_local("America/Nipigon", 1565894157), 1565908557);
    } else {
        std::cerr << "NO TIMEZONE: America/Nipigon" << std::endl;
    }
    if (has_timezone("America/Nome")) {
        TZ_CHECK(from_utc("America/Nome", 1479415653), 1479383253);
        TZ_CHECK(from_local("America/Nome", 1479383253), 1479415653);
        TZ_CHECK(from_utc("America/Nome", 1490959119), 1490930319);
        TZ_CHECK(from_local("America/Nome", 1490930319), 1490959119);
        TZ_CHECK(from_utc("America/Nome", 1458152966), 1458124166);
        TZ_CHECK(from_local("America/Nome", 1458124166), 1458152966);
        TZ_CHECK(from_utc("America/Nome", 1483840082), 1483807682);
        TZ_CHECK(from_local("America/Nome", 1483807682), 1483840082);
        TZ_CHECK(from_utc("America/Nome", 1597088676), 1597059876);
        TZ_CHECK(from_local("America/Nome", 1597059876), 1597088676);
    } else {
        std::cerr << "NO TIMEZONE: America/Nome" << std::endl;
    }
    if (has_timezone("America/Noronha")) {
        TZ_CHECK(from_utc("America/Noronha", 1446826801), 1446819601);
        TZ_CHECK(from_local("America/Noronha", 1446819601), 1446826801);
        TZ_CHECK(from_utc("America/Noronha", 1578413101), 1578405901);
        TZ_CHECK(from_local("America/Noronha", 1578405901), 1578413101);
        TZ_CHECK(from_utc("America/Noronha", 1429014058), 1429006858);
        TZ_CHECK(from_local("America/Noronha", 1429006858), 1429014058);
        TZ_CHECK(from_utc("America/Noronha", 1593688003), 1593680803);
        TZ_CHECK(from_local("America/Noronha", 1593680803), 1593688003);
        TZ_CHECK(from_utc("America/Noronha", 1483146960), 1483139760);
        TZ_CHECK(from_local("America/Noronha", 1483139760), 1483146960);
    } else {
        std::cerr << "NO TIMEZONE: America/Noronha" << std::endl;
    }
    if (has_timezone("America/North_Dakota/Beulah")) {
        TZ_CHECK(from_utc("America/North_Dakota/Beulah", 1581448420), 1581426820);
        TZ_CHECK(from_local("America/North_Dakota/Beulah", 1581426820), 1581448420);
        TZ_CHECK(from_utc("America/North_Dakota/Beulah", 1565833831), 1565815831);
        TZ_CHECK(from_local("America/North_Dakota/Beulah", 1565815831), 1565833831);
        TZ_CHECK(from_utc("America/North_Dakota/Beulah", 1413442200), 1413424200);
        TZ_CHECK(from_local("America/North_Dakota/Beulah", 1413424200), 1413442200);
        TZ_CHECK(from_utc("America/North_Dakota/Beulah", 1457035466), 1457013866);
        TZ_CHECK(from_local("America/North_Dakota/Beulah", 1457013866), 1457035466);
        TZ_CHECK(from_utc("America/North_Dakota/Beulah", 1513698561), 1513676961);
        TZ_CHECK(from_local("America/North_Dakota/Beulah", 1513676961), 1513698561);
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/Beulah" << std::endl;
    }
    if (has_timezone("America/North_Dakota/Center")) {
        TZ_CHECK(from_utc("America/North_Dakota/Center", 1606105994), 1606084394);
        TZ_CHECK(from_local("America/North_Dakota/Center", 1606084394), 1606105994);
        TZ_CHECK(from_utc("America/North_Dakota/Center", 1594169771), 1594151771);
        TZ_CHECK(from_local("America/North_Dakota/Center", 1594151771), 1594169771);
        TZ_CHECK(from_utc("America/North_Dakota/Center", 1592596166), 1592578166);
        TZ_CHECK(from_local("America/North_Dakota/Center", 1592578166), 1592596166);
        TZ_CHECK(from_utc("America/North_Dakota/Center", 1499398511), 1499380511);
        TZ_CHECK(from_local("America/North_Dakota/Center", 1499380511), 1499398511);
        TZ_CHECK(from_utc("America/North_Dakota/Center", 1482636579), 1482614979);
        TZ_CHECK(from_local("America/North_Dakota/Center", 1482614979), 1482636579);
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/Center" << std::endl;
    }
    if (has_timezone("America/North_Dakota/New_Salem")) {
        TZ_CHECK(from_utc("America/North_Dakota/New_Salem", 1455738478), 1455716878);
        TZ_CHECK(from_local("America/North_Dakota/New_Salem", 1455716878), 1455738478);
        TZ_CHECK(from_utc("America/North_Dakota/New_Salem", 1450166192), 1450144592);
        TZ_CHECK(from_local("America/North_Dakota/New_Salem", 1450144592), 1450166192);
        TZ_CHECK(from_utc("America/North_Dakota/New_Salem", 1610798863), 1610777263);
        TZ_CHECK(from_local("America/North_Dakota/New_Salem", 1610777263), 1610798863);
        TZ_CHECK(from_utc("America/North_Dakota/New_Salem", 1540621179), 1540603179);
        TZ_CHECK(from_local("America/North_Dakota/New_Salem", 1540603179), 1540621179);
        TZ_CHECK(from_utc("America/North_Dakota/New_Salem", 1472419729), 1472401729);
        TZ_CHECK(from_local("America/North_Dakota/New_Salem", 1472401729), 1472419729);
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/New_Salem" << std::endl;
    }
    if (has_timezone("America/Ojinaga")) {
        TZ_CHECK(from_utc("America/Ojinaga", 1476869609), 1476848009);
        TZ_CHECK(from_local("America/Ojinaga", 1476848009), 1476869609);
        TZ_CHECK(from_utc("America/Ojinaga", 1612707077), 1612681877);
        TZ_CHECK(from_local("America/Ojinaga", 1612681877), 1612707077);
        TZ_CHECK(from_utc("America/Ojinaga", 1475660902), 1475639302);
        TZ_CHECK(from_local("America/Ojinaga", 1475639302), 1475660902);
        TZ_CHECK(from_utc("America/Ojinaga", 1428919478), 1428897878);
        TZ_CHECK(from_local("America/Ojinaga", 1428897878), 1428919478);
        TZ_CHECK(from_utc("America/Ojinaga", 1622120839), 1622099239);
        TZ_CHECK(from_local("America/Ojinaga", 1622099239), 1622120839);
    } else {
        std::cerr << "NO TIMEZONE: America/Ojinaga" << std::endl;
    }
    if (has_timezone("America/Panama")) {
        TZ_CHECK(from_utc("America/Panama", 1588702058), 1588684058);
        TZ_CHECK(from_local("America/Panama", 1588684058), 1588702058);
        TZ_CHECK(from_utc("America/Panama", 1535593267), 1535575267);
        TZ_CHECK(from_local("America/Panama", 1535575267), 1535593267);
        TZ_CHECK(from_utc("America/Panama", 1418071093), 1418053093);
        TZ_CHECK(from_local("America/Panama", 1418053093), 1418071093);
        TZ_CHECK(from_utc("America/Panama", 1470085300), 1470067300);
        TZ_CHECK(from_local("America/Panama", 1470067300), 1470085300);
        TZ_CHECK(from_utc("America/Panama", 1601180245), 1601162245);
        TZ_CHECK(from_local("America/Panama", 1601162245), 1601180245);
    } else {
        std::cerr << "NO TIMEZONE: America/Panama" << std::endl;
    }
    if (has_timezone("America/Pangnirtung")) {
        TZ_CHECK(from_utc("America/Pangnirtung", 1539057332), 1539042932);
        TZ_CHECK(from_local("America/Pangnirtung", 1539042932), 1539057332);
        TZ_CHECK(from_utc("America/Pangnirtung", 1614023243), 1614005243);
        TZ_CHECK(from_local("America/Pangnirtung", 1614005243), 1614023243);
        TZ_CHECK(from_utc("America/Pangnirtung", 1502938069), 1502923669);
        TZ_CHECK(from_local("America/Pangnirtung", 1502923669), 1502938069);
        TZ_CHECK(from_utc("America/Pangnirtung", 1530727393), 1530712993);
        TZ_CHECK(from_local("America/Pangnirtung", 1530712993), 1530727393);
        TZ_CHECK(from_utc("America/Pangnirtung", 1582870007), 1582852007);
        TZ_CHECK(from_local("America/Pangnirtung", 1582852007), 1582870007);
    } else {
        std::cerr << "NO TIMEZONE: America/Pangnirtung" << std::endl;
    }
    if (has_timezone("America/Paramaribo")) {
        TZ_CHECK(from_utc("America/Paramaribo", 1523462520), 1523451720);
        TZ_CHECK(from_local("America/Paramaribo", 1523451720), 1523462520);
        TZ_CHECK(from_utc("America/Paramaribo", 1597616254), 1597605454);
        TZ_CHECK(from_local("America/Paramaribo", 1597605454), 1597616254);
        TZ_CHECK(from_utc("America/Paramaribo", 1524830963), 1524820163);
        TZ_CHECK(from_local("America/Paramaribo", 1524820163), 1524830963);
        TZ_CHECK(from_utc("America/Paramaribo", 1465979241), 1465968441);
        TZ_CHECK(from_local("America/Paramaribo", 1465968441), 1465979241);
        TZ_CHECK(from_utc("America/Paramaribo", 1442088665), 1442077865);
        TZ_CHECK(from_local("America/Paramaribo", 1442077865), 1442088665);
    } else {
        std::cerr << "NO TIMEZONE: America/Paramaribo" << std::endl;
    }
    if (has_timezone("America/Phoenix")) {
        TZ_CHECK(from_utc("America/Phoenix", 1544628474), 1544603274);
        TZ_CHECK(from_local("America/Phoenix", 1544603274), 1544628474);
        TZ_CHECK(from_utc("America/Phoenix", 1602207649), 1602182449);
        TZ_CHECK(from_local("America/Phoenix", 1602182449), 1602207649);
        TZ_CHECK(from_utc("America/Phoenix", 1449726552), 1449701352);
        TZ_CHECK(from_local("America/Phoenix", 1449701352), 1449726552);
        TZ_CHECK(from_utc("America/Phoenix", 1511926666), 1511901466);
        TZ_CHECK(from_local("America/Phoenix", 1511901466), 1511926666);
        TZ_CHECK(from_utc("America/Phoenix", 1629747799), 1629722599);
        TZ_CHECK(from_local("America/Phoenix", 1629722599), 1629747799);
    } else {
        std::cerr << "NO TIMEZONE: America/Phoenix" << std::endl;
    }
    if (has_timezone("America/Port-au-Prince")) {
        TZ_CHECK(from_utc("America/Port-au-Prince", 1508975516), 1508961116);
        TZ_CHECK(from_local("America/Port-au-Prince", 1508961116), 1508975516);
        TZ_CHECK(from_utc("America/Port-au-Prince", 1553948448), 1553934048);
        TZ_CHECK(from_local("America/Port-au-Prince", 1553934048), 1553948448);
        TZ_CHECK(from_utc("America/Port-au-Prince", 1444206341), 1444191941);
        TZ_CHECK(from_local("America/Port-au-Prince", 1444191941), 1444206341);
        TZ_CHECK(from_utc("America/Port-au-Prince", 1605169366), 1605151366);
        TZ_CHECK(from_local("America/Port-au-Prince", 1605151366), 1605169366);
        TZ_CHECK(from_utc("America/Port-au-Prince", 1447842470), 1447824470);
        TZ_CHECK(from_local("America/Port-au-Prince", 1447824470), 1447842470);
    } else {
        std::cerr << "NO TIMEZONE: America/Port-au-Prince" << std::endl;
    }
    if (has_timezone("America/Port_of_Spain")) {
        TZ_CHECK(from_utc("America/Port_of_Spain", 1431413961), 1431399561);
        TZ_CHECK(from_local("America/Port_of_Spain", 1431399561), 1431413961);
        TZ_CHECK(from_utc("America/Port_of_Spain", 1528442439), 1528428039);
        TZ_CHECK(from_local("America/Port_of_Spain", 1528428039), 1528442439);
        TZ_CHECK(from_utc("America/Port_of_Spain", 1558311108), 1558296708);
        TZ_CHECK(from_local("America/Port_of_Spain", 1558296708), 1558311108);
        TZ_CHECK(from_utc("America/Port_of_Spain", 1495834108), 1495819708);
        TZ_CHECK(from_local("America/Port_of_Spain", 1495819708), 1495834108);
        TZ_CHECK(from_utc("America/Port_of_Spain", 1603939783), 1603925383);
        TZ_CHECK(from_local("America/Port_of_Spain", 1603925383), 1603939783);
    } else {
        std::cerr << "NO TIMEZONE: America/Port_of_Spain" << std::endl;
    }
    if (has_timezone("America/Porto_Acre")) {
        TZ_CHECK(from_utc("America/Porto_Acre", 1482599408), 1482581408);
        TZ_CHECK(from_local("America/Porto_Acre", 1482581408), 1482599408);
        TZ_CHECK(from_utc("America/Porto_Acre", 1539068647), 1539050647);
        TZ_CHECK(from_local("America/Porto_Acre", 1539050647), 1539068647);
        TZ_CHECK(from_utc("America/Porto_Acre", 1439038821), 1439020821);
        TZ_CHECK(from_local("America/Porto_Acre", 1439020821), 1439038821);
        TZ_CHECK(from_utc("America/Porto_Acre", 1454448424), 1454430424);
        TZ_CHECK(from_local("America/Porto_Acre", 1454430424), 1454448424);
        TZ_CHECK(from_utc("America/Porto_Acre", 1478129347), 1478111347);
        TZ_CHECK(from_local("America/Porto_Acre", 1478111347), 1478129347);
    } else {
        std::cerr << "NO TIMEZONE: America/Porto_Acre" << std::endl;
    }
    if (has_timezone("America/Porto_Velho")) {
        TZ_CHECK(from_utc("America/Porto_Velho", 1604126142), 1604111742);
        TZ_CHECK(from_local("America/Porto_Velho", 1604111742), 1604126142);
        TZ_CHECK(from_utc("America/Porto_Velho", 1446790096), 1446775696);
        TZ_CHECK(from_local("America/Porto_Velho", 1446775696), 1446790096);
        TZ_CHECK(from_utc("America/Porto_Velho", 1627827909), 1627813509);
        TZ_CHECK(from_local("America/Porto_Velho", 1627813509), 1627827909);
        TZ_CHECK(from_utc("America/Porto_Velho", 1420898362), 1420883962);
        TZ_CHECK(from_local("America/Porto_Velho", 1420883962), 1420898362);
        TZ_CHECK(from_utc("America/Porto_Velho", 1518460976), 1518446576);
        TZ_CHECK(from_local("America/Porto_Velho", 1518446576), 1518460976);
    } else {
        std::cerr << "NO TIMEZONE: America/Porto_Velho" << std::endl;
    }
    if (has_timezone("America/Puerto_Rico")) {
        TZ_CHECK(from_utc("America/Puerto_Rico", 1528434073), 1528419673);
        TZ_CHECK(from_local("America/Puerto_Rico", 1528419673), 1528434073);
        TZ_CHECK(from_utc("America/Puerto_Rico", 1470322202), 1470307802);
        TZ_CHECK(from_local("America/Puerto_Rico", 1470307802), 1470322202);
        TZ_CHECK(from_utc("America/Puerto_Rico", 1481654600), 1481640200);
        TZ_CHECK(from_local("America/Puerto_Rico", 1481640200), 1481654600);
        TZ_CHECK(from_utc("America/Puerto_Rico", 1421599154), 1421584754);
        TZ_CHECK(from_local("America/Puerto_Rico", 1421584754), 1421599154);
        TZ_CHECK(from_utc("America/Puerto_Rico", 1525879687), 1525865287);
        TZ_CHECK(from_local("America/Puerto_Rico", 1525865287), 1525879687);
    } else {
        std::cerr << "NO TIMEZONE: America/Puerto_Rico" << std::endl;
    }
    if (has_timezone("America/Punta_Arenas")) {
        TZ_CHECK(from_utc("America/Punta_Arenas", 1589144161), 1589133361);
        TZ_CHECK(from_local("America/Punta_Arenas", 1589133361), 1589144161);
        TZ_CHECK(from_utc("America/Punta_Arenas", 1484839868), 1484829068);
        TZ_CHECK(from_local("America/Punta_Arenas", 1484829068), 1484839868);
        TZ_CHECK(from_utc("America/Punta_Arenas", 1525617240), 1525606440);
        TZ_CHECK(from_local("America/Punta_Arenas", 1525606440), 1525617240);
        TZ_CHECK(from_utc("America/Punta_Arenas", 1422732909), 1422722109);
        TZ_CHECK(from_local("America/Punta_Arenas", 1422722109), 1422732909);
        TZ_CHECK(from_utc("America/Punta_Arenas", 1431474190), 1431463390);
        TZ_CHECK(from_local("America/Punta_Arenas", 1431463390), 1431474190);
    } else {
        std::cerr << "NO TIMEZONE: America/Punta_Arenas" << std::endl;
    }
    if (has_timezone("America/Rainy_River")) {
        TZ_CHECK(from_utc("America/Rainy_River", 1486809525), 1486787925);
        TZ_CHECK(from_local("America/Rainy_River", 1486787925), 1486809525);
        TZ_CHECK(from_utc("America/Rainy_River", 1609687083), 1609665483);
        TZ_CHECK(from_local("America/Rainy_River", 1609665483), 1609687083);
        TZ_CHECK(from_utc("America/Rainy_River", 1498832764), 1498814764);
        TZ_CHECK(from_local("America/Rainy_River", 1498814764), 1498832764);
        TZ_CHECK(from_utc("America/Rainy_River", 1594677927), 1594659927);
        TZ_CHECK(from_local("America/Rainy_River", 1594659927), 1594677927);
        TZ_CHECK(from_utc("America/Rainy_River", 1450917884), 1450896284);
        TZ_CHECK(from_local("America/Rainy_River", 1450896284), 1450917884);
    } else {
        std::cerr << "NO TIMEZONE: America/Rainy_River" << std::endl;
    }
    if (has_timezone("America/Rankin_Inlet")) {
        TZ_CHECK(from_utc("America/Rankin_Inlet", 1623954042), 1623936042);
        TZ_CHECK(from_local("America/Rankin_Inlet", 1623936042), 1623954042);
        TZ_CHECK(from_utc("America/Rankin_Inlet", 1480475586), 1480453986);
        TZ_CHECK(from_local("America/Rankin_Inlet", 1480453986), 1480475586);
        TZ_CHECK(from_utc("America/Rankin_Inlet", 1518654724), 1518633124);
        TZ_CHECK(from_local("America/Rankin_Inlet", 1518633124), 1518654724);
        TZ_CHECK(from_utc("America/Rankin_Inlet", 1462948545), 1462930545);
        TZ_CHECK(from_local("America/Rankin_Inlet", 1462930545), 1462948545);
        TZ_CHECK(from_utc("America/Rankin_Inlet", 1598577866), 1598559866);
        TZ_CHECK(from_local("America/Rankin_Inlet", 1598559866), 1598577866);
    } else {
        std::cerr << "NO TIMEZONE: America/Rankin_Inlet" << std::endl;
    }
    if (has_timezone("America/Recife")) {
        TZ_CHECK(from_utc("America/Recife", 1604227044), 1604216244);
        TZ_CHECK(from_local("America/Recife", 1604216244), 1604227044);
        TZ_CHECK(from_utc("America/Recife", 1439163132), 1439152332);
        TZ_CHECK(from_local("America/Recife", 1439152332), 1439163132);
        TZ_CHECK(from_utc("America/Recife", 1609203798), 1609192998);
        TZ_CHECK(from_local("America/Recife", 1609192998), 1609203798);
        TZ_CHECK(from_utc("America/Recife", 1590903166), 1590892366);
        TZ_CHECK(from_local("America/Recife", 1590892366), 1590903166);
        TZ_CHECK(from_utc("America/Recife", 1542368611), 1542357811);
        TZ_CHECK(from_local("America/Recife", 1542357811), 1542368611);
    } else {
        std::cerr << "NO TIMEZONE: America/Recife" << std::endl;
    }
    if (has_timezone("America/Regina")) {
        TZ_CHECK(from_utc("America/Regina", 1569792679), 1569771079);
        TZ_CHECK(from_local("America/Regina", 1569771079), 1569792679);
        TZ_CHECK(from_utc("America/Regina", 1516126573), 1516104973);
        TZ_CHECK(from_local("America/Regina", 1516104973), 1516126573);
        TZ_CHECK(from_utc("America/Regina", 1443741901), 1443720301);
        TZ_CHECK(from_local("America/Regina", 1443720301), 1443741901);
        TZ_CHECK(from_utc("America/Regina", 1509796236), 1509774636);
        TZ_CHECK(from_local("America/Regina", 1509774636), 1509796236);
        TZ_CHECK(from_utc("America/Regina", 1490677492), 1490655892);
        TZ_CHECK(from_local("America/Regina", 1490655892), 1490677492);
    } else {
        std::cerr << "NO TIMEZONE: America/Regina" << std::endl;
    }
    if (has_timezone("America/Resolute")) {
        TZ_CHECK(from_utc("America/Resolute", 1466125847), 1466107847);
        TZ_CHECK(from_local("America/Resolute", 1466107847), 1466125847);
        TZ_CHECK(from_utc("America/Resolute", 1607793681), 1607772081);
        TZ_CHECK(from_local("America/Resolute", 1607772081), 1607793681);
        TZ_CHECK(from_utc("America/Resolute", 1510854559), 1510832959);
        TZ_CHECK(from_local("America/Resolute", 1510832959), 1510854559);
        TZ_CHECK(from_utc("America/Resolute", 1572293283), 1572275283);
        TZ_CHECK(from_local("America/Resolute", 1572275283), 1572293283);
        TZ_CHECK(from_utc("America/Resolute", 1432581294), 1432563294);
        TZ_CHECK(from_local("America/Resolute", 1432563294), 1432581294);
    } else {
        std::cerr << "NO TIMEZONE: America/Resolute" << std::endl;
    }
    if (has_timezone("America/Rio_Branco")) {
        TZ_CHECK(from_utc("America/Rio_Branco", 1484803191), 1484785191);
        TZ_CHECK(from_local("America/Rio_Branco", 1484785191), 1484803191);
        TZ_CHECK(from_utc("America/Rio_Branco", 1578536277), 1578518277);
        TZ_CHECK(from_local("America/Rio_Branco", 1578518277), 1578536277);
        TZ_CHECK(from_utc("America/Rio_Branco", 1430426035), 1430408035);
        TZ_CHECK(from_local("America/Rio_Branco", 1430408035), 1430426035);
        TZ_CHECK(from_utc("America/Rio_Branco", 1545415275), 1545397275);
        TZ_CHECK(from_local("America/Rio_Branco", 1545397275), 1545415275);
        TZ_CHECK(from_utc("America/Rio_Branco", 1453204470), 1453186470);
        TZ_CHECK(from_local("America/Rio_Branco", 1453186470), 1453204470);
    } else {
        std::cerr << "NO TIMEZONE: America/Rio_Branco" << std::endl;
    }
    if (has_timezone("America/Rosario")) {
        TZ_CHECK(from_utc("America/Rosario", 1608792513), 1608781713);
        TZ_CHECK(from_local("America/Rosario", 1608781713), 1608792513);
        TZ_CHECK(from_utc("America/Rosario", 1489517852), 1489507052);
        TZ_CHECK(from_local("America/Rosario", 1489507052), 1489517852);
        TZ_CHECK(from_utc("America/Rosario", 1564561249), 1564550449);
        TZ_CHECK(from_local("America/Rosario", 1564550449), 1564561249);
        TZ_CHECK(from_utc("America/Rosario", 1467450052), 1467439252);
        TZ_CHECK(from_local("America/Rosario", 1467439252), 1467450052);
        TZ_CHECK(from_utc("America/Rosario", 1413394434), 1413383634);
        TZ_CHECK(from_local("America/Rosario", 1413383634), 1413394434);
    } else {
        std::cerr << "NO TIMEZONE: America/Rosario" << std::endl;
    }
    if (has_timezone("America/Santa_Isabel")) {
        TZ_CHECK(from_utc("America/Santa_Isabel", 1432889618), 1432864418);
        TZ_CHECK(from_local("America/Santa_Isabel", 1432864418), 1432889618);
        TZ_CHECK(from_utc("America/Santa_Isabel", 1464297685), 1464272485);
        TZ_CHECK(from_local("America/Santa_Isabel", 1464272485), 1464297685);
        TZ_CHECK(from_utc("America/Santa_Isabel", 1499049075), 1499023875);
        TZ_CHECK(from_local("America/Santa_Isabel", 1499023875), 1499049075);
        TZ_CHECK(from_utc("America/Santa_Isabel", 1561058225), 1561033025);
        TZ_CHECK(from_local("America/Santa_Isabel", 1561033025), 1561058225);
        TZ_CHECK(from_utc("America/Santa_Isabel", 1587218545), 1587193345);
        TZ_CHECK(from_local("America/Santa_Isabel", 1587193345), 1587218545);
    } else {
        std::cerr << "NO TIMEZONE: America/Santa_Isabel" << std::endl;
    }
    if (has_timezone("America/Santarem")) {
        TZ_CHECK(from_utc("America/Santarem", 1498559298), 1498548498);
        TZ_CHECK(from_local("America/Santarem", 1498548498), 1498559298);
        TZ_CHECK(from_utc("America/Santarem", 1594245544), 1594234744);
        TZ_CHECK(from_local("America/Santarem", 1594234744), 1594245544);
        TZ_CHECK(from_utc("America/Santarem", 1615971938), 1615961138);
        TZ_CHECK(from_local("America/Santarem", 1615961138), 1615971938);
        TZ_CHECK(from_utc("America/Santarem", 1589705058), 1589694258);
        TZ_CHECK(from_local("America/Santarem", 1589694258), 1589705058);
        TZ_CHECK(from_utc("America/Santarem", 1507387253), 1507376453);
        TZ_CHECK(from_local("America/Santarem", 1507376453), 1507387253);
    } else {
        std::cerr << "NO TIMEZONE: America/Santarem" << std::endl;
    }
    if (has_timezone("America/Santiago")) {
        TZ_CHECK(from_utc("America/Santiago", 1561506835), 1561492435);
        TZ_CHECK(from_local("America/Santiago", 1561492435), 1561506835);
        TZ_CHECK(from_utc("America/Santiago", 1527886951), 1527872551);
        TZ_CHECK(from_local("America/Santiago", 1527872551), 1527886951);
        TZ_CHECK(from_utc("America/Santiago", 1414552401), 1414541601);
        TZ_CHECK(from_local("America/Santiago", 1414541601), 1414552401);
        TZ_CHECK(from_utc("America/Santiago", 1463649157), 1463634757);
        TZ_CHECK(from_local("America/Santiago", 1463634757), 1463649157);
        TZ_CHECK(from_utc("America/Santiago", 1579243914), 1579233114);
        TZ_CHECK(from_local("America/Santiago", 1579233114), 1579243914);
    } else {
        std::cerr << "NO TIMEZONE: America/Santiago" << std::endl;
    }
    if (has_timezone("America/Santo_Domingo")) {
        TZ_CHECK(from_utc("America/Santo_Domingo", 1464851718), 1464837318);
        TZ_CHECK(from_local("America/Santo_Domingo", 1464837318), 1464851718);
        TZ_CHECK(from_utc("America/Santo_Domingo", 1429717061), 1429702661);
        TZ_CHECK(from_local("America/Santo_Domingo", 1429702661), 1429717061);
        TZ_CHECK(from_utc("America/Santo_Domingo", 1587667751), 1587653351);
        TZ_CHECK(from_local("America/Santo_Domingo", 1587653351), 1587667751);
        TZ_CHECK(from_utc("America/Santo_Domingo", 1549070019), 1549055619);
        TZ_CHECK(from_local("America/Santo_Domingo", 1549055619), 1549070019);
        TZ_CHECK(from_utc("America/Santo_Domingo", 1450295023), 1450280623);
        TZ_CHECK(from_local("America/Santo_Domingo", 1450280623), 1450295023);
    } else {
        std::cerr << "NO TIMEZONE: America/Santo_Domingo" << std::endl;
    }
    if (has_timezone("America/Sao_Paulo")) {
        TZ_CHECK(from_utc("America/Sao_Paulo", 1533446343), 1533435543);
        TZ_CHECK(from_local("America/Sao_Paulo", 1533435543), 1533446343);
        TZ_CHECK(from_utc("America/Sao_Paulo", 1545906736), 1545899536);
        TZ_CHECK(from_local("America/Sao_Paulo", 1545899536), 1545906736);
        TZ_CHECK(from_utc("America/Sao_Paulo", 1443433202), 1443422402);
        TZ_CHECK(from_local("America/Sao_Paulo", 1443422402), 1443433202);
        TZ_CHECK(from_utc("America/Sao_Paulo", 1583655632), 1583644832);
        TZ_CHECK(from_local("America/Sao_Paulo", 1583644832), 1583655632);
        TZ_CHECK(from_utc("America/Sao_Paulo", 1461909312), 1461898512);
        TZ_CHECK(from_local("America/Sao_Paulo", 1461898512), 1461909312);
    } else {
        std::cerr << "NO TIMEZONE: America/Sao_Paulo" << std::endl;
    }
    if (has_timezone("America/Scoresbysund")) {
        TZ_CHECK(from_utc("America/Scoresbysund", 1535135527), 1535135527);
        TZ_CHECK(from_local("America/Scoresbysund", 1535135527), 1535135527);
        TZ_CHECK(from_utc("America/Scoresbysund", 1589097807), 1589097807);
        TZ_CHECK(from_local("America/Scoresbysund", 1589097807), 1589097807);
        TZ_CHECK(from_utc("America/Scoresbysund", 1527642069), 1527642069);
        TZ_CHECK(from_local("America/Scoresbysund", 1527642069), 1527642069);
        TZ_CHECK(from_utc("America/Scoresbysund", 1626642852), 1626642852);
        TZ_CHECK(from_local("America/Scoresbysund", 1626642852), 1626642852);
        TZ_CHECK(from_utc("America/Scoresbysund", 1583097309), 1583093709);
        TZ_CHECK(from_local("America/Scoresbysund", 1583093709), 1583097309);
    } else {
        std::cerr << "NO TIMEZONE: America/Scoresbysund" << std::endl;
    }
    if (has_timezone("America/Shiprock")) {
        TZ_CHECK(from_utc("America/Shiprock", 1498882354), 1498860754);
        TZ_CHECK(from_local("America/Shiprock", 1498860754), 1498882354);
        TZ_CHECK(from_utc("America/Shiprock", 1433577455), 1433555855);
        TZ_CHECK(from_local("America/Shiprock", 1433555855), 1433577455);
        TZ_CHECK(from_utc("America/Shiprock", 1491388158), 1491366558);
        TZ_CHECK(from_local("America/Shiprock", 1491366558), 1491388158);
        TZ_CHECK(from_utc("America/Shiprock", 1611892962), 1611867762);
        TZ_CHECK(from_local("America/Shiprock", 1611867762), 1611892962);
        TZ_CHECK(from_utc("America/Shiprock", 1510314062), 1510288862);
        TZ_CHECK(from_local("America/Shiprock", 1510288862), 1510314062);
    } else {
        std::cerr << "NO TIMEZONE: America/Shiprock" << std::endl;
    }
    if (has_timezone("America/Sitka")) {
        TZ_CHECK(from_utc("America/Sitka", 1446242696), 1446213896);
        TZ_CHECK(from_local("America/Sitka", 1446213896), 1446242696);
        TZ_CHECK(from_utc("America/Sitka", 1499621374), 1499592574);
        TZ_CHECK(from_local("America/Sitka", 1499592574), 1499621374);
        TZ_CHECK(from_utc("America/Sitka", 1492866074), 1492837274);
        TZ_CHECK(from_local("America/Sitka", 1492837274), 1492866074);
        TZ_CHECK(from_utc("America/Sitka", 1540015948), 1539987148);
        TZ_CHECK(from_local("America/Sitka", 1539987148), 1540015948);
        TZ_CHECK(from_utc("America/Sitka", 1555632985), 1555604185);
        TZ_CHECK(from_local("America/Sitka", 1555604185), 1555632985);
    } else {
        std::cerr << "NO TIMEZONE: America/Sitka" << std::endl;
    }
    if (has_timezone("America/St_Barthelemy")) {
        TZ_CHECK(from_utc("America/St_Barthelemy", 1618191641), 1618177241);
        TZ_CHECK(from_local("America/St_Barthelemy", 1618177241), 1618191641);
        TZ_CHECK(from_utc("America/St_Barthelemy", 1569593560), 1569579160);
        TZ_CHECK(from_local("America/St_Barthelemy", 1569579160), 1569593560);
        TZ_CHECK(from_utc("America/St_Barthelemy", 1417553333), 1417538933);
        TZ_CHECK(from_local("America/St_Barthelemy", 1417538933), 1417553333);
        TZ_CHECK(from_utc("America/St_Barthelemy", 1433289924), 1433275524);
        TZ_CHECK(from_local("America/St_Barthelemy", 1433275524), 1433289924);
        TZ_CHECK(from_utc("America/St_Barthelemy", 1546856435), 1546842035);
        TZ_CHECK(from_local("America/St_Barthelemy", 1546842035), 1546856435);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Barthelemy" << std::endl;
    }
    if (has_timezone("America/St_Johns")) {
        TZ_CHECK(from_utc("America/St_Johns", 1514164133), 1514151533);
        TZ_CHECK(from_local("America/St_Johns", 1514151533), 1514164133);
        TZ_CHECK(from_utc("America/St_Johns", 1494796761), 1494787761);
        TZ_CHECK(from_local("America/St_Johns", 1494787761), 1494796761);
        TZ_CHECK(from_utc("America/St_Johns", 1599279218), 1599270218);
        TZ_CHECK(from_local("America/St_Johns", 1599270218), 1599279218);
        TZ_CHECK(from_utc("America/St_Johns", 1618402646), 1618393646);
        TZ_CHECK(from_local("America/St_Johns", 1618393646), 1618402646);
        TZ_CHECK(from_utc("America/St_Johns", 1435235983), 1435226983);
        TZ_CHECK(from_local("America/St_Johns", 1435226983), 1435235983);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Johns" << std::endl;
    }
    if (has_timezone("America/St_Kitts")) {
        TZ_CHECK(from_utc("America/St_Kitts", 1513291157), 1513276757);
        TZ_CHECK(from_local("America/St_Kitts", 1513276757), 1513291157);
        TZ_CHECK(from_utc("America/St_Kitts", 1445027479), 1445013079);
        TZ_CHECK(from_local("America/St_Kitts", 1445013079), 1445027479);
        TZ_CHECK(from_utc("America/St_Kitts", 1502337623), 1502323223);
        TZ_CHECK(from_local("America/St_Kitts", 1502323223), 1502337623);
        TZ_CHECK(from_utc("America/St_Kitts", 1623726107), 1623711707);
        TZ_CHECK(from_local("America/St_Kitts", 1623711707), 1623726107);
        TZ_CHECK(from_utc("America/St_Kitts", 1446352790), 1446338390);
        TZ_CHECK(from_local("America/St_Kitts", 1446338390), 1446352790);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Kitts" << std::endl;
    }
    if (has_timezone("America/St_Lucia")) {
        TZ_CHECK(from_utc("America/St_Lucia", 1546972868), 1546958468);
        TZ_CHECK(from_local("America/St_Lucia", 1546958468), 1546972868);
        TZ_CHECK(from_utc("America/St_Lucia", 1595871310), 1595856910);
        TZ_CHECK(from_local("America/St_Lucia", 1595856910), 1595871310);
        TZ_CHECK(from_utc("America/St_Lucia", 1456607294), 1456592894);
        TZ_CHECK(from_local("America/St_Lucia", 1456592894), 1456607294);
        TZ_CHECK(from_utc("America/St_Lucia", 1555446486), 1555432086);
        TZ_CHECK(from_local("America/St_Lucia", 1555432086), 1555446486);
        TZ_CHECK(from_utc("America/St_Lucia", 1604268211), 1604253811);
        TZ_CHECK(from_local("America/St_Lucia", 1604253811), 1604268211);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Lucia" << std::endl;
    }
    if (has_timezone("America/St_Thomas")) {
        TZ_CHECK(from_utc("America/St_Thomas", 1604022399), 1604007999);
        TZ_CHECK(from_local("America/St_Thomas", 1604007999), 1604022399);
        TZ_CHECK(from_utc("America/St_Thomas", 1553251152), 1553236752);
        TZ_CHECK(from_local("America/St_Thomas", 1553236752), 1553251152);
        TZ_CHECK(from_utc("America/St_Thomas", 1616983477), 1616969077);
        TZ_CHECK(from_local("America/St_Thomas", 1616969077), 1616983477);
        TZ_CHECK(from_utc("America/St_Thomas", 1422122191), 1422107791);
        TZ_CHECK(from_local("America/St_Thomas", 1422107791), 1422122191);
        TZ_CHECK(from_utc("America/St_Thomas", 1589518024), 1589503624);
        TZ_CHECK(from_local("America/St_Thomas", 1589503624), 1589518024);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Thomas" << std::endl;
    }
    if (has_timezone("America/St_Vincent")) {
        TZ_CHECK(from_utc("America/St_Vincent", 1567055047), 1567040647);
        TZ_CHECK(from_local("America/St_Vincent", 1567040647), 1567055047);
        TZ_CHECK(from_utc("America/St_Vincent", 1485383985), 1485369585);
        TZ_CHECK(from_local("America/St_Vincent", 1485369585), 1485383985);
        TZ_CHECK(from_utc("America/St_Vincent", 1483272301), 1483257901);
        TZ_CHECK(from_local("America/St_Vincent", 1483257901), 1483272301);
        TZ_CHECK(from_utc("America/St_Vincent", 1570434618), 1570420218);
        TZ_CHECK(from_local("America/St_Vincent", 1570420218), 1570434618);
        TZ_CHECK(from_utc("America/St_Vincent", 1545837280), 1545822880);
        TZ_CHECK(from_local("America/St_Vincent", 1545822880), 1545837280);
    } else {
        std::cerr << "NO TIMEZONE: America/St_Vincent" << std::endl;
    }
    if (has_timezone("America/Swift_Current")) {
        TZ_CHECK(from_utc("America/Swift_Current", 1495707087), 1495685487);
        TZ_CHECK(from_local("America/Swift_Current", 1495685487), 1495707087);
        TZ_CHECK(from_utc("America/Swift_Current", 1573703768), 1573682168);
        TZ_CHECK(from_local("America/Swift_Current", 1573682168), 1573703768);
        TZ_CHECK(from_utc("America/Swift_Current", 1512883075), 1512861475);
        TZ_CHECK(from_local("America/Swift_Current", 1512861475), 1512883075);
        TZ_CHECK(from_utc("America/Swift_Current", 1433455676), 1433434076);
        TZ_CHECK(from_local("America/Swift_Current", 1433434076), 1433455676);
        TZ_CHECK(from_utc("America/Swift_Current", 1486532603), 1486511003);
        TZ_CHECK(from_local("America/Swift_Current", 1486511003), 1486532603);
    } else {
        std::cerr << "NO TIMEZONE: America/Swift_Current" << std::endl;
    }
    if (has_timezone("America/Tegucigalpa")) {
        TZ_CHECK(from_utc("America/Tegucigalpa", 1550491164), 1550469564);
        TZ_CHECK(from_local("America/Tegucigalpa", 1550469564), 1550491164);
        TZ_CHECK(from_utc("America/Tegucigalpa", 1490928457), 1490906857);
        TZ_CHECK(from_local("America/Tegucigalpa", 1490906857), 1490928457);
        TZ_CHECK(from_utc("America/Tegucigalpa", 1518933562), 1518911962);
        TZ_CHECK(from_local("America/Tegucigalpa", 1518911962), 1518933562);
        TZ_CHECK(from_utc("America/Tegucigalpa", 1481922490), 1481900890);
        TZ_CHECK(from_local("America/Tegucigalpa", 1481900890), 1481922490);
        TZ_CHECK(from_utc("America/Tegucigalpa", 1540366295), 1540344695);
        TZ_CHECK(from_local("America/Tegucigalpa", 1540344695), 1540366295);
    } else {
        std::cerr << "NO TIMEZONE: America/Tegucigalpa" << std::endl;
    }
    if (has_timezone("America/Thule")) {
        TZ_CHECK(from_utc("America/Thule", 1439152129), 1439141329);
        TZ_CHECK(from_local("America/Thule", 1439141329), 1439152129);
        TZ_CHECK(from_utc("America/Thule", 1493900590), 1493889790);
        TZ_CHECK(from_local("America/Thule", 1493889790), 1493900590);
        TZ_CHECK(from_utc("America/Thule", 1616343016), 1616332216);
        TZ_CHECK(from_local("America/Thule", 1616332216), 1616343016);
        TZ_CHECK(from_utc("America/Thule", 1481583600), 1481569200);
        TZ_CHECK(from_local("America/Thule", 1481569200), 1481583600);
        TZ_CHECK(from_utc("America/Thule", 1497745778), 1497734978);
        TZ_CHECK(from_local("America/Thule", 1497734978), 1497745778);
    } else {
        std::cerr << "NO TIMEZONE: America/Thule" << std::endl;
    }
    if (has_timezone("America/Thunder_Bay")) {
        TZ_CHECK(from_utc("America/Thunder_Bay", 1626422790), 1626408390);
        TZ_CHECK(from_local("America/Thunder_Bay", 1626408390), 1626422790);
        TZ_CHECK(from_utc("America/Thunder_Bay", 1484004801), 1483986801);
        TZ_CHECK(from_local("America/Thunder_Bay", 1483986801), 1484004801);
        TZ_CHECK(from_utc("America/Thunder_Bay", 1498487410), 1498473010);
        TZ_CHECK(from_local("America/Thunder_Bay", 1498473010), 1498487410);
        TZ_CHECK(from_utc("America/Thunder_Bay", 1610805207), 1610787207);
        TZ_CHECK(from_local("America/Thunder_Bay", 1610787207), 1610805207);
        TZ_CHECK(from_utc("America/Thunder_Bay", 1591011559), 1590997159);
        TZ_CHECK(from_local("America/Thunder_Bay", 1590997159), 1591011559);
    } else {
        std::cerr << "NO TIMEZONE: America/Thunder_Bay" << std::endl;
    }
    if (has_timezone("America/Tijuana")) {
        TZ_CHECK(from_utc("America/Tijuana", 1502142320), 1502117120);
        TZ_CHECK(from_local("America/Tijuana", 1502117120), 1502142320);
        TZ_CHECK(from_utc("America/Tijuana", 1445081653), 1445056453);
        TZ_CHECK(from_local("America/Tijuana", 1445056453), 1445081653);
        TZ_CHECK(from_utc("America/Tijuana", 1620191352), 1620166152);
        TZ_CHECK(from_local("America/Tijuana", 1620166152), 1620191352);
        TZ_CHECK(from_utc("America/Tijuana", 1544818962), 1544790162);
        TZ_CHECK(from_local("America/Tijuana", 1544790162), 1544818962);
        TZ_CHECK(from_utc("America/Tijuana", 1579019774), 1578990974);
        TZ_CHECK(from_local("America/Tijuana", 1578990974), 1579019774);
    } else {
        std::cerr << "NO TIMEZONE: America/Tijuana" << std::endl;
    }
    if (has_timezone("America/Toronto")) {
        TZ_CHECK(from_utc("America/Toronto", 1475065885), 1475051485);
        TZ_CHECK(from_local("America/Toronto", 1475051485), 1475065885);
        TZ_CHECK(from_utc("America/Toronto", 1625559494), 1625545094);
        TZ_CHECK(from_local("America/Toronto", 1625545094), 1625559494);
        TZ_CHECK(from_utc("America/Toronto", 1578111955), 1578093955);
        TZ_CHECK(from_local("America/Toronto", 1578093955), 1578111955);
        TZ_CHECK(from_utc("America/Toronto", 1449785107), 1449767107);
        TZ_CHECK(from_local("America/Toronto", 1449767107), 1449785107);
        TZ_CHECK(from_utc("America/Toronto", 1478716324), 1478698324);
        TZ_CHECK(from_local("America/Toronto", 1478698324), 1478716324);
    } else {
        std::cerr << "NO TIMEZONE: America/Toronto" << std::endl;
    }
    if (has_timezone("America/Tortola")) {
        TZ_CHECK(from_utc("America/Tortola", 1608648595), 1608634195);
        TZ_CHECK(from_local("America/Tortola", 1608634195), 1608648595);
        TZ_CHECK(from_utc("America/Tortola", 1547260035), 1547245635);
        TZ_CHECK(from_local("America/Tortola", 1547245635), 1547260035);
        TZ_CHECK(from_utc("America/Tortola", 1477453663), 1477439263);
        TZ_CHECK(from_local("America/Tortola", 1477439263), 1477453663);
        TZ_CHECK(from_utc("America/Tortola", 1614675214), 1614660814);
        TZ_CHECK(from_local("America/Tortola", 1614660814), 1614675214);
        TZ_CHECK(from_utc("America/Tortola", 1618214294), 1618199894);
        TZ_CHECK(from_local("America/Tortola", 1618199894), 1618214294);
    } else {
        std::cerr << "NO TIMEZONE: America/Tortola" << std::endl;
    }
    if (has_timezone("America/Vancouver")) {
        TZ_CHECK(from_utc("America/Vancouver", 1547858440), 1547829640);
        TZ_CHECK(from_local("America/Vancouver", 1547829640), 1547858440);
        TZ_CHECK(from_utc("America/Vancouver", 1548901615), 1548872815);
        TZ_CHECK(from_local("America/Vancouver", 1548872815), 1548901615);
        TZ_CHECK(from_utc("America/Vancouver", 1576889904), 1576861104);
        TZ_CHECK(from_local("America/Vancouver", 1576861104), 1576889904);
        TZ_CHECK(from_utc("America/Vancouver", 1459254569), 1459229369);
        TZ_CHECK(from_local("America/Vancouver", 1459229369), 1459254569);
        TZ_CHECK(from_utc("America/Vancouver", 1538702639), 1538677439);
        TZ_CHECK(from_local("America/Vancouver", 1538677439), 1538702639);
    } else {
        std::cerr << "NO TIMEZONE: America/Vancouver" << std::endl;
    }
    if (has_timezone("America/Virgin")) {
        TZ_CHECK(from_utc("America/Virgin", 1458429091), 1458414691);
        TZ_CHECK(from_local("America/Virgin", 1458414691), 1458429091);
        TZ_CHECK(from_utc("America/Virgin", 1502338830), 1502324430);
        TZ_CHECK(from_local("America/Virgin", 1502324430), 1502338830);
        TZ_CHECK(from_utc("America/Virgin", 1592303877), 1592289477);
        TZ_CHECK(from_local("America/Virgin", 1592289477), 1592303877);
        TZ_CHECK(from_utc("America/Virgin", 1495716991), 1495702591);
        TZ_CHECK(from_local("America/Virgin", 1495702591), 1495716991);
        TZ_CHECK(from_utc("America/Virgin", 1455562519), 1455548119);
        TZ_CHECK(from_local("America/Virgin", 1455548119), 1455562519);
    } else {
        std::cerr << "NO TIMEZONE: America/Virgin" << std::endl;
    }
    if (has_timezone("America/Whitehorse")) {
        TZ_CHECK(from_utc("America/Whitehorse", 1480792966), 1480764166);
        TZ_CHECK(from_local("America/Whitehorse", 1480764166), 1480792966);
        TZ_CHECK(from_utc("America/Whitehorse", 1530852765), 1530827565);
        TZ_CHECK(from_local("America/Whitehorse", 1530827565), 1530852765);
        TZ_CHECK(from_utc("America/Whitehorse", 1620820025), 1620794825);
        TZ_CHECK(from_local("America/Whitehorse", 1620794825), 1620820025);
        TZ_CHECK(from_utc("America/Whitehorse", 1450912825), 1450884025);
        TZ_CHECK(from_local("America/Whitehorse", 1450884025), 1450912825);
        TZ_CHECK(from_utc("America/Whitehorse", 1479898741), 1479869941);
        TZ_CHECK(from_local("America/Whitehorse", 1479869941), 1479898741);
    } else {
        std::cerr << "NO TIMEZONE: America/Whitehorse" << std::endl;
    }
    if (has_timezone("America/Winnipeg")) {
        TZ_CHECK(from_utc("America/Winnipeg", 1507428122), 1507410122);
        TZ_CHECK(from_local("America/Winnipeg", 1507410122), 1507428122);
        TZ_CHECK(from_utc("America/Winnipeg", 1529582828), 1529564828);
        TZ_CHECK(from_local("America/Winnipeg", 1529564828), 1529582828);
        TZ_CHECK(from_utc("America/Winnipeg", 1429654275), 1429636275);
        TZ_CHECK(from_local("America/Winnipeg", 1429636275), 1429654275);
        TZ_CHECK(from_utc("America/Winnipeg", 1436029928), 1436011928);
        TZ_CHECK(from_local("America/Winnipeg", 1436011928), 1436029928);
        TZ_CHECK(from_utc("America/Winnipeg", 1544654927), 1544633327);
        TZ_CHECK(from_local("America/Winnipeg", 1544633327), 1544654927);
    } else {
        std::cerr << "NO TIMEZONE: America/Winnipeg" << std::endl;
    }
    if (has_timezone("America/Yakutat")) {
        TZ_CHECK(from_utc("America/Yakutat", 1540747989), 1540719189);
        TZ_CHECK(from_local("America/Yakutat", 1540719189), 1540747989);
        TZ_CHECK(from_utc("America/Yakutat", 1559632367), 1559603567);
        TZ_CHECK(from_local("America/Yakutat", 1559603567), 1559632367);
        TZ_CHECK(from_utc("America/Yakutat", 1624072824), 1624044024);
        TZ_CHECK(from_local("America/Yakutat", 1624044024), 1624072824);
        TZ_CHECK(from_utc("America/Yakutat", 1540124643), 1540095843);
        TZ_CHECK(from_local("America/Yakutat", 1540095843), 1540124643);
        TZ_CHECK(from_utc("America/Yakutat", 1478064014), 1478035214);
        TZ_CHECK(from_local("America/Yakutat", 1478035214), 1478064014);
    } else {
        std::cerr << "NO TIMEZONE: America/Yakutat" << std::endl;
    }
    if (has_timezone("America/Yellowknife")) {
        TZ_CHECK(from_utc("America/Yellowknife", 1442173061), 1442151461);
        TZ_CHECK(from_local("America/Yellowknife", 1442151461), 1442173061);
        TZ_CHECK(from_utc("America/Yellowknife", 1472814363), 1472792763);
        TZ_CHECK(from_local("America/Yellowknife", 1472792763), 1472814363);
        TZ_CHECK(from_utc("America/Yellowknife", 1586463910), 1586442310);
        TZ_CHECK(from_local("America/Yellowknife", 1586442310), 1586463910);
        TZ_CHECK(from_utc("America/Yellowknife", 1445194051), 1445172451);
        TZ_CHECK(from_local("America/Yellowknife", 1445172451), 1445194051);
        TZ_CHECK(from_utc("America/Yellowknife", 1425130230), 1425105030);
        TZ_CHECK(from_local("America/Yellowknife", 1425105030), 1425130230);
    } else {
        std::cerr << "NO TIMEZONE: America/Yellowknife" << std::endl;
    }
    if (has_timezone("Antarctica/Casey")) {
        TZ_CHECK(from_utc("Antarctica/Casey", 1592108144), 1592136944);
        TZ_CHECK(from_local("Antarctica/Casey", 1592136944), 1592108144);
        TZ_CHECK(from_utc("Antarctica/Casey", 1520970098), 1520998898);
        TZ_CHECK(from_local("Antarctica/Casey", 1520998898), 1520970098);
        TZ_CHECK(from_utc("Antarctica/Casey", 1594103884), 1594132684);
        TZ_CHECK(from_local("Antarctica/Casey", 1594132684), 1594103884);
        TZ_CHECK(from_utc("Antarctica/Casey", 1523308121), 1523336921);
        TZ_CHECK(from_local("Antarctica/Casey", 1523336921), 1523308121);
        TZ_CHECK(from_utc("Antarctica/Casey", 1615940450), 1615969250);
        TZ_CHECK(from_local("Antarctica/Casey", 1615969250), 1615940450);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Casey" << std::endl;
    }
    if (has_timezone("Antarctica/Davis")) {
        TZ_CHECK(from_utc("Antarctica/Davis", 1545078564), 1545103764);
        TZ_CHECK(from_local("Antarctica/Davis", 1545103764), 1545078564);
        TZ_CHECK(from_utc("Antarctica/Davis", 1616491859), 1616517059);
        TZ_CHECK(from_local("Antarctica/Davis", 1616517059), 1616491859);
        TZ_CHECK(from_utc("Antarctica/Davis", 1499377831), 1499403031);
        TZ_CHECK(from_local("Antarctica/Davis", 1499403031), 1499377831);
        TZ_CHECK(from_utc("Antarctica/Davis", 1611975656), 1612000856);
        TZ_CHECK(from_local("Antarctica/Davis", 1612000856), 1611975656);
        TZ_CHECK(from_utc("Antarctica/Davis", 1543523100), 1543548300);
        TZ_CHECK(from_local("Antarctica/Davis", 1543548300), 1543523100);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Davis" << std::endl;
    }
    if (has_timezone("Antarctica/DumontDUrville")) {
        TZ_CHECK(from_utc("Antarctica/DumontDUrville", 1603738381), 1603774381);
        TZ_CHECK(from_local("Antarctica/DumontDUrville", 1603774381), 1603738381);
        TZ_CHECK(from_utc("Antarctica/DumontDUrville", 1503755603), 1503791603);
        TZ_CHECK(from_local("Antarctica/DumontDUrville", 1503791603), 1503755603);
        TZ_CHECK(from_utc("Antarctica/DumontDUrville", 1573379606), 1573415606);
        TZ_CHECK(from_local("Antarctica/DumontDUrville", 1573415606), 1573379606);
        TZ_CHECK(from_utc("Antarctica/DumontDUrville", 1481255258), 1481291258);
        TZ_CHECK(from_local("Antarctica/DumontDUrville", 1481291258), 1481255258);
        TZ_CHECK(from_utc("Antarctica/DumontDUrville", 1585556311), 1585592311);
        TZ_CHECK(from_local("Antarctica/DumontDUrville", 1585592311), 1585556311);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/DumontDUrville" << std::endl;
    }
    if (has_timezone("Antarctica/Macquarie")) {
        TZ_CHECK(from_utc("Antarctica/Macquarie", 1576228298), 1576267898);
        TZ_CHECK(from_local("Antarctica/Macquarie", 1576267898), 1576228298);
        TZ_CHECK(from_utc("Antarctica/Macquarie", 1449955047), 1449994647);
        TZ_CHECK(from_local("Antarctica/Macquarie", 1449994647), 1449955047);
        TZ_CHECK(from_utc("Antarctica/Macquarie", 1568267560), 1568307160);
        TZ_CHECK(from_local("Antarctica/Macquarie", 1568307160), 1568267560);
        TZ_CHECK(from_utc("Antarctica/Macquarie", 1518026594), 1518066194);
        TZ_CHECK(from_local("Antarctica/Macquarie", 1518066194), 1518026594);
        TZ_CHECK(from_utc("Antarctica/Macquarie", 1496877965), 1496917565);
        TZ_CHECK(from_local("Antarctica/Macquarie", 1496917565), 1496877965);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Macquarie" << std::endl;
    }
    if (has_timezone("Antarctica/Mawson")) {
        TZ_CHECK(from_utc("Antarctica/Mawson", 1550277746), 1550295746);
        TZ_CHECK(from_local("Antarctica/Mawson", 1550295746), 1550277746);
        TZ_CHECK(from_utc("Antarctica/Mawson", 1596137320), 1596155320);
        TZ_CHECK(from_local("Antarctica/Mawson", 1596155320), 1596137320);
        TZ_CHECK(from_utc("Antarctica/Mawson", 1622657920), 1622675920);
        TZ_CHECK(from_local("Antarctica/Mawson", 1622675920), 1622657920);
        TZ_CHECK(from_utc("Antarctica/Mawson", 1523317607), 1523335607);
        TZ_CHECK(from_local("Antarctica/Mawson", 1523335607), 1523317607);
        TZ_CHECK(from_utc("Antarctica/Mawson", 1532977438), 1532995438);
        TZ_CHECK(from_local("Antarctica/Mawson", 1532995438), 1532977438);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Mawson" << std::endl;
    }
    if (has_timezone("Antarctica/McMurdo")) {
        TZ_CHECK(from_utc("Antarctica/McMurdo", 1444497537), 1444544337);
        TZ_CHECK(from_local("Antarctica/McMurdo", 1444544337), 1444497537);
        TZ_CHECK(from_utc("Antarctica/McMurdo", 1593008334), 1593051534);
        TZ_CHECK(from_local("Antarctica/McMurdo", 1593051534), 1593008334);
        TZ_CHECK(from_utc("Antarctica/McMurdo", 1502253504), 1502296704);
        TZ_CHECK(from_local("Antarctica/McMurdo", 1502296704), 1502253504);
        TZ_CHECK(from_utc("Antarctica/McMurdo", 1537517960), 1537561160);
        TZ_CHECK(from_local("Antarctica/McMurdo", 1537561160), 1537517960);
        TZ_CHECK(from_utc("Antarctica/McMurdo", 1484003984), 1484050784);
        TZ_CHECK(from_local("Antarctica/McMurdo", 1484050784), 1484003984);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/McMurdo" << std::endl;
    }
    if (has_timezone("Antarctica/Palmer")) {
        TZ_CHECK(from_utc("Antarctica/Palmer", 1625340235), 1625329435);
        TZ_CHECK(from_local("Antarctica/Palmer", 1625329435), 1625340235);
        TZ_CHECK(from_utc("Antarctica/Palmer", 1540627246), 1540616446);
        TZ_CHECK(from_local("Antarctica/Palmer", 1540616446), 1540627246);
        TZ_CHECK(from_utc("Antarctica/Palmer", 1540168938), 1540158138);
        TZ_CHECK(from_local("Antarctica/Palmer", 1540158138), 1540168938);
        TZ_CHECK(from_utc("Antarctica/Palmer", 1488558928), 1488548128);
        TZ_CHECK(from_local("Antarctica/Palmer", 1488548128), 1488558928);
        TZ_CHECK(from_utc("Antarctica/Palmer", 1582790303), 1582779503);
        TZ_CHECK(from_local("Antarctica/Palmer", 1582779503), 1582790303);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Palmer" << std::endl;
    }
    if (has_timezone("Antarctica/Rothera")) {
        TZ_CHECK(from_utc("Antarctica/Rothera", 1512688818), 1512678018);
        TZ_CHECK(from_local("Antarctica/Rothera", 1512678018), 1512688818);
        TZ_CHECK(from_utc("Antarctica/Rothera", 1612440200), 1612429400);
        TZ_CHECK(from_local("Antarctica/Rothera", 1612429400), 1612440200);
        TZ_CHECK(from_utc("Antarctica/Rothera", 1411037451), 1411026651);
        TZ_CHECK(from_local("Antarctica/Rothera", 1411026651), 1411037451);
        TZ_CHECK(from_utc("Antarctica/Rothera", 1603240108), 1603229308);
        TZ_CHECK(from_local("Antarctica/Rothera", 1603229308), 1603240108);
        TZ_CHECK(from_utc("Antarctica/Rothera", 1436423099), 1436412299);
        TZ_CHECK(from_local("Antarctica/Rothera", 1436412299), 1436423099);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Rothera" << std::endl;
    }
    if (has_timezone("Antarctica/South_Pole")) {
        TZ_CHECK(from_utc("Antarctica/South_Pole", 1425424654), 1425471454);
        TZ_CHECK(from_local("Antarctica/South_Pole", 1425471454), 1425424654);
        TZ_CHECK(from_utc("Antarctica/South_Pole", 1561930594), 1561973794);
        TZ_CHECK(from_local("Antarctica/South_Pole", 1561973794), 1561930594);
        TZ_CHECK(from_utc("Antarctica/South_Pole", 1498493667), 1498536867);
        TZ_CHECK(from_local("Antarctica/South_Pole", 1498536867), 1498493667);
        TZ_CHECK(from_utc("Antarctica/South_Pole", 1576782620), 1576829420);
        TZ_CHECK(from_local("Antarctica/South_Pole", 1576829420), 1576782620);
        TZ_CHECK(from_utc("Antarctica/South_Pole", 1494560887), 1494604087);
        TZ_CHECK(from_local("Antarctica/South_Pole", 1494604087), 1494560887);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/South_Pole" << std::endl;
    }
    if (has_timezone("Antarctica/Syowa")) {
        TZ_CHECK(from_utc("Antarctica/Syowa", 1547397734), 1547408534);
        TZ_CHECK(from_local("Antarctica/Syowa", 1547408534), 1547397734);
        TZ_CHECK(from_utc("Antarctica/Syowa", 1419175719), 1419186519);
        TZ_CHECK(from_local("Antarctica/Syowa", 1419186519), 1419175719);
        TZ_CHECK(from_utc("Antarctica/Syowa", 1573177895), 1573188695);
        TZ_CHECK(from_local("Antarctica/Syowa", 1573188695), 1573177895);
        TZ_CHECK(from_utc("Antarctica/Syowa", 1626905932), 1626916732);
        TZ_CHECK(from_local("Antarctica/Syowa", 1626916732), 1626905932);
        TZ_CHECK(from_utc("Antarctica/Syowa", 1526910755), 1526921555);
        TZ_CHECK(from_local("Antarctica/Syowa", 1526921555), 1526910755);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Syowa" << std::endl;
    }
    if (has_timezone("Antarctica/Troll")) {
        TZ_CHECK(from_utc("Antarctica/Troll", 1557833393), 1557840593);
        TZ_CHECK(from_local("Antarctica/Troll", 1557840593), 1557833393);
        TZ_CHECK(from_utc("Antarctica/Troll", 1512115866), 1512115866);
        TZ_CHECK(from_local("Antarctica/Troll", 1512115866), 1512115866);
        TZ_CHECK(from_utc("Antarctica/Troll", 1616191956), 1616191956);
        TZ_CHECK(from_local("Antarctica/Troll", 1616191956), 1616191956);
        TZ_CHECK(from_utc("Antarctica/Troll", 1555667196), 1555674396);
        TZ_CHECK(from_local("Antarctica/Troll", 1555674396), 1555667196);
        TZ_CHECK(from_utc("Antarctica/Troll", 1494786789), 1494793989);
        TZ_CHECK(from_local("Antarctica/Troll", 1494793989), 1494786789);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Troll" << std::endl;
    }
    if (has_timezone("Antarctica/Vostok")) {
        TZ_CHECK(from_utc("Antarctica/Vostok", 1578689155), 1578710755);
        TZ_CHECK(from_local("Antarctica/Vostok", 1578710755), 1578689155);
        TZ_CHECK(from_utc("Antarctica/Vostok", 1501006975), 1501028575);
        TZ_CHECK(from_local("Antarctica/Vostok", 1501028575), 1501006975);
        TZ_CHECK(from_utc("Antarctica/Vostok", 1612231649), 1612253249);
        TZ_CHECK(from_local("Antarctica/Vostok", 1612253249), 1612231649);
        TZ_CHECK(from_utc("Antarctica/Vostok", 1584211324), 1584232924);
        TZ_CHECK(from_local("Antarctica/Vostok", 1584232924), 1584211324);
        TZ_CHECK(from_utc("Antarctica/Vostok", 1452840066), 1452861666);
        TZ_CHECK(from_local("Antarctica/Vostok", 1452861666), 1452840066);
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Vostok" << std::endl;
    }
    if (has_timezone("Arctic/Longyearbyen")) {
        TZ_CHECK(from_utc("Arctic/Longyearbyen", 1558263463), 1558270663);
        TZ_CHECK(from_local("Arctic/Longyearbyen", 1558270663), 1558263463);
        TZ_CHECK(from_utc("Arctic/Longyearbyen", 1495174636), 1495181836);
        TZ_CHECK(from_local("Arctic/Longyearbyen", 1495181836), 1495174636);
        TZ_CHECK(from_utc("Arctic/Longyearbyen", 1533936851), 1533944051);
        TZ_CHECK(from_local("Arctic/Longyearbyen", 1533944051), 1533936851);
        TZ_CHECK(from_utc("Arctic/Longyearbyen", 1558556029), 1558563229);
        TZ_CHECK(from_local("Arctic/Longyearbyen", 1558563229), 1558556029);
        TZ_CHECK(from_utc("Arctic/Longyearbyen", 1627550122), 1627557322);
        TZ_CHECK(from_local("Arctic/Longyearbyen", 1627557322), 1627550122);
    } else {
        std::cerr << "NO TIMEZONE: Arctic/Longyearbyen" << std::endl;
    }
    if (has_timezone("Asia/Aden")) {
        TZ_CHECK(from_utc("Asia/Aden", 1559433700), 1559444500);
        TZ_CHECK(from_local("Asia/Aden", 1559444500), 1559433700);
        TZ_CHECK(from_utc("Asia/Aden", 1548279330), 1548290130);
        TZ_CHECK(from_local("Asia/Aden", 1548290130), 1548279330);
        TZ_CHECK(from_utc("Asia/Aden", 1624948532), 1624959332);
        TZ_CHECK(from_local("Asia/Aden", 1624959332), 1624948532);
        TZ_CHECK(from_utc("Asia/Aden", 1481356462), 1481367262);
        TZ_CHECK(from_local("Asia/Aden", 1481367262), 1481356462);
        TZ_CHECK(from_utc("Asia/Aden", 1562851580), 1562862380);
        TZ_CHECK(from_local("Asia/Aden", 1562862380), 1562851580);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aden" << std::endl;
    }
    if (has_timezone("Asia/Almaty")) {
        TZ_CHECK(from_utc("Asia/Almaty", 1409924193), 1409945793);
        TZ_CHECK(from_local("Asia/Almaty", 1409945793), 1409924193);
        TZ_CHECK(from_utc("Asia/Almaty", 1478083186), 1478104786);
        TZ_CHECK(from_local("Asia/Almaty", 1478104786), 1478083186);
        TZ_CHECK(from_utc("Asia/Almaty", 1547698113), 1547719713);
        TZ_CHECK(from_local("Asia/Almaty", 1547719713), 1547698113);
        TZ_CHECK(from_utc("Asia/Almaty", 1582784684), 1582806284);
        TZ_CHECK(from_local("Asia/Almaty", 1582806284), 1582784684);
        TZ_CHECK(from_utc("Asia/Almaty", 1586631568), 1586653168);
        TZ_CHECK(from_local("Asia/Almaty", 1586653168), 1586631568);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Almaty" << std::endl;
    }
    if (has_timezone("Asia/Amman")) {
        TZ_CHECK(from_utc("Asia/Amman", 1626666510), 1626677310);
        TZ_CHECK(from_local("Asia/Amman", 1626677310), 1626666510);
        TZ_CHECK(from_utc("Asia/Amman", 1548624407), 1548631607);
        TZ_CHECK(from_local("Asia/Amman", 1548631607), 1548624407);
        TZ_CHECK(from_utc("Asia/Amman", 1417121947), 1417129147);
        TZ_CHECK(from_local("Asia/Amman", 1417129147), 1417121947);
        TZ_CHECK(from_utc("Asia/Amman", 1460842809), 1460853609);
        TZ_CHECK(from_local("Asia/Amman", 1460853609), 1460842809);
        TZ_CHECK(from_utc("Asia/Amman", 1572678836), 1572686036);
        TZ_CHECK(from_local("Asia/Amman", 1572686036), 1572678836);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Amman" << std::endl;
    }
    if (has_timezone("Asia/Anadyr")) {
        TZ_CHECK(from_utc("Asia/Anadyr", 1416068539), 1416111739);
        TZ_CHECK(from_local("Asia/Anadyr", 1416111739), 1416068539);
        TZ_CHECK(from_utc("Asia/Anadyr", 1439421204), 1439464404);
        TZ_CHECK(from_local("Asia/Anadyr", 1439464404), 1439421204);
        TZ_CHECK(from_utc("Asia/Anadyr", 1614780044), 1614823244);
        TZ_CHECK(from_local("Asia/Anadyr", 1614823244), 1614780044);
        TZ_CHECK(from_utc("Asia/Anadyr", 1595697399), 1595740599);
        TZ_CHECK(from_local("Asia/Anadyr", 1595740599), 1595697399);
        TZ_CHECK(from_utc("Asia/Anadyr", 1626538241), 1626581441);
        TZ_CHECK(from_local("Asia/Anadyr", 1626581441), 1626538241);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Anadyr" << std::endl;
    }
    if (has_timezone("Asia/Aqtau")) {
        TZ_CHECK(from_utc("Asia/Aqtau", 1473026898), 1473044898);
        TZ_CHECK(from_local("Asia/Aqtau", 1473044898), 1473026898);
        TZ_CHECK(from_utc("Asia/Aqtau", 1464058181), 1464076181);
        TZ_CHECK(from_local("Asia/Aqtau", 1464076181), 1464058181);
        TZ_CHECK(from_utc("Asia/Aqtau", 1521199751), 1521217751);
        TZ_CHECK(from_local("Asia/Aqtau", 1521217751), 1521199751);
        TZ_CHECK(from_utc("Asia/Aqtau", 1566391351), 1566409351);
        TZ_CHECK(from_local("Asia/Aqtau", 1566409351), 1566391351);
        TZ_CHECK(from_utc("Asia/Aqtau", 1582016922), 1582034922);
        TZ_CHECK(from_local("Asia/Aqtau", 1582034922), 1582016922);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aqtau" << std::endl;
    }
    if (has_timezone("Asia/Aqtobe")) {
        TZ_CHECK(from_utc("Asia/Aqtobe", 1432760234), 1432778234);
        TZ_CHECK(from_local("Asia/Aqtobe", 1432778234), 1432760234);
        TZ_CHECK(from_utc("Asia/Aqtobe", 1628397605), 1628415605);
        TZ_CHECK(from_local("Asia/Aqtobe", 1628415605), 1628397605);
        TZ_CHECK(from_utc("Asia/Aqtobe", 1422455770), 1422473770);
        TZ_CHECK(from_local("Asia/Aqtobe", 1422473770), 1422455770);
        TZ_CHECK(from_utc("Asia/Aqtobe", 1473369006), 1473387006);
        TZ_CHECK(from_local("Asia/Aqtobe", 1473387006), 1473369006);
        TZ_CHECK(from_utc("Asia/Aqtobe", 1589024067), 1589042067);
        TZ_CHECK(from_local("Asia/Aqtobe", 1589042067), 1589024067);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aqtobe" << std::endl;
    }
    if (has_timezone("Asia/Ashgabat")) {
        TZ_CHECK(from_utc("Asia/Ashgabat", 1614715522), 1614733522);
        TZ_CHECK(from_local("Asia/Ashgabat", 1614733522), 1614715522);
        TZ_CHECK(from_utc("Asia/Ashgabat", 1491076558), 1491094558);
        TZ_CHECK(from_local("Asia/Ashgabat", 1491094558), 1491076558);
        TZ_CHECK(from_utc("Asia/Ashgabat", 1555900493), 1555918493);
        TZ_CHECK(from_local("Asia/Ashgabat", 1555918493), 1555900493);
        TZ_CHECK(from_utc("Asia/Ashgabat", 1469960649), 1469978649);
        TZ_CHECK(from_local("Asia/Ashgabat", 1469978649), 1469960649);
        TZ_CHECK(from_utc("Asia/Ashgabat", 1581342980), 1581360980);
        TZ_CHECK(from_local("Asia/Ashgabat", 1581360980), 1581342980);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ashgabat" << std::endl;
    }
    if (has_timezone("Asia/Ashkhabad")) {
        TZ_CHECK(from_utc("Asia/Ashkhabad", 1547431574), 1547449574);
        TZ_CHECK(from_local("Asia/Ashkhabad", 1547449574), 1547431574);
        TZ_CHECK(from_utc("Asia/Ashkhabad", 1540162697), 1540180697);
        TZ_CHECK(from_local("Asia/Ashkhabad", 1540180697), 1540162697);
        TZ_CHECK(from_utc("Asia/Ashkhabad", 1501767514), 1501785514);
        TZ_CHECK(from_local("Asia/Ashkhabad", 1501785514), 1501767514);
        TZ_CHECK(from_utc("Asia/Ashkhabad", 1559551258), 1559569258);
        TZ_CHECK(from_local("Asia/Ashkhabad", 1559569258), 1559551258);
        TZ_CHECK(from_utc("Asia/Ashkhabad", 1450746359), 1450764359);
        TZ_CHECK(from_local("Asia/Ashkhabad", 1450764359), 1450746359);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ashkhabad" << std::endl;
    }
    if (has_timezone("Asia/Atyrau")) {
        TZ_CHECK(from_utc("Asia/Atyrau", 1569838048), 1569856048);
        TZ_CHECK(from_local("Asia/Atyrau", 1569856048), 1569838048);
        TZ_CHECK(from_utc("Asia/Atyrau", 1530330354), 1530348354);
        TZ_CHECK(from_local("Asia/Atyrau", 1530348354), 1530330354);
        TZ_CHECK(from_utc("Asia/Atyrau", 1480974170), 1480992170);
        TZ_CHECK(from_local("Asia/Atyrau", 1480992170), 1480974170);
        TZ_CHECK(from_utc("Asia/Atyrau", 1518011104), 1518029104);
        TZ_CHECK(from_local("Asia/Atyrau", 1518029104), 1518011104);
        TZ_CHECK(from_utc("Asia/Atyrau", 1509488393), 1509506393);
        TZ_CHECK(from_local("Asia/Atyrau", 1509506393), 1509488393);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Atyrau" << std::endl;
    }
    if (has_timezone("Asia/Baghdad")) {
        TZ_CHECK(from_utc("Asia/Baghdad", 1569796379), 1569807179);
        TZ_CHECK(from_local("Asia/Baghdad", 1569807179), 1569796379);
        TZ_CHECK(from_utc("Asia/Baghdad", 1624698286), 1624709086);
        TZ_CHECK(from_local("Asia/Baghdad", 1624709086), 1624698286);
        TZ_CHECK(from_utc("Asia/Baghdad", 1477079263), 1477090063);
        TZ_CHECK(from_local("Asia/Baghdad", 1477090063), 1477079263);
        TZ_CHECK(from_utc("Asia/Baghdad", 1587039947), 1587050747);
        TZ_CHECK(from_local("Asia/Baghdad", 1587050747), 1587039947);
        TZ_CHECK(from_utc("Asia/Baghdad", 1493586157), 1493596957);
        TZ_CHECK(from_local("Asia/Baghdad", 1493596957), 1493586157);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Baghdad" << std::endl;
    }
    if (has_timezone("Asia/Bahrain")) {
        TZ_CHECK(from_utc("Asia/Bahrain", 1498780882), 1498791682);
        TZ_CHECK(from_local("Asia/Bahrain", 1498791682), 1498780882);
        TZ_CHECK(from_utc("Asia/Bahrain", 1560539460), 1560550260);
        TZ_CHECK(from_local("Asia/Bahrain", 1560550260), 1560539460);
        TZ_CHECK(from_utc("Asia/Bahrain", 1480742717), 1480753517);
        TZ_CHECK(from_local("Asia/Bahrain", 1480753517), 1480742717);
        TZ_CHECK(from_utc("Asia/Bahrain", 1601319480), 1601330280);
        TZ_CHECK(from_local("Asia/Bahrain", 1601330280), 1601319480);
        TZ_CHECK(from_utc("Asia/Bahrain", 1446325507), 1446336307);
        TZ_CHECK(from_local("Asia/Bahrain", 1446336307), 1446325507);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bahrain" << std::endl;
    }
    if (has_timezone("Asia/Baku")) {
        TZ_CHECK(from_utc("Asia/Baku", 1520643839), 1520658239);
        TZ_CHECK(from_local("Asia/Baku", 1520658239), 1520643839);
        TZ_CHECK(from_utc("Asia/Baku", 1515417364), 1515431764);
        TZ_CHECK(from_local("Asia/Baku", 1515431764), 1515417364);
        TZ_CHECK(from_utc("Asia/Baku", 1460468162), 1460482562);
        TZ_CHECK(from_local("Asia/Baku", 1460482562), 1460468162);
        TZ_CHECK(from_utc("Asia/Baku", 1478610806), 1478625206);
        TZ_CHECK(from_local("Asia/Baku", 1478625206), 1478610806);
        TZ_CHECK(from_utc("Asia/Baku", 1538388218), 1538402618);
        TZ_CHECK(from_local("Asia/Baku", 1538402618), 1538388218);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Baku" << std::endl;
    }
    if (has_timezone("Asia/Bangkok")) {
        TZ_CHECK(from_utc("Asia/Bangkok", 1473706756), 1473731956);
        TZ_CHECK(from_local("Asia/Bangkok", 1473731956), 1473706756);
        TZ_CHECK(from_utc("Asia/Bangkok", 1515820411), 1515845611);
        TZ_CHECK(from_local("Asia/Bangkok", 1515845611), 1515820411);
        TZ_CHECK(from_utc("Asia/Bangkok", 1549558942), 1549584142);
        TZ_CHECK(from_local("Asia/Bangkok", 1549584142), 1549558942);
        TZ_CHECK(from_utc("Asia/Bangkok", 1565994339), 1566019539);
        TZ_CHECK(from_local("Asia/Bangkok", 1566019539), 1565994339);
        TZ_CHECK(from_utc("Asia/Bangkok", 1516883463), 1516908663);
        TZ_CHECK(from_local("Asia/Bangkok", 1516908663), 1516883463);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bangkok" << std::endl;
    }
    if (has_timezone("Asia/Barnaul")) {
        TZ_CHECK(from_utc("Asia/Barnaul", 1421089035), 1421110635);
        TZ_CHECK(from_local("Asia/Barnaul", 1421110635), 1421089035);
        TZ_CHECK(from_utc("Asia/Barnaul", 1464663689), 1464688889);
        TZ_CHECK(from_local("Asia/Barnaul", 1464688889), 1464663689);
        TZ_CHECK(from_utc("Asia/Barnaul", 1506067978), 1506093178);
        TZ_CHECK(from_local("Asia/Barnaul", 1506093178), 1506067978);
        TZ_CHECK(from_utc("Asia/Barnaul", 1524217009), 1524242209);
        TZ_CHECK(from_local("Asia/Barnaul", 1524242209), 1524217009);
        TZ_CHECK(from_utc("Asia/Barnaul", 1418613761), 1418635361);
        TZ_CHECK(from_local("Asia/Barnaul", 1418635361), 1418613761);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Barnaul" << std::endl;
    }
    if (has_timezone("Asia/Beirut")) {
        TZ_CHECK(from_utc("Asia/Beirut", 1581404490), 1581411690);
        TZ_CHECK(from_local("Asia/Beirut", 1581411690), 1581404490);
        TZ_CHECK(from_utc("Asia/Beirut", 1435749116), 1435759916);
        TZ_CHECK(from_local("Asia/Beirut", 1435759916), 1435749116);
        TZ_CHECK(from_utc("Asia/Beirut", 1439792208), 1439803008);
        TZ_CHECK(from_local("Asia/Beirut", 1439803008), 1439792208);
        TZ_CHECK(from_utc("Asia/Beirut", 1482154046), 1482161246);
        TZ_CHECK(from_local("Asia/Beirut", 1482161246), 1482154046);
        TZ_CHECK(from_utc("Asia/Beirut", 1480214784), 1480221984);
        TZ_CHECK(from_local("Asia/Beirut", 1480221984), 1480214784);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Beirut" << std::endl;
    }
    if (has_timezone("Asia/Bishkek")) {
        TZ_CHECK(from_utc("Asia/Bishkek", 1468668637), 1468690237);
        TZ_CHECK(from_local("Asia/Bishkek", 1468690237), 1468668637);
        TZ_CHECK(from_utc("Asia/Bishkek", 1492328378), 1492349978);
        TZ_CHECK(from_local("Asia/Bishkek", 1492349978), 1492328378);
        TZ_CHECK(from_utc("Asia/Bishkek", 1415834524), 1415856124);
        TZ_CHECK(from_local("Asia/Bishkek", 1415856124), 1415834524);
        TZ_CHECK(from_utc("Asia/Bishkek", 1529950358), 1529971958);
        TZ_CHECK(from_local("Asia/Bishkek", 1529971958), 1529950358);
        TZ_CHECK(from_utc("Asia/Bishkek", 1601899451), 1601921051);
        TZ_CHECK(from_local("Asia/Bishkek", 1601921051), 1601899451);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bishkek" << std::endl;
    }
    if (has_timezone("Asia/Brunei")) {
        TZ_CHECK(from_utc("Asia/Brunei", 1544335955), 1544364755);
        TZ_CHECK(from_local("Asia/Brunei", 1544364755), 1544335955);
        TZ_CHECK(from_utc("Asia/Brunei", 1565721257), 1565750057);
        TZ_CHECK(from_local("Asia/Brunei", 1565750057), 1565721257);
        TZ_CHECK(from_utc("Asia/Brunei", 1610179885), 1610208685);
        TZ_CHECK(from_local("Asia/Brunei", 1610208685), 1610179885);
        TZ_CHECK(from_utc("Asia/Brunei", 1602787319), 1602816119);
        TZ_CHECK(from_local("Asia/Brunei", 1602816119), 1602787319);
        TZ_CHECK(from_utc("Asia/Brunei", 1429535558), 1429564358);
        TZ_CHECK(from_local("Asia/Brunei", 1429564358), 1429535558);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Brunei" << std::endl;
    }
    if (has_timezone("Asia/Calcutta")) {
        TZ_CHECK(from_utc("Asia/Calcutta", 1474026586), 1474046386);
        TZ_CHECK(from_local("Asia/Calcutta", 1474046386), 1474026586);
        TZ_CHECK(from_utc("Asia/Calcutta", 1535770167), 1535789967);
        TZ_CHECK(from_local("Asia/Calcutta", 1535789967), 1535770167);
        TZ_CHECK(from_utc("Asia/Calcutta", 1548895283), 1548915083);
        TZ_CHECK(from_local("Asia/Calcutta", 1548915083), 1548895283);
        TZ_CHECK(from_utc("Asia/Calcutta", 1614211994), 1614231794);
        TZ_CHECK(from_local("Asia/Calcutta", 1614231794), 1614211994);
        TZ_CHECK(from_utc("Asia/Calcutta", 1534138075), 1534157875);
        TZ_CHECK(from_local("Asia/Calcutta", 1534157875), 1534138075);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Calcutta" << std::endl;
    }
    if (has_timezone("Asia/Chita")) {
        TZ_CHECK(from_utc("Asia/Chita", 1591755219), 1591787619);
        TZ_CHECK(from_local("Asia/Chita", 1591787619), 1591755219);
        TZ_CHECK(from_utc("Asia/Chita", 1496895696), 1496928096);
        TZ_CHECK(from_local("Asia/Chita", 1496928096), 1496895696);
        TZ_CHECK(from_utc("Asia/Chita", 1605332006), 1605364406);
        TZ_CHECK(from_local("Asia/Chita", 1605364406), 1605332006);
        TZ_CHECK(from_utc("Asia/Chita", 1604002596), 1604034996);
        TZ_CHECK(from_local("Asia/Chita", 1604034996), 1604002596);
        TZ_CHECK(from_utc("Asia/Chita", 1483961338), 1483993738);
        TZ_CHECK(from_local("Asia/Chita", 1483993738), 1483961338);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chita" << std::endl;
    }
    if (has_timezone("Asia/Choibalsan")) {
        TZ_CHECK(from_utc("Asia/Choibalsan", 1412402818), 1412431618);
        TZ_CHECK(from_local("Asia/Choibalsan", 1412431618), 1412402818);
        TZ_CHECK(from_utc("Asia/Choibalsan", 1459104826), 1459137226);
        TZ_CHECK(from_local("Asia/Choibalsan", 1459137226), 1459104826);
        TZ_CHECK(from_utc("Asia/Choibalsan", 1568454407), 1568483207);
        TZ_CHECK(from_local("Asia/Choibalsan", 1568483207), 1568454407);
        TZ_CHECK(from_utc("Asia/Choibalsan", 1544560102), 1544588902);
        TZ_CHECK(from_local("Asia/Choibalsan", 1544588902), 1544560102);
        TZ_CHECK(from_utc("Asia/Choibalsan", 1422318779), 1422347579);
        TZ_CHECK(from_local("Asia/Choibalsan", 1422347579), 1422318779);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Choibalsan" << std::endl;
    }
    if (has_timezone("Asia/Chongqing")) {
        TZ_CHECK(from_utc("Asia/Chongqing", 1493963950), 1493992750);
        TZ_CHECK(from_local("Asia/Chongqing", 1493992750), 1493963950);
        TZ_CHECK(from_utc("Asia/Chongqing", 1457930512), 1457959312);
        TZ_CHECK(from_local("Asia/Chongqing", 1457959312), 1457930512);
        TZ_CHECK(from_utc("Asia/Chongqing", 1549010142), 1549038942);
        TZ_CHECK(from_local("Asia/Chongqing", 1549038942), 1549010142);
        TZ_CHECK(from_utc("Asia/Chongqing", 1577293194), 1577321994);
        TZ_CHECK(from_local("Asia/Chongqing", 1577321994), 1577293194);
        TZ_CHECK(from_utc("Asia/Chongqing", 1489558312), 1489587112);
        TZ_CHECK(from_local("Asia/Chongqing", 1489587112), 1489558312);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chongqing" << std::endl;
    }
    if (has_timezone("Asia/Chungking")) {
        TZ_CHECK(from_utc("Asia/Chungking", 1575439590), 1575468390);
        TZ_CHECK(from_local("Asia/Chungking", 1575468390), 1575439590);
        TZ_CHECK(from_utc("Asia/Chungking", 1599276453), 1599305253);
        TZ_CHECK(from_local("Asia/Chungking", 1599305253), 1599276453);
        TZ_CHECK(from_utc("Asia/Chungking", 1626146159), 1626174959);
        TZ_CHECK(from_local("Asia/Chungking", 1626174959), 1626146159);
        TZ_CHECK(from_utc("Asia/Chungking", 1464327361), 1464356161);
        TZ_CHECK(from_local("Asia/Chungking", 1464356161), 1464327361);
        TZ_CHECK(from_utc("Asia/Chungking", 1421776123), 1421804923);
        TZ_CHECK(from_local("Asia/Chungking", 1421804923), 1421776123);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chungking" << std::endl;
    }
    if (has_timezone("Asia/Colombo")) {
        TZ_CHECK(from_utc("Asia/Colombo", 1429342942), 1429362742);
        TZ_CHECK(from_local("Asia/Colombo", 1429362742), 1429342942);
        TZ_CHECK(from_utc("Asia/Colombo", 1475047830), 1475067630);
        TZ_CHECK(from_local("Asia/Colombo", 1475067630), 1475047830);
        TZ_CHECK(from_utc("Asia/Colombo", 1423305237), 1423325037);
        TZ_CHECK(from_local("Asia/Colombo", 1423325037), 1423305237);
        TZ_CHECK(from_utc("Asia/Colombo", 1411735744), 1411755544);
        TZ_CHECK(from_local("Asia/Colombo", 1411755544), 1411735744);
        TZ_CHECK(from_utc("Asia/Colombo", 1489257088), 1489276888);
        TZ_CHECK(from_local("Asia/Colombo", 1489276888), 1489257088);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Colombo" << std::endl;
    }
    if (has_timezone("Asia/Dacca")) {
        TZ_CHECK(from_utc("Asia/Dacca", 1514359331), 1514380931);
        TZ_CHECK(from_local("Asia/Dacca", 1514380931), 1514359331);
        TZ_CHECK(from_utc("Asia/Dacca", 1502190317), 1502211917);
        TZ_CHECK(from_local("Asia/Dacca", 1502211917), 1502190317);
        TZ_CHECK(from_utc("Asia/Dacca", 1627581481), 1627603081);
        TZ_CHECK(from_local("Asia/Dacca", 1627603081), 1627581481);
        TZ_CHECK(from_utc("Asia/Dacca", 1630115484), 1630137084);
        TZ_CHECK(from_local("Asia/Dacca", 1630137084), 1630115484);
        TZ_CHECK(from_utc("Asia/Dacca", 1557301665), 1557323265);
        TZ_CHECK(from_local("Asia/Dacca", 1557323265), 1557301665);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dacca" << std::endl;
    }
    if (has_timezone("Asia/Damascus")) {
        TZ_CHECK(from_utc("Asia/Damascus", 1552631448), 1552638648);
        TZ_CHECK(from_local("Asia/Damascus", 1552638648), 1552631448);
        TZ_CHECK(from_utc("Asia/Damascus", 1428658387), 1428669187);
        TZ_CHECK(from_local("Asia/Damascus", 1428669187), 1428658387);
        TZ_CHECK(from_utc("Asia/Damascus", 1489642696), 1489649896);
        TZ_CHECK(from_local("Asia/Damascus", 1489649896), 1489642696);
        TZ_CHECK(from_utc("Asia/Damascus", 1575218759), 1575225959);
        TZ_CHECK(from_local("Asia/Damascus", 1575225959), 1575218759);
        TZ_CHECK(from_utc("Asia/Damascus", 1602602880), 1602613680);
        TZ_CHECK(from_local("Asia/Damascus", 1602613680), 1602602880);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Damascus" << std::endl;
    }
    if (has_timezone("Asia/Dhaka")) {
        TZ_CHECK(from_utc("Asia/Dhaka", 1414570335), 1414591935);
        TZ_CHECK(from_local("Asia/Dhaka", 1414591935), 1414570335);
        TZ_CHECK(from_utc("Asia/Dhaka", 1414934471), 1414956071);
        TZ_CHECK(from_local("Asia/Dhaka", 1414956071), 1414934471);
        TZ_CHECK(from_utc("Asia/Dhaka", 1547581950), 1547603550);
        TZ_CHECK(from_local("Asia/Dhaka", 1547603550), 1547581950);
        TZ_CHECK(from_utc("Asia/Dhaka", 1581391487), 1581413087);
        TZ_CHECK(from_local("Asia/Dhaka", 1581413087), 1581391487);
        TZ_CHECK(from_utc("Asia/Dhaka", 1622333796), 1622355396);
        TZ_CHECK(from_local("Asia/Dhaka", 1622355396), 1622333796);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dhaka" << std::endl;
    }
    if (has_timezone("Asia/Dili")) {
        TZ_CHECK(from_utc("Asia/Dili", 1611828694), 1611861094);
        TZ_CHECK(from_local("Asia/Dili", 1611861094), 1611828694);
        TZ_CHECK(from_utc("Asia/Dili", 1576110152), 1576142552);
        TZ_CHECK(from_local("Asia/Dili", 1576142552), 1576110152);
        TZ_CHECK(from_utc("Asia/Dili", 1432909868), 1432942268);
        TZ_CHECK(from_local("Asia/Dili", 1432942268), 1432909868);
        TZ_CHECK(from_utc("Asia/Dili", 1519764304), 1519796704);
        TZ_CHECK(from_local("Asia/Dili", 1519796704), 1519764304);
        TZ_CHECK(from_utc("Asia/Dili", 1553323204), 1553355604);
        TZ_CHECK(from_local("Asia/Dili", 1553355604), 1553323204);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dili" << std::endl;
    }
    if (has_timezone("Asia/Dubai")) {
        TZ_CHECK(from_utc("Asia/Dubai", 1528659578), 1528673978);
        TZ_CHECK(from_local("Asia/Dubai", 1528673978), 1528659578);
        TZ_CHECK(from_utc("Asia/Dubai", 1454961159), 1454975559);
        TZ_CHECK(from_local("Asia/Dubai", 1454975559), 1454961159);
        TZ_CHECK(from_utc("Asia/Dubai", 1518249636), 1518264036);
        TZ_CHECK(from_local("Asia/Dubai", 1518264036), 1518249636);
        TZ_CHECK(from_utc("Asia/Dubai", 1471466854), 1471481254);
        TZ_CHECK(from_local("Asia/Dubai", 1471481254), 1471466854);
        TZ_CHECK(from_utc("Asia/Dubai", 1447201508), 1447215908);
        TZ_CHECK(from_local("Asia/Dubai", 1447215908), 1447201508);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dubai" << std::endl;
    }
    if (has_timezone("Asia/Dushanbe")) {
        TZ_CHECK(from_utc("Asia/Dushanbe", 1618945107), 1618963107);
        TZ_CHECK(from_local("Asia/Dushanbe", 1618963107), 1618945107);
        TZ_CHECK(from_utc("Asia/Dushanbe", 1613958537), 1613976537);
        TZ_CHECK(from_local("Asia/Dushanbe", 1613976537), 1613958537);
        TZ_CHECK(from_utc("Asia/Dushanbe", 1431845721), 1431863721);
        TZ_CHECK(from_local("Asia/Dushanbe", 1431863721), 1431845721);
        TZ_CHECK(from_utc("Asia/Dushanbe", 1572049826), 1572067826);
        TZ_CHECK(from_local("Asia/Dushanbe", 1572067826), 1572049826);
        TZ_CHECK(from_utc("Asia/Dushanbe", 1558762602), 1558780602);
        TZ_CHECK(from_local("Asia/Dushanbe", 1558780602), 1558762602);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dushanbe" << std::endl;
    }
    if (has_timezone("Asia/Famagusta")) {
        TZ_CHECK(from_utc("Asia/Famagusta", 1422062289), 1422069489);
        TZ_CHECK(from_local("Asia/Famagusta", 1422069489), 1422062289);
        TZ_CHECK(from_utc("Asia/Famagusta", 1450814259), 1450821459);
        TZ_CHECK(from_local("Asia/Famagusta", 1450821459), 1450814259);
        TZ_CHECK(from_utc("Asia/Famagusta", 1577123083), 1577130283);
        TZ_CHECK(from_local("Asia/Famagusta", 1577130283), 1577123083);
        TZ_CHECK(from_utc("Asia/Famagusta", 1544377646), 1544384846);
        TZ_CHECK(from_local("Asia/Famagusta", 1544384846), 1544377646);
        TZ_CHECK(from_utc("Asia/Famagusta", 1416810217), 1416817417);
        TZ_CHECK(from_local("Asia/Famagusta", 1416817417), 1416810217);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Famagusta" << std::endl;
    }
    if (has_timezone("Asia/Gaza")) {
        TZ_CHECK(from_utc("Asia/Gaza", 1600106433), 1600117233);
        TZ_CHECK(from_local("Asia/Gaza", 1600117233), 1600106433);
        TZ_CHECK(from_utc("Asia/Gaza", 1538889690), 1538900490);
        TZ_CHECK(from_local("Asia/Gaza", 1538900490), 1538889690);
        TZ_CHECK(from_utc("Asia/Gaza", 1430386573), 1430397373);
        TZ_CHECK(from_local("Asia/Gaza", 1430397373), 1430386573);
        TZ_CHECK(from_utc("Asia/Gaza", 1594730370), 1594741170);
        TZ_CHECK(from_local("Asia/Gaza", 1594741170), 1594730370);
        TZ_CHECK(from_utc("Asia/Gaza", 1509297555), 1509304755);
        TZ_CHECK(from_local("Asia/Gaza", 1509304755), 1509297555);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Gaza" << std::endl;
    }
    if (has_timezone("Asia/Harbin")) {
        TZ_CHECK(from_utc("Asia/Harbin", 1524803821), 1524832621);
        TZ_CHECK(from_local("Asia/Harbin", 1524832621), 1524803821);
        TZ_CHECK(from_utc("Asia/Harbin", 1559916395), 1559945195);
        TZ_CHECK(from_local("Asia/Harbin", 1559945195), 1559916395);
        TZ_CHECK(from_utc("Asia/Harbin", 1425977108), 1426005908);
        TZ_CHECK(from_local("Asia/Harbin", 1426005908), 1425977108);
        TZ_CHECK(from_utc("Asia/Harbin", 1506269735), 1506298535);
        TZ_CHECK(from_local("Asia/Harbin", 1506298535), 1506269735);
        TZ_CHECK(from_utc("Asia/Harbin", 1550891721), 1550920521);
        TZ_CHECK(from_local("Asia/Harbin", 1550920521), 1550891721);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Harbin" << std::endl;
    }
    if (has_timezone("Asia/Hebron")) {
        TZ_CHECK(from_utc("Asia/Hebron", 1585979384), 1585990184);
        TZ_CHECK(from_local("Asia/Hebron", 1585990184), 1585979384);
        TZ_CHECK(from_utc("Asia/Hebron", 1566530394), 1566541194);
        TZ_CHECK(from_local("Asia/Hebron", 1566541194), 1566530394);
        TZ_CHECK(from_utc("Asia/Hebron", 1436070798), 1436081598);
        TZ_CHECK(from_local("Asia/Hebron", 1436081598), 1436070798);
        TZ_CHECK(from_utc("Asia/Hebron", 1543418388), 1543425588);
        TZ_CHECK(from_local("Asia/Hebron", 1543425588), 1543418388);
        TZ_CHECK(from_utc("Asia/Hebron", 1512662776), 1512669976);
        TZ_CHECK(from_local("Asia/Hebron", 1512669976), 1512662776);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hebron" << std::endl;
    }
    if (has_timezone("Asia/Ho_Chi_Minh")) {
        TZ_CHECK(from_utc("Asia/Ho_Chi_Minh", 1443152424), 1443177624);
        TZ_CHECK(from_local("Asia/Ho_Chi_Minh", 1443177624), 1443152424);
        TZ_CHECK(from_utc("Asia/Ho_Chi_Minh", 1462430407), 1462455607);
        TZ_CHECK(from_local("Asia/Ho_Chi_Minh", 1462455607), 1462430407);
        TZ_CHECK(from_utc("Asia/Ho_Chi_Minh", 1582844474), 1582869674);
        TZ_CHECK(from_local("Asia/Ho_Chi_Minh", 1582869674), 1582844474);
        TZ_CHECK(from_utc("Asia/Ho_Chi_Minh", 1421805498), 1421830698);
        TZ_CHECK(from_local("Asia/Ho_Chi_Minh", 1421830698), 1421805498);
        TZ_CHECK(from_utc("Asia/Ho_Chi_Minh", 1506918834), 1506944034);
        TZ_CHECK(from_local("Asia/Ho_Chi_Minh", 1506944034), 1506918834);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ho_Chi_Minh" << std::endl;
    }
    if (has_timezone("Asia/Hong_Kong")) {
        TZ_CHECK(from_utc("Asia/Hong_Kong", 1551572422), 1551601222);
        TZ_CHECK(from_local("Asia/Hong_Kong", 1551601222), 1551572422);
        TZ_CHECK(from_utc("Asia/Hong_Kong", 1463958352), 1463987152);
        TZ_CHECK(from_local("Asia/Hong_Kong", 1463987152), 1463958352);
        TZ_CHECK(from_utc("Asia/Hong_Kong", 1445237826), 1445266626);
        TZ_CHECK(from_local("Asia/Hong_Kong", 1445266626), 1445237826);
        TZ_CHECK(from_utc("Asia/Hong_Kong", 1568418321), 1568447121);
        TZ_CHECK(from_local("Asia/Hong_Kong", 1568447121), 1568418321);
        TZ_CHECK(from_utc("Asia/Hong_Kong", 1487885255), 1487914055);
        TZ_CHECK(from_local("Asia/Hong_Kong", 1487914055), 1487885255);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hong_Kong" << std::endl;
    }
    if (has_timezone("Asia/Hovd")) {
        TZ_CHECK(from_utc("Asia/Hovd", 1512707195), 1512732395);
        TZ_CHECK(from_local("Asia/Hovd", 1512732395), 1512707195);
        TZ_CHECK(from_utc("Asia/Hovd", 1514438144), 1514463344);
        TZ_CHECK(from_local("Asia/Hovd", 1514463344), 1514438144);
        TZ_CHECK(from_utc("Asia/Hovd", 1507544177), 1507569377);
        TZ_CHECK(from_local("Asia/Hovd", 1507569377), 1507544177);
        TZ_CHECK(from_utc("Asia/Hovd", 1430030041), 1430058841);
        TZ_CHECK(from_local("Asia/Hovd", 1430058841), 1430030041);
        TZ_CHECK(from_utc("Asia/Hovd", 1603130081), 1603155281);
        TZ_CHECK(from_local("Asia/Hovd", 1603155281), 1603130081);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hovd" << std::endl;
    }
    if (has_timezone("Asia/Irkutsk")) {
        TZ_CHECK(from_utc("Asia/Irkutsk", 1445259275), 1445288075);
        TZ_CHECK(from_local("Asia/Irkutsk", 1445288075), 1445259275);
        TZ_CHECK(from_utc("Asia/Irkutsk", 1433672298), 1433701098);
        TZ_CHECK(from_local("Asia/Irkutsk", 1433701098), 1433672298);
        TZ_CHECK(from_utc("Asia/Irkutsk", 1424860507), 1424889307);
        TZ_CHECK(from_local("Asia/Irkutsk", 1424889307), 1424860507);
        TZ_CHECK(from_utc("Asia/Irkutsk", 1486840278), 1486869078);
        TZ_CHECK(from_local("Asia/Irkutsk", 1486869078), 1486840278);
        TZ_CHECK(from_utc("Asia/Irkutsk", 1578875714), 1578904514);
        TZ_CHECK(from_local("Asia/Irkutsk", 1578904514), 1578875714);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Irkutsk" << std::endl;
    }
    if (has_timezone("Asia/Istanbul")) {
        TZ_CHECK(from_utc("Asia/Istanbul", 1474314291), 1474325091);
        TZ_CHECK(from_local("Asia/Istanbul", 1474325091), 1474314291);
        TZ_CHECK(from_utc("Asia/Istanbul", 1527023873), 1527034673);
        TZ_CHECK(from_local("Asia/Istanbul", 1527034673), 1527023873);
        TZ_CHECK(from_utc("Asia/Istanbul", 1546564598), 1546575398);
        TZ_CHECK(from_local("Asia/Istanbul", 1546575398), 1546564598);
        TZ_CHECK(from_utc("Asia/Istanbul", 1475597042), 1475607842);
        TZ_CHECK(from_local("Asia/Istanbul", 1475607842), 1475597042);
        TZ_CHECK(from_utc("Asia/Istanbul", 1445251115), 1445261915);
        TZ_CHECK(from_local("Asia/Istanbul", 1445261915), 1445251115);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Istanbul" << std::endl;
    }
    if (has_timezone("Asia/Jakarta")) {
        TZ_CHECK(from_utc("Asia/Jakarta", 1417220514), 1417245714);
        TZ_CHECK(from_local("Asia/Jakarta", 1417245714), 1417220514);
        TZ_CHECK(from_utc("Asia/Jakarta", 1614826151), 1614851351);
        TZ_CHECK(from_local("Asia/Jakarta", 1614851351), 1614826151);
        TZ_CHECK(from_utc("Asia/Jakarta", 1456227695), 1456252895);
        TZ_CHECK(from_local("Asia/Jakarta", 1456252895), 1456227695);
        TZ_CHECK(from_utc("Asia/Jakarta", 1595962252), 1595987452);
        TZ_CHECK(from_local("Asia/Jakarta", 1595987452), 1595962252);
        TZ_CHECK(from_utc("Asia/Jakarta", 1537835523), 1537860723);
        TZ_CHECK(from_local("Asia/Jakarta", 1537860723), 1537835523);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jakarta" << std::endl;
    }
    if (has_timezone("Asia/Jayapura")) {
        TZ_CHECK(from_utc("Asia/Jayapura", 1581164405), 1581196805);
        TZ_CHECK(from_local("Asia/Jayapura", 1581196805), 1581164405);
        TZ_CHECK(from_utc("Asia/Jayapura", 1529145225), 1529177625);
        TZ_CHECK(from_local("Asia/Jayapura", 1529177625), 1529145225);
        TZ_CHECK(from_utc("Asia/Jayapura", 1487898011), 1487930411);
        TZ_CHECK(from_local("Asia/Jayapura", 1487930411), 1487898011);
        TZ_CHECK(from_utc("Asia/Jayapura", 1586789580), 1586821980);
        TZ_CHECK(from_local("Asia/Jayapura", 1586821980), 1586789580);
        TZ_CHECK(from_utc("Asia/Jayapura", 1521559273), 1521591673);
        TZ_CHECK(from_local("Asia/Jayapura", 1521591673), 1521559273);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jayapura" << std::endl;
    }
    if (has_timezone("Asia/Jerusalem")) {
        TZ_CHECK(from_utc("Asia/Jerusalem", 1416172745), 1416179945);
        TZ_CHECK(from_local("Asia/Jerusalem", 1416179945), 1416172745);
        TZ_CHECK(from_utc("Asia/Jerusalem", 1415847567), 1415854767);
        TZ_CHECK(from_local("Asia/Jerusalem", 1415854767), 1415847567);
        TZ_CHECK(from_utc("Asia/Jerusalem", 1497338805), 1497349605);
        TZ_CHECK(from_local("Asia/Jerusalem", 1497349605), 1497338805);
        TZ_CHECK(from_utc("Asia/Jerusalem", 1529442252), 1529453052);
        TZ_CHECK(from_local("Asia/Jerusalem", 1529453052), 1529442252);
        TZ_CHECK(from_utc("Asia/Jerusalem", 1582451276), 1582458476);
        TZ_CHECK(from_local("Asia/Jerusalem", 1582458476), 1582451276);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jerusalem" << std::endl;
    }
    if (has_timezone("Asia/Kabul")) {
        TZ_CHECK(from_utc("Asia/Kabul", 1464299946), 1464316146);
        TZ_CHECK(from_local("Asia/Kabul", 1464316146), 1464299946);
        TZ_CHECK(from_utc("Asia/Kabul", 1566196815), 1566213015);
        TZ_CHECK(from_local("Asia/Kabul", 1566213015), 1566196815);
        TZ_CHECK(from_utc("Asia/Kabul", 1481198455), 1481214655);
        TZ_CHECK(from_local("Asia/Kabul", 1481214655), 1481198455);
        TZ_CHECK(from_utc("Asia/Kabul", 1462397071), 1462413271);
        TZ_CHECK(from_local("Asia/Kabul", 1462413271), 1462397071);
        TZ_CHECK(from_utc("Asia/Kabul", 1489298219), 1489314419);
        TZ_CHECK(from_local("Asia/Kabul", 1489314419), 1489298219);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kabul" << std::endl;
    }
    if (has_timezone("Asia/Kamchatka")) {
        TZ_CHECK(from_utc("Asia/Kamchatka", 1580009006), 1580052206);
        TZ_CHECK(from_local("Asia/Kamchatka", 1580052206), 1580009006);
        TZ_CHECK(from_utc("Asia/Kamchatka", 1547804611), 1547847811);
        TZ_CHECK(from_local("Asia/Kamchatka", 1547847811), 1547804611);
        TZ_CHECK(from_utc("Asia/Kamchatka", 1518189295), 1518232495);
        TZ_CHECK(from_local("Asia/Kamchatka", 1518232495), 1518189295);
        TZ_CHECK(from_utc("Asia/Kamchatka", 1616707624), 1616750824);
        TZ_CHECK(from_local("Asia/Kamchatka", 1616750824), 1616707624);
        TZ_CHECK(from_utc("Asia/Kamchatka", 1527359227), 1527402427);
        TZ_CHECK(from_local("Asia/Kamchatka", 1527402427), 1527359227);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kamchatka" << std::endl;
    }
    if (has_timezone("Asia/Karachi")) {
        TZ_CHECK(from_utc("Asia/Karachi", 1497323455), 1497341455);
        TZ_CHECK(from_local("Asia/Karachi", 1497341455), 1497323455);
        TZ_CHECK(from_utc("Asia/Karachi", 1513374982), 1513392982);
        TZ_CHECK(from_local("Asia/Karachi", 1513392982), 1513374982);
        TZ_CHECK(from_utc("Asia/Karachi", 1471915014), 1471933014);
        TZ_CHECK(from_local("Asia/Karachi", 1471933014), 1471915014);
        TZ_CHECK(from_utc("Asia/Karachi", 1543510963), 1543528963);
        TZ_CHECK(from_local("Asia/Karachi", 1543528963), 1543510963);
        TZ_CHECK(from_utc("Asia/Karachi", 1434139711), 1434157711);
        TZ_CHECK(from_local("Asia/Karachi", 1434157711), 1434139711);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Karachi" << std::endl;
    }
    if (has_timezone("Asia/Kashgar")) {
        TZ_CHECK(from_utc("Asia/Kashgar", 1461396329), 1461417929);
        TZ_CHECK(from_local("Asia/Kashgar", 1461417929), 1461396329);
        TZ_CHECK(from_utc("Asia/Kashgar", 1539873205), 1539894805);
        TZ_CHECK(from_local("Asia/Kashgar", 1539894805), 1539873205);
        TZ_CHECK(from_utc("Asia/Kashgar", 1603700486), 1603722086);
        TZ_CHECK(from_local("Asia/Kashgar", 1603722086), 1603700486);
        TZ_CHECK(from_utc("Asia/Kashgar", 1491799431), 1491821031);
        TZ_CHECK(from_local("Asia/Kashgar", 1491821031), 1491799431);
        TZ_CHECK(from_utc("Asia/Kashgar", 1429872618), 1429894218);
        TZ_CHECK(from_local("Asia/Kashgar", 1429894218), 1429872618);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kashgar" << std::endl;
    }
    if (has_timezone("Asia/Kathmandu")) {
        TZ_CHECK(from_utc("Asia/Kathmandu", 1587360394), 1587381094);
        TZ_CHECK(from_local("Asia/Kathmandu", 1587381094), 1587360394);
        TZ_CHECK(from_utc("Asia/Kathmandu", 1468012501), 1468033201);
        TZ_CHECK(from_local("Asia/Kathmandu", 1468033201), 1468012501);
        TZ_CHECK(from_utc("Asia/Kathmandu", 1516118243), 1516138943);
        TZ_CHECK(from_local("Asia/Kathmandu", 1516138943), 1516118243);
        TZ_CHECK(from_utc("Asia/Kathmandu", 1534522465), 1534543165);
        TZ_CHECK(from_local("Asia/Kathmandu", 1534543165), 1534522465);
        TZ_CHECK(from_utc("Asia/Kathmandu", 1534502256), 1534522956);
        TZ_CHECK(from_local("Asia/Kathmandu", 1534522956), 1534502256);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kathmandu" << std::endl;
    }
    if (has_timezone("Asia/Katmandu")) {
        TZ_CHECK(from_utc("Asia/Katmandu", 1431175349), 1431196049);
        TZ_CHECK(from_local("Asia/Katmandu", 1431196049), 1431175349);
        TZ_CHECK(from_utc("Asia/Katmandu", 1542245462), 1542266162);
        TZ_CHECK(from_local("Asia/Katmandu", 1542266162), 1542245462);
        TZ_CHECK(from_utc("Asia/Katmandu", 1522182435), 1522203135);
        TZ_CHECK(from_local("Asia/Katmandu", 1522203135), 1522182435);
        TZ_CHECK(from_utc("Asia/Katmandu", 1624225913), 1624246613);
        TZ_CHECK(from_local("Asia/Katmandu", 1624246613), 1624225913);
        TZ_CHECK(from_utc("Asia/Katmandu", 1412618181), 1412638881);
        TZ_CHECK(from_local("Asia/Katmandu", 1412638881), 1412618181);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Katmandu" << std::endl;
    }
    if (has_timezone("Asia/Khandyga")) {
        TZ_CHECK(from_utc("Asia/Khandyga", 1531841716), 1531874116);
        TZ_CHECK(from_local("Asia/Khandyga", 1531874116), 1531841716);
        TZ_CHECK(from_utc("Asia/Khandyga", 1552700368), 1552732768);
        TZ_CHECK(from_local("Asia/Khandyga", 1552732768), 1552700368);
        TZ_CHECK(from_utc("Asia/Khandyga", 1550342718), 1550375118);
        TZ_CHECK(from_local("Asia/Khandyga", 1550375118), 1550342718);
        TZ_CHECK(from_utc("Asia/Khandyga", 1434262903), 1434295303);
        TZ_CHECK(from_local("Asia/Khandyga", 1434295303), 1434262903);
        TZ_CHECK(from_utc("Asia/Khandyga", 1436959193), 1436991593);
        TZ_CHECK(from_local("Asia/Khandyga", 1436991593), 1436959193);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Khandyga" << std::endl;
    }
    if (has_timezone("Asia/Kolkata")) {
        TZ_CHECK(from_utc("Asia/Kolkata", 1442147262), 1442167062);
        TZ_CHECK(from_local("Asia/Kolkata", 1442167062), 1442147262);
        TZ_CHECK(from_utc("Asia/Kolkata", 1611477062), 1611496862);
        TZ_CHECK(from_local("Asia/Kolkata", 1611496862), 1611477062);
        TZ_CHECK(from_utc("Asia/Kolkata", 1518645713), 1518665513);
        TZ_CHECK(from_local("Asia/Kolkata", 1518665513), 1518645713);
        TZ_CHECK(from_utc("Asia/Kolkata", 1424983171), 1425002971);
        TZ_CHECK(from_local("Asia/Kolkata", 1425002971), 1424983171);
        TZ_CHECK(from_utc("Asia/Kolkata", 1576045757), 1576065557);
        TZ_CHECK(from_local("Asia/Kolkata", 1576065557), 1576045757);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kolkata" << std::endl;
    }
    if (has_timezone("Asia/Krasnoyarsk")) {
        TZ_CHECK(from_utc("Asia/Krasnoyarsk", 1421716630), 1421741830);
        TZ_CHECK(from_local("Asia/Krasnoyarsk", 1421741830), 1421716630);
        TZ_CHECK(from_utc("Asia/Krasnoyarsk", 1464850977), 1464876177);
        TZ_CHECK(from_local("Asia/Krasnoyarsk", 1464876177), 1464850977);
        TZ_CHECK(from_utc("Asia/Krasnoyarsk", 1449242224), 1449267424);
        TZ_CHECK(from_local("Asia/Krasnoyarsk", 1449267424), 1449242224);
        TZ_CHECK(from_utc("Asia/Krasnoyarsk", 1469608074), 1469633274);
        TZ_CHECK(from_local("Asia/Krasnoyarsk", 1469633274), 1469608074);
        TZ_CHECK(from_utc("Asia/Krasnoyarsk", 1577479501), 1577504701);
        TZ_CHECK(from_local("Asia/Krasnoyarsk", 1577504701), 1577479501);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Krasnoyarsk" << std::endl;
    }
    if (has_timezone("Asia/Kuala_Lumpur")) {
        TZ_CHECK(from_utc("Asia/Kuala_Lumpur", 1477181748), 1477210548);
        TZ_CHECK(from_local("Asia/Kuala_Lumpur", 1477210548), 1477181748);
        TZ_CHECK(from_utc("Asia/Kuala_Lumpur", 1436103349), 1436132149);
        TZ_CHECK(from_local("Asia/Kuala_Lumpur", 1436132149), 1436103349);
        TZ_CHECK(from_utc("Asia/Kuala_Lumpur", 1463301107), 1463329907);
        TZ_CHECK(from_local("Asia/Kuala_Lumpur", 1463329907), 1463301107);
        TZ_CHECK(from_utc("Asia/Kuala_Lumpur", 1483030179), 1483058979);
        TZ_CHECK(from_local("Asia/Kuala_Lumpur", 1483058979), 1483030179);
        TZ_CHECK(from_utc("Asia/Kuala_Lumpur", 1609482170), 1609510970);
        TZ_CHECK(from_local("Asia/Kuala_Lumpur", 1609510970), 1609482170);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuala_Lumpur" << std::endl;
    }
    if (has_timezone("Asia/Kuching")) {
        TZ_CHECK(from_utc("Asia/Kuching", 1430474228), 1430503028);
        TZ_CHECK(from_local("Asia/Kuching", 1430503028), 1430474228);
        TZ_CHECK(from_utc("Asia/Kuching", 1501978790), 1502007590);
        TZ_CHECK(from_local("Asia/Kuching", 1502007590), 1501978790);
        TZ_CHECK(from_utc("Asia/Kuching", 1629482633), 1629511433);
        TZ_CHECK(from_local("Asia/Kuching", 1629511433), 1629482633);
        TZ_CHECK(from_utc("Asia/Kuching", 1570444821), 1570473621);
        TZ_CHECK(from_local("Asia/Kuching", 1570473621), 1570444821);
        TZ_CHECK(from_utc("Asia/Kuching", 1427314611), 1427343411);
        TZ_CHECK(from_local("Asia/Kuching", 1427343411), 1427314611);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuching" << std::endl;
    }
    if (has_timezone("Asia/Kuwait")) {
        TZ_CHECK(from_utc("Asia/Kuwait", 1466938437), 1466949237);
        TZ_CHECK(from_local("Asia/Kuwait", 1466949237), 1466938437);
        TZ_CHECK(from_utc("Asia/Kuwait", 1511629376), 1511640176);
        TZ_CHECK(from_local("Asia/Kuwait", 1511640176), 1511629376);
        TZ_CHECK(from_utc("Asia/Kuwait", 1534875513), 1534886313);
        TZ_CHECK(from_local("Asia/Kuwait", 1534886313), 1534875513);
        TZ_CHECK(from_utc("Asia/Kuwait", 1562761943), 1562772743);
        TZ_CHECK(from_local("Asia/Kuwait", 1562772743), 1562761943);
        TZ_CHECK(from_utc("Asia/Kuwait", 1487175337), 1487186137);
        TZ_CHECK(from_local("Asia/Kuwait", 1487186137), 1487175337);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuwait" << std::endl;
    }
    if (has_timezone("Asia/Macao")) {
        TZ_CHECK(from_utc("Asia/Macao", 1622633812), 1622662612);
        TZ_CHECK(from_local("Asia/Macao", 1622662612), 1622633812);
        TZ_CHECK(from_utc("Asia/Macao", 1460462019), 1460490819);
        TZ_CHECK(from_local("Asia/Macao", 1460490819), 1460462019);
        TZ_CHECK(from_utc("Asia/Macao", 1441143668), 1441172468);
        TZ_CHECK(from_local("Asia/Macao", 1441172468), 1441143668);
        TZ_CHECK(from_utc("Asia/Macao", 1441653430), 1441682230);
        TZ_CHECK(from_local("Asia/Macao", 1441682230), 1441653430);
        TZ_CHECK(from_utc("Asia/Macao", 1434068286), 1434097086);
        TZ_CHECK(from_local("Asia/Macao", 1434097086), 1434068286);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Macao" << std::endl;
    }
    if (has_timezone("Asia/Macau")) {
        TZ_CHECK(from_utc("Asia/Macau", 1528370621), 1528399421);
        TZ_CHECK(from_local("Asia/Macau", 1528399421), 1528370621);
        TZ_CHECK(from_utc("Asia/Macau", 1625942640), 1625971440);
        TZ_CHECK(from_local("Asia/Macau", 1625971440), 1625942640);
        TZ_CHECK(from_utc("Asia/Macau", 1529855023), 1529883823);
        TZ_CHECK(from_local("Asia/Macau", 1529883823), 1529855023);
        TZ_CHECK(from_utc("Asia/Macau", 1437425842), 1437454642);
        TZ_CHECK(from_local("Asia/Macau", 1437454642), 1437425842);
        TZ_CHECK(from_utc("Asia/Macau", 1595350726), 1595379526);
        TZ_CHECK(from_local("Asia/Macau", 1595379526), 1595350726);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Macau" << std::endl;
    }
    if (has_timezone("Asia/Magadan")) {
        TZ_CHECK(from_utc("Asia/Magadan", 1455155703), 1455191703);
        TZ_CHECK(from_local("Asia/Magadan", 1455191703), 1455155703);
        TZ_CHECK(from_utc("Asia/Magadan", 1477188898), 1477228498);
        TZ_CHECK(from_local("Asia/Magadan", 1477228498), 1477188898);
        TZ_CHECK(from_utc("Asia/Magadan", 1481252679), 1481292279);
        TZ_CHECK(from_local("Asia/Magadan", 1481292279), 1481252679);
        TZ_CHECK(from_utc("Asia/Magadan", 1570609804), 1570649404);
        TZ_CHECK(from_local("Asia/Magadan", 1570649404), 1570609804);
        TZ_CHECK(from_utc("Asia/Magadan", 1575709419), 1575749019);
        TZ_CHECK(from_local("Asia/Magadan", 1575749019), 1575709419);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Magadan" << std::endl;
    }
    if (has_timezone("Asia/Makassar")) {
        TZ_CHECK(from_utc("Asia/Makassar", 1613850552), 1613879352);
        TZ_CHECK(from_local("Asia/Makassar", 1613879352), 1613850552);
        TZ_CHECK(from_utc("Asia/Makassar", 1629076981), 1629105781);
        TZ_CHECK(from_local("Asia/Makassar", 1629105781), 1629076981);
        TZ_CHECK(from_utc("Asia/Makassar", 1535044836), 1535073636);
        TZ_CHECK(from_local("Asia/Makassar", 1535073636), 1535044836);
        TZ_CHECK(from_utc("Asia/Makassar", 1578931703), 1578960503);
        TZ_CHECK(from_local("Asia/Makassar", 1578960503), 1578931703);
        TZ_CHECK(from_utc("Asia/Makassar", 1609264115), 1609292915);
        TZ_CHECK(from_local("Asia/Makassar", 1609292915), 1609264115);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Makassar" << std::endl;
    }
    if (has_timezone("Asia/Manila")) {
        TZ_CHECK(from_utc("Asia/Manila", 1548690508), 1548719308);
        TZ_CHECK(from_local("Asia/Manila", 1548719308), 1548690508);
        TZ_CHECK(from_utc("Asia/Manila", 1503229897), 1503258697);
        TZ_CHECK(from_local("Asia/Manila", 1503258697), 1503229897);
        TZ_CHECK(from_utc("Asia/Manila", 1421336003), 1421364803);
        TZ_CHECK(from_local("Asia/Manila", 1421364803), 1421336003);
        TZ_CHECK(from_utc("Asia/Manila", 1506969488), 1506998288);
        TZ_CHECK(from_local("Asia/Manila", 1506998288), 1506969488);
        TZ_CHECK(from_utc("Asia/Manila", 1604425424), 1604454224);
        TZ_CHECK(from_local("Asia/Manila", 1604454224), 1604425424);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Manila" << std::endl;
    }
    if (has_timezone("Asia/Muscat")) {
        TZ_CHECK(from_utc("Asia/Muscat", 1551902176), 1551916576);
        TZ_CHECK(from_local("Asia/Muscat", 1551916576), 1551902176);
        TZ_CHECK(from_utc("Asia/Muscat", 1462883082), 1462897482);
        TZ_CHECK(from_local("Asia/Muscat", 1462897482), 1462883082);
        TZ_CHECK(from_utc("Asia/Muscat", 1488596651), 1488611051);
        TZ_CHECK(from_local("Asia/Muscat", 1488611051), 1488596651);
        TZ_CHECK(from_utc("Asia/Muscat", 1450503538), 1450517938);
        TZ_CHECK(from_local("Asia/Muscat", 1450517938), 1450503538);
        TZ_CHECK(from_utc("Asia/Muscat", 1435036941), 1435051341);
        TZ_CHECK(from_local("Asia/Muscat", 1435051341), 1435036941);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Muscat" << std::endl;
    }
    if (has_timezone("Asia/Nicosia")) {
        TZ_CHECK(from_utc("Asia/Nicosia", 1548822521), 1548829721);
        TZ_CHECK(from_local("Asia/Nicosia", 1548829721), 1548822521);
        TZ_CHECK(from_utc("Asia/Nicosia", 1438568522), 1438579322);
        TZ_CHECK(from_local("Asia/Nicosia", 1438579322), 1438568522);
        TZ_CHECK(from_utc("Asia/Nicosia", 1468108611), 1468119411);
        TZ_CHECK(from_local("Asia/Nicosia", 1468119411), 1468108611);
        TZ_CHECK(from_utc("Asia/Nicosia", 1449441251), 1449448451);
        TZ_CHECK(from_local("Asia/Nicosia", 1449448451), 1449441251);
        TZ_CHECK(from_utc("Asia/Nicosia", 1483050278), 1483057478);
        TZ_CHECK(from_local("Asia/Nicosia", 1483057478), 1483050278);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Nicosia" << std::endl;
    }
    if (has_timezone("Asia/Novokuznetsk")) {
        TZ_CHECK(from_utc("Asia/Novokuznetsk", 1580465450), 1580490650);
        TZ_CHECK(from_local("Asia/Novokuznetsk", 1580490650), 1580465450);
        TZ_CHECK(from_utc("Asia/Novokuznetsk", 1457118118), 1457143318);
        TZ_CHECK(from_local("Asia/Novokuznetsk", 1457143318), 1457118118);
        TZ_CHECK(from_utc("Asia/Novokuznetsk", 1556917756), 1556942956);
        TZ_CHECK(from_local("Asia/Novokuznetsk", 1556942956), 1556917756);
        TZ_CHECK(from_utc("Asia/Novokuznetsk", 1428701870), 1428727070);
        TZ_CHECK(from_local("Asia/Novokuznetsk", 1428727070), 1428701870);
        TZ_CHECK(from_utc("Asia/Novokuznetsk", 1450654609), 1450679809);
        TZ_CHECK(from_local("Asia/Novokuznetsk", 1450679809), 1450654609);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Novokuznetsk" << std::endl;
    }
    if (has_timezone("Asia/Novosibirsk")) {
        TZ_CHECK(from_utc("Asia/Novosibirsk", 1614697344), 1614722544);
        TZ_CHECK(from_local("Asia/Novosibirsk", 1614722544), 1614697344);
        TZ_CHECK(from_utc("Asia/Novosibirsk", 1475041777), 1475066977);
        TZ_CHECK(from_local("Asia/Novosibirsk", 1475066977), 1475041777);
        TZ_CHECK(from_utc("Asia/Novosibirsk", 1528549570), 1528574770);
        TZ_CHECK(from_local("Asia/Novosibirsk", 1528574770), 1528549570);
        TZ_CHECK(from_utc("Asia/Novosibirsk", 1435427861), 1435449461);
        TZ_CHECK(from_local("Asia/Novosibirsk", 1435449461), 1435427861);
        TZ_CHECK(from_utc("Asia/Novosibirsk", 1410045541), 1410070741);
        TZ_CHECK(from_local("Asia/Novosibirsk", 1410070741), 1410045541);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Novosibirsk" << std::endl;
    }
    if (has_timezone("Asia/Omsk")) {
        TZ_CHECK(from_utc("Asia/Omsk", 1487536645), 1487558245);
        TZ_CHECK(from_local("Asia/Omsk", 1487558245), 1487536645);
        TZ_CHECK(from_utc("Asia/Omsk", 1422369807), 1422391407);
        TZ_CHECK(from_local("Asia/Omsk", 1422391407), 1422369807);
        TZ_CHECK(from_utc("Asia/Omsk", 1550811389), 1550832989);
        TZ_CHECK(from_local("Asia/Omsk", 1550832989), 1550811389);
        TZ_CHECK(from_utc("Asia/Omsk", 1453466438), 1453488038);
        TZ_CHECK(from_local("Asia/Omsk", 1453488038), 1453466438);
        TZ_CHECK(from_utc("Asia/Omsk", 1626452325), 1626473925);
        TZ_CHECK(from_local("Asia/Omsk", 1626473925), 1626452325);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Omsk" << std::endl;
    }
    if (has_timezone("Asia/Oral")) {
        TZ_CHECK(from_utc("Asia/Oral", 1488420427), 1488438427);
        TZ_CHECK(from_local("Asia/Oral", 1488438427), 1488420427);
        TZ_CHECK(from_utc("Asia/Oral", 1444852038), 1444870038);
        TZ_CHECK(from_local("Asia/Oral", 1444870038), 1444852038);
        TZ_CHECK(from_utc("Asia/Oral", 1540211281), 1540229281);
        TZ_CHECK(from_local("Asia/Oral", 1540229281), 1540211281);
        TZ_CHECK(from_utc("Asia/Oral", 1556861506), 1556879506);
        TZ_CHECK(from_local("Asia/Oral", 1556879506), 1556861506);
        TZ_CHECK(from_utc("Asia/Oral", 1542610637), 1542628637);
        TZ_CHECK(from_local("Asia/Oral", 1542628637), 1542610637);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Oral" << std::endl;
    }
    if (has_timezone("Asia/Phnom_Penh")) {
        TZ_CHECK(from_utc("Asia/Phnom_Penh", 1617433651), 1617458851);
        TZ_CHECK(from_local("Asia/Phnom_Penh", 1617458851), 1617433651);
        TZ_CHECK(from_utc("Asia/Phnom_Penh", 1436848566), 1436873766);
        TZ_CHECK(from_local("Asia/Phnom_Penh", 1436873766), 1436848566);
        TZ_CHECK(from_utc("Asia/Phnom_Penh", 1499689978), 1499715178);
        TZ_CHECK(from_local("Asia/Phnom_Penh", 1499715178), 1499689978);
        TZ_CHECK(from_utc("Asia/Phnom_Penh", 1618425967), 1618451167);
        TZ_CHECK(from_local("Asia/Phnom_Penh", 1618451167), 1618425967);
        TZ_CHECK(from_utc("Asia/Phnom_Penh", 1523770908), 1523796108);
        TZ_CHECK(from_local("Asia/Phnom_Penh", 1523796108), 1523770908);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Phnom_Penh" << std::endl;
    }
    if (has_timezone("Asia/Pontianak")) {
        TZ_CHECK(from_utc("Asia/Pontianak", 1558390698), 1558415898);
        TZ_CHECK(from_local("Asia/Pontianak", 1558415898), 1558390698);
        TZ_CHECK(from_utc("Asia/Pontianak", 1555027084), 1555052284);
        TZ_CHECK(from_local("Asia/Pontianak", 1555052284), 1555027084);
        TZ_CHECK(from_utc("Asia/Pontianak", 1476550848), 1476576048);
        TZ_CHECK(from_local("Asia/Pontianak", 1476576048), 1476550848);
        TZ_CHECK(from_utc("Asia/Pontianak", 1623828042), 1623853242);
        TZ_CHECK(from_local("Asia/Pontianak", 1623853242), 1623828042);
        TZ_CHECK(from_utc("Asia/Pontianak", 1616668315), 1616693515);
        TZ_CHECK(from_local("Asia/Pontianak", 1616693515), 1616668315);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Pontianak" << std::endl;
    }
    if (has_timezone("Asia/Pyongyang")) {
        TZ_CHECK(from_utc("Asia/Pyongyang", 1463146447), 1463177047);
        TZ_CHECK(from_local("Asia/Pyongyang", 1463177047), 1463146447);
        TZ_CHECK(from_utc("Asia/Pyongyang", 1506668065), 1506698665);
        TZ_CHECK(from_local("Asia/Pyongyang", 1506698665), 1506668065);
        TZ_CHECK(from_utc("Asia/Pyongyang", 1529461296), 1529493696);
        TZ_CHECK(from_local("Asia/Pyongyang", 1529493696), 1529461296);
        TZ_CHECK(from_utc("Asia/Pyongyang", 1581109525), 1581141925);
        TZ_CHECK(from_local("Asia/Pyongyang", 1581141925), 1581109525);
        TZ_CHECK(from_utc("Asia/Pyongyang", 1445395305), 1445425905);
        TZ_CHECK(from_local("Asia/Pyongyang", 1445425905), 1445395305);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Pyongyang" << std::endl;
    }
    if (has_timezone("Asia/Qatar")) {
        TZ_CHECK(from_utc("Asia/Qatar", 1597157614), 1597168414);
        TZ_CHECK(from_local("Asia/Qatar", 1597168414), 1597157614);
        TZ_CHECK(from_utc("Asia/Qatar", 1553107035), 1553117835);
        TZ_CHECK(from_local("Asia/Qatar", 1553117835), 1553107035);
        TZ_CHECK(from_utc("Asia/Qatar", 1453029621), 1453040421);
        TZ_CHECK(from_local("Asia/Qatar", 1453040421), 1453029621);
        TZ_CHECK(from_utc("Asia/Qatar", 1425508951), 1425519751);
        TZ_CHECK(from_local("Asia/Qatar", 1425519751), 1425508951);
        TZ_CHECK(from_utc("Asia/Qatar", 1453245684), 1453256484);
        TZ_CHECK(from_local("Asia/Qatar", 1453256484), 1453245684);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Qatar" << std::endl;
    }
    if (has_timezone("Asia/Qyzylorda")) {
        TZ_CHECK(from_utc("Asia/Qyzylorda", 1514172853), 1514194453);
        TZ_CHECK(from_local("Asia/Qyzylorda", 1514194453), 1514172853);
        TZ_CHECK(from_utc("Asia/Qyzylorda", 1516095653), 1516117253);
        TZ_CHECK(from_local("Asia/Qyzylorda", 1516117253), 1516095653);
        TZ_CHECK(from_utc("Asia/Qyzylorda", 1514017826), 1514039426);
        TZ_CHECK(from_local("Asia/Qyzylorda", 1514039426), 1514017826);
        TZ_CHECK(from_utc("Asia/Qyzylorda", 1573091180), 1573109180);
        TZ_CHECK(from_local("Asia/Qyzylorda", 1573109180), 1573091180);
        TZ_CHECK(from_utc("Asia/Qyzylorda", 1462936629), 1462958229);
        TZ_CHECK(from_local("Asia/Qyzylorda", 1462958229), 1462936629);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Qyzylorda" << std::endl;
    }
    if (has_timezone("Asia/Rangoon")) {
        TZ_CHECK(from_utc("Asia/Rangoon", 1440183622), 1440207022);
        TZ_CHECK(from_local("Asia/Rangoon", 1440207022), 1440183622);
        TZ_CHECK(from_utc("Asia/Rangoon", 1438699758), 1438723158);
        TZ_CHECK(from_local("Asia/Rangoon", 1438723158), 1438699758);
        TZ_CHECK(from_utc("Asia/Rangoon", 1608784950), 1608808350);
        TZ_CHECK(from_local("Asia/Rangoon", 1608808350), 1608784950);
        TZ_CHECK(from_utc("Asia/Rangoon", 1607261034), 1607284434);
        TZ_CHECK(from_local("Asia/Rangoon", 1607284434), 1607261034);
        TZ_CHECK(from_utc("Asia/Rangoon", 1537894009), 1537917409);
        TZ_CHECK(from_local("Asia/Rangoon", 1537917409), 1537894009);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Rangoon" << std::endl;
    }
    if (has_timezone("Asia/Riyadh")) {
        TZ_CHECK(from_utc("Asia/Riyadh", 1410015396), 1410026196);
        TZ_CHECK(from_local("Asia/Riyadh", 1410026196), 1410015396);
        TZ_CHECK(from_utc("Asia/Riyadh", 1595675467), 1595686267);
        TZ_CHECK(from_local("Asia/Riyadh", 1595686267), 1595675467);
        TZ_CHECK(from_utc("Asia/Riyadh", 1551641594), 1551652394);
        TZ_CHECK(from_local("Asia/Riyadh", 1551652394), 1551641594);
        TZ_CHECK(from_utc("Asia/Riyadh", 1471711933), 1471722733);
        TZ_CHECK(from_local("Asia/Riyadh", 1471722733), 1471711933);
        TZ_CHECK(from_utc("Asia/Riyadh", 1547582414), 1547593214);
        TZ_CHECK(from_local("Asia/Riyadh", 1547593214), 1547582414);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Riyadh" << std::endl;
    }
    if (has_timezone("Asia/Saigon")) {
        TZ_CHECK(from_utc("Asia/Saigon", 1573623718), 1573648918);
        TZ_CHECK(from_local("Asia/Saigon", 1573648918), 1573623718);
        TZ_CHECK(from_utc("Asia/Saigon", 1494559323), 1494584523);
        TZ_CHECK(from_local("Asia/Saigon", 1494584523), 1494559323);
        TZ_CHECK(from_utc("Asia/Saigon", 1543873226), 1543898426);
        TZ_CHECK(from_local("Asia/Saigon", 1543898426), 1543873226);
        TZ_CHECK(from_utc("Asia/Saigon", 1559312518), 1559337718);
        TZ_CHECK(from_local("Asia/Saigon", 1559337718), 1559312518);
        TZ_CHECK(from_utc("Asia/Saigon", 1548230945), 1548256145);
        TZ_CHECK(from_local("Asia/Saigon", 1548256145), 1548230945);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Saigon" << std::endl;
    }
    if (has_timezone("Asia/Sakhalin")) {
        TZ_CHECK(from_utc("Asia/Sakhalin", 1450272763), 1450308763);
        TZ_CHECK(from_local("Asia/Sakhalin", 1450308763), 1450272763);
        TZ_CHECK(from_utc("Asia/Sakhalin", 1478521543), 1478561143);
        TZ_CHECK(from_local("Asia/Sakhalin", 1478561143), 1478521543);
        TZ_CHECK(from_utc("Asia/Sakhalin", 1498415747), 1498455347);
        TZ_CHECK(from_local("Asia/Sakhalin", 1498455347), 1498415747);
        TZ_CHECK(from_utc("Asia/Sakhalin", 1434208733), 1434244733);
        TZ_CHECK(from_local("Asia/Sakhalin", 1434244733), 1434208733);
        TZ_CHECK(from_utc("Asia/Sakhalin", 1485384254), 1485423854);
        TZ_CHECK(from_local("Asia/Sakhalin", 1485423854), 1485384254);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Sakhalin" << std::endl;
    }
    if (has_timezone("Asia/Samarkand")) {
        TZ_CHECK(from_utc("Asia/Samarkand", 1594732039), 1594750039);
        TZ_CHECK(from_local("Asia/Samarkand", 1594750039), 1594732039);
        TZ_CHECK(from_utc("Asia/Samarkand", 1491646996), 1491664996);
        TZ_CHECK(from_local("Asia/Samarkand", 1491664996), 1491646996);
        TZ_CHECK(from_utc("Asia/Samarkand", 1411507769), 1411525769);
        TZ_CHECK(from_local("Asia/Samarkand", 1411525769), 1411507769);
        TZ_CHECK(from_utc("Asia/Samarkand", 1485422679), 1485440679);
        TZ_CHECK(from_local("Asia/Samarkand", 1485440679), 1485422679);
        TZ_CHECK(from_utc("Asia/Samarkand", 1578619222), 1578637222);
        TZ_CHECK(from_local("Asia/Samarkand", 1578637222), 1578619222);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Samarkand" << std::endl;
    }
    if (has_timezone("Asia/Seoul")) {
        TZ_CHECK(from_utc("Asia/Seoul", 1506943627), 1506976027);
        TZ_CHECK(from_local("Asia/Seoul", 1506976027), 1506943627);
        TZ_CHECK(from_utc("Asia/Seoul", 1418895550), 1418927950);
        TZ_CHECK(from_local("Asia/Seoul", 1418927950), 1418895550);
        TZ_CHECK(from_utc("Asia/Seoul", 1521620561), 1521652961);
        TZ_CHECK(from_local("Asia/Seoul", 1521652961), 1521620561);
        TZ_CHECK(from_utc("Asia/Seoul", 1423145447), 1423177847);
        TZ_CHECK(from_local("Asia/Seoul", 1423177847), 1423145447);
        TZ_CHECK(from_utc("Asia/Seoul", 1531421497), 1531453897);
        TZ_CHECK(from_local("Asia/Seoul", 1531453897), 1531421497);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Seoul" << std::endl;
    }
    if (has_timezone("Asia/Shanghai")) {
        TZ_CHECK(from_utc("Asia/Shanghai", 1628727694), 1628756494);
        TZ_CHECK(from_local("Asia/Shanghai", 1628756494), 1628727694);
        TZ_CHECK(from_utc("Asia/Shanghai", 1410169727), 1410198527);
        TZ_CHECK(from_local("Asia/Shanghai", 1410198527), 1410169727);
        TZ_CHECK(from_utc("Asia/Shanghai", 1423994918), 1424023718);
        TZ_CHECK(from_local("Asia/Shanghai", 1424023718), 1423994918);
        TZ_CHECK(from_utc("Asia/Shanghai", 1439938236), 1439967036);
        TZ_CHECK(from_local("Asia/Shanghai", 1439967036), 1439938236);
        TZ_CHECK(from_utc("Asia/Shanghai", 1409825071), 1409853871);
        TZ_CHECK(from_local("Asia/Shanghai", 1409853871), 1409825071);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Shanghai" << std::endl;
    }
    if (has_timezone("Asia/Singapore")) {
        TZ_CHECK(from_utc("Asia/Singapore", 1568682759), 1568711559);
        TZ_CHECK(from_local("Asia/Singapore", 1568711559), 1568682759);
        TZ_CHECK(from_utc("Asia/Singapore", 1567257254), 1567286054);
        TZ_CHECK(from_local("Asia/Singapore", 1567286054), 1567257254);
        TZ_CHECK(from_utc("Asia/Singapore", 1626418894), 1626447694);
        TZ_CHECK(from_local("Asia/Singapore", 1626447694), 1626418894);
        TZ_CHECK(from_utc("Asia/Singapore", 1516754176), 1516782976);
        TZ_CHECK(from_local("Asia/Singapore", 1516782976), 1516754176);
        TZ_CHECK(from_utc("Asia/Singapore", 1594028256), 1594057056);
        TZ_CHECK(from_local("Asia/Singapore", 1594057056), 1594028256);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Singapore" << std::endl;
    }
    if (has_timezone("Asia/Srednekolymsk")) {
        TZ_CHECK(from_utc("Asia/Srednekolymsk", 1554328350), 1554367950);
        TZ_CHECK(from_local("Asia/Srednekolymsk", 1554367950), 1554328350);
        TZ_CHECK(from_utc("Asia/Srednekolymsk", 1429644113), 1429683713);
        TZ_CHECK(from_local("Asia/Srednekolymsk", 1429683713), 1429644113);
        TZ_CHECK(from_utc("Asia/Srednekolymsk", 1431076055), 1431115655);
        TZ_CHECK(from_local("Asia/Srednekolymsk", 1431115655), 1431076055);
        TZ_CHECK(from_utc("Asia/Srednekolymsk", 1491749719), 1491789319);
        TZ_CHECK(from_local("Asia/Srednekolymsk", 1491789319), 1491749719);
        TZ_CHECK(from_utc("Asia/Srednekolymsk", 1416044038), 1416083638);
        TZ_CHECK(from_local("Asia/Srednekolymsk", 1416083638), 1416044038);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Srednekolymsk" << std::endl;
    }
    if (has_timezone("Asia/Taipei")) {
        TZ_CHECK(from_utc("Asia/Taipei", 1596678909), 1596707709);
        TZ_CHECK(from_local("Asia/Taipei", 1596707709), 1596678909);
        TZ_CHECK(from_utc("Asia/Taipei", 1429140254), 1429169054);
        TZ_CHECK(from_local("Asia/Taipei", 1429169054), 1429140254);
        TZ_CHECK(from_utc("Asia/Taipei", 1516643845), 1516672645);
        TZ_CHECK(from_local("Asia/Taipei", 1516672645), 1516643845);
        TZ_CHECK(from_utc("Asia/Taipei", 1424948063), 1424976863);
        TZ_CHECK(from_local("Asia/Taipei", 1424976863), 1424948063);
        TZ_CHECK(from_utc("Asia/Taipei", 1599207371), 1599236171);
        TZ_CHECK(from_local("Asia/Taipei", 1599236171), 1599207371);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Taipei" << std::endl;
    }
    if (has_timezone("Asia/Tashkent")) {
        TZ_CHECK(from_utc("Asia/Tashkent", 1507938099), 1507956099);
        TZ_CHECK(from_local("Asia/Tashkent", 1507956099), 1507938099);
        TZ_CHECK(from_utc("Asia/Tashkent", 1585585568), 1585603568);
        TZ_CHECK(from_local("Asia/Tashkent", 1585603568), 1585585568);
        TZ_CHECK(from_utc("Asia/Tashkent", 1572349626), 1572367626);
        TZ_CHECK(from_local("Asia/Tashkent", 1572367626), 1572349626);
        TZ_CHECK(from_utc("Asia/Tashkent", 1600469551), 1600487551);
        TZ_CHECK(from_local("Asia/Tashkent", 1600487551), 1600469551);
        TZ_CHECK(from_utc("Asia/Tashkent", 1551315232), 1551333232);
        TZ_CHECK(from_local("Asia/Tashkent", 1551333232), 1551315232);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tashkent" << std::endl;
    }
    if (has_timezone("Asia/Tbilisi")) {
        TZ_CHECK(from_utc("Asia/Tbilisi", 1625828774), 1625843174);
        TZ_CHECK(from_local("Asia/Tbilisi", 1625843174), 1625828774);
        TZ_CHECK(from_utc("Asia/Tbilisi", 1575467370), 1575481770);
        TZ_CHECK(from_local("Asia/Tbilisi", 1575481770), 1575467370);
        TZ_CHECK(from_utc("Asia/Tbilisi", 1597099386), 1597113786);
        TZ_CHECK(from_local("Asia/Tbilisi", 1597113786), 1597099386);
        TZ_CHECK(from_utc("Asia/Tbilisi", 1494753953), 1494768353);
        TZ_CHECK(from_local("Asia/Tbilisi", 1494768353), 1494753953);
        TZ_CHECK(from_utc("Asia/Tbilisi", 1478556674), 1478571074);
        TZ_CHECK(from_local("Asia/Tbilisi", 1478571074), 1478556674);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tbilisi" << std::endl;
    }
    if (has_timezone("Asia/Tehran")) {
        TZ_CHECK(from_utc("Asia/Tehran", 1510562103), 1510574703);
        TZ_CHECK(from_local("Asia/Tehran", 1510574703), 1510562103);
        TZ_CHECK(from_utc("Asia/Tehran", 1469627464), 1469643664);
        TZ_CHECK(from_local("Asia/Tehran", 1469643664), 1469627464);
        TZ_CHECK(from_utc("Asia/Tehran", 1455970457), 1455983057);
        TZ_CHECK(from_local("Asia/Tehran", 1455983057), 1455970457);
        TZ_CHECK(from_utc("Asia/Tehran", 1488536735), 1488549335);
        TZ_CHECK(from_local("Asia/Tehran", 1488549335), 1488536735);
        TZ_CHECK(from_utc("Asia/Tehran", 1595265062), 1595281262);
        TZ_CHECK(from_local("Asia/Tehran", 1595281262), 1595265062);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tehran" << std::endl;
    }
    if (has_timezone("Asia/Tel_Aviv")) {
        TZ_CHECK(from_utc("Asia/Tel_Aviv", 1477005465), 1477016265);
        TZ_CHECK(from_local("Asia/Tel_Aviv", 1477016265), 1477005465);
        TZ_CHECK(from_utc("Asia/Tel_Aviv", 1470893912), 1470904712);
        TZ_CHECK(from_local("Asia/Tel_Aviv", 1470904712), 1470893912);
        TZ_CHECK(from_utc("Asia/Tel_Aviv", 1506996568), 1507007368);
        TZ_CHECK(from_local("Asia/Tel_Aviv", 1507007368), 1506996568);
        TZ_CHECK(from_utc("Asia/Tel_Aviv", 1459529791), 1459540591);
        TZ_CHECK(from_local("Asia/Tel_Aviv", 1459540591), 1459529791);
        TZ_CHECK(from_utc("Asia/Tel_Aviv", 1409830735), 1409841535);
        TZ_CHECK(from_local("Asia/Tel_Aviv", 1409841535), 1409830735);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tel_Aviv" << std::endl;
    }
    if (has_timezone("Asia/Thimbu")) {
        TZ_CHECK(from_utc("Asia/Thimbu", 1517964459), 1517986059);
        TZ_CHECK(from_local("Asia/Thimbu", 1517986059), 1517964459);
        TZ_CHECK(from_utc("Asia/Thimbu", 1506062680), 1506084280);
        TZ_CHECK(from_local("Asia/Thimbu", 1506084280), 1506062680);
        TZ_CHECK(from_utc("Asia/Thimbu", 1520264680), 1520286280);
        TZ_CHECK(from_local("Asia/Thimbu", 1520286280), 1520264680);
        TZ_CHECK(from_utc("Asia/Thimbu", 1630057334), 1630078934);
        TZ_CHECK(from_local("Asia/Thimbu", 1630078934), 1630057334);
        TZ_CHECK(from_utc("Asia/Thimbu", 1462971650), 1462993250);
        TZ_CHECK(from_local("Asia/Thimbu", 1462993250), 1462971650);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Thimbu" << std::endl;
    }
    if (has_timezone("Asia/Thimphu")) {
        TZ_CHECK(from_utc("Asia/Thimphu", 1439737595), 1439759195);
        TZ_CHECK(from_local("Asia/Thimphu", 1439759195), 1439737595);
        TZ_CHECK(from_utc("Asia/Thimphu", 1623317193), 1623338793);
        TZ_CHECK(from_local("Asia/Thimphu", 1623338793), 1623317193);
        TZ_CHECK(from_utc("Asia/Thimphu", 1589181685), 1589203285);
        TZ_CHECK(from_local("Asia/Thimphu", 1589203285), 1589181685);
        TZ_CHECK(from_utc("Asia/Thimphu", 1474635279), 1474656879);
        TZ_CHECK(from_local("Asia/Thimphu", 1474656879), 1474635279);
        TZ_CHECK(from_utc("Asia/Thimphu", 1608722246), 1608743846);
        TZ_CHECK(from_local("Asia/Thimphu", 1608743846), 1608722246);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Thimphu" << std::endl;
    }
    if (has_timezone("Asia/Tokyo")) {
        TZ_CHECK(from_utc("Asia/Tokyo", 1527765821), 1527798221);
        TZ_CHECK(from_local("Asia/Tokyo", 1527798221), 1527765821);
        TZ_CHECK(from_utc("Asia/Tokyo", 1426238224), 1426270624);
        TZ_CHECK(from_local("Asia/Tokyo", 1426270624), 1426238224);
        TZ_CHECK(from_utc("Asia/Tokyo", 1457651210), 1457683610);
        TZ_CHECK(from_local("Asia/Tokyo", 1457683610), 1457651210);
        TZ_CHECK(from_utc("Asia/Tokyo", 1508142265), 1508174665);
        TZ_CHECK(from_local("Asia/Tokyo", 1508174665), 1508142265);
        TZ_CHECK(from_utc("Asia/Tokyo", 1544794024), 1544826424);
        TZ_CHECK(from_local("Asia/Tokyo", 1544826424), 1544794024);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tokyo" << std::endl;
    }
    if (has_timezone("Asia/Tomsk")) {
        TZ_CHECK(from_utc("Asia/Tomsk", 1528092634), 1528117834);
        TZ_CHECK(from_local("Asia/Tomsk", 1528117834), 1528092634);
        TZ_CHECK(from_utc("Asia/Tomsk", 1551381958), 1551407158);
        TZ_CHECK(from_local("Asia/Tomsk", 1551407158), 1551381958);
        TZ_CHECK(from_utc("Asia/Tomsk", 1611386540), 1611411740);
        TZ_CHECK(from_local("Asia/Tomsk", 1611411740), 1611386540);
        TZ_CHECK(from_utc("Asia/Tomsk", 1602603541), 1602628741);
        TZ_CHECK(from_local("Asia/Tomsk", 1602628741), 1602603541);
        TZ_CHECK(from_utc("Asia/Tomsk", 1581255364), 1581280564);
        TZ_CHECK(from_local("Asia/Tomsk", 1581280564), 1581255364);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tomsk" << std::endl;
    }
    if (has_timezone("Asia/Ujung_Pandang")) {
        TZ_CHECK(from_utc("Asia/Ujung_Pandang", 1592422305), 1592451105);
        TZ_CHECK(from_local("Asia/Ujung_Pandang", 1592451105), 1592422305);
        TZ_CHECK(from_utc("Asia/Ujung_Pandang", 1456633850), 1456662650);
        TZ_CHECK(from_local("Asia/Ujung_Pandang", 1456662650), 1456633850);
        TZ_CHECK(from_utc("Asia/Ujung_Pandang", 1483219125), 1483247925);
        TZ_CHECK(from_local("Asia/Ujung_Pandang", 1483247925), 1483219125);
        TZ_CHECK(from_utc("Asia/Ujung_Pandang", 1477800352), 1477829152);
        TZ_CHECK(from_local("Asia/Ujung_Pandang", 1477829152), 1477800352);
        TZ_CHECK(from_utc("Asia/Ujung_Pandang", 1446077554), 1446106354);
        TZ_CHECK(from_local("Asia/Ujung_Pandang", 1446106354), 1446077554);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ujung_Pandang" << std::endl;
    }
    if (has_timezone("Asia/Ulaanbaatar")) {
        TZ_CHECK(from_utc("Asia/Ulaanbaatar", 1554893984), 1554922784);
        TZ_CHECK(from_local("Asia/Ulaanbaatar", 1554922784), 1554893984);
        TZ_CHECK(from_utc("Asia/Ulaanbaatar", 1516089769), 1516118569);
        TZ_CHECK(from_local("Asia/Ulaanbaatar", 1516118569), 1516089769);
        TZ_CHECK(from_utc("Asia/Ulaanbaatar", 1487614557), 1487643357);
        TZ_CHECK(from_local("Asia/Ulaanbaatar", 1487643357), 1487614557);
        TZ_CHECK(from_utc("Asia/Ulaanbaatar", 1541409699), 1541438499);
        TZ_CHECK(from_local("Asia/Ulaanbaatar", 1541438499), 1541409699);
        TZ_CHECK(from_utc("Asia/Ulaanbaatar", 1437499776), 1437532176);
        TZ_CHECK(from_local("Asia/Ulaanbaatar", 1437532176), 1437499776);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ulaanbaatar" << std::endl;
    }
    if (has_timezone("Asia/Ulan_Bator")) {
        TZ_CHECK(from_utc("Asia/Ulan_Bator", 1440375597), 1440407997);
        TZ_CHECK(from_local("Asia/Ulan_Bator", 1440407997), 1440375597);
        TZ_CHECK(from_utc("Asia/Ulan_Bator", 1612642894), 1612671694);
        TZ_CHECK(from_local("Asia/Ulan_Bator", 1612671694), 1612642894);
        TZ_CHECK(from_utc("Asia/Ulan_Bator", 1445344000), 1445372800);
        TZ_CHECK(from_local("Asia/Ulan_Bator", 1445372800), 1445344000);
        TZ_CHECK(from_utc("Asia/Ulan_Bator", 1588764400), 1588793200);
        TZ_CHECK(from_local("Asia/Ulan_Bator", 1588793200), 1588764400);
        TZ_CHECK(from_utc("Asia/Ulan_Bator", 1560859167), 1560887967);
        TZ_CHECK(from_local("Asia/Ulan_Bator", 1560887967), 1560859167);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ulan_Bator" << std::endl;
    }
    if (has_timezone("Asia/Urumqi")) {
        TZ_CHECK(from_utc("Asia/Urumqi", 1469145811), 1469167411);
        TZ_CHECK(from_local("Asia/Urumqi", 1469167411), 1469145811);
        TZ_CHECK(from_utc("Asia/Urumqi", 1612702988), 1612724588);
        TZ_CHECK(from_local("Asia/Urumqi", 1612724588), 1612702988);
        TZ_CHECK(from_utc("Asia/Urumqi", 1583298239), 1583319839);
        TZ_CHECK(from_local("Asia/Urumqi", 1583319839), 1583298239);
        TZ_CHECK(from_utc("Asia/Urumqi", 1595949680), 1595971280);
        TZ_CHECK(from_local("Asia/Urumqi", 1595971280), 1595949680);
        TZ_CHECK(from_utc("Asia/Urumqi", 1426836877), 1426858477);
        TZ_CHECK(from_local("Asia/Urumqi", 1426858477), 1426836877);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Urumqi" << std::endl;
    }
    if (has_timezone("Asia/Ust-Nera")) {
        TZ_CHECK(from_utc("Asia/Ust-Nera", 1619874268), 1619910268);
        TZ_CHECK(from_local("Asia/Ust-Nera", 1619910268), 1619874268);
        TZ_CHECK(from_utc("Asia/Ust-Nera", 1569735694), 1569771694);
        TZ_CHECK(from_local("Asia/Ust-Nera", 1569771694), 1569735694);
        TZ_CHECK(from_utc("Asia/Ust-Nera", 1471693477), 1471729477);
        TZ_CHECK(from_local("Asia/Ust-Nera", 1471729477), 1471693477);
        TZ_CHECK(from_utc("Asia/Ust-Nera", 1607148206), 1607184206);
        TZ_CHECK(from_local("Asia/Ust-Nera", 1607184206), 1607148206);
        TZ_CHECK(from_utc("Asia/Ust-Nera", 1476487966), 1476523966);
        TZ_CHECK(from_local("Asia/Ust-Nera", 1476523966), 1476487966);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ust-Nera" << std::endl;
    }
    if (has_timezone("Asia/Vientiane")) {
        TZ_CHECK(from_utc("Asia/Vientiane", 1557707158), 1557732358);
        TZ_CHECK(from_local("Asia/Vientiane", 1557732358), 1557707158);
        TZ_CHECK(from_utc("Asia/Vientiane", 1588117255), 1588142455);
        TZ_CHECK(from_local("Asia/Vientiane", 1588142455), 1588117255);
        TZ_CHECK(from_utc("Asia/Vientiane", 1618512458), 1618537658);
        TZ_CHECK(from_local("Asia/Vientiane", 1618537658), 1618512458);
        TZ_CHECK(from_utc("Asia/Vientiane", 1441081517), 1441106717);
        TZ_CHECK(from_local("Asia/Vientiane", 1441106717), 1441081517);
        TZ_CHECK(from_utc("Asia/Vientiane", 1522678793), 1522703993);
        TZ_CHECK(from_local("Asia/Vientiane", 1522703993), 1522678793);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Vientiane" << std::endl;
    }
    if (has_timezone("Asia/Vladivostok")) {
        TZ_CHECK(from_utc("Asia/Vladivostok", 1589762639), 1589798639);
        TZ_CHECK(from_local("Asia/Vladivostok", 1589798639), 1589762639);
        TZ_CHECK(from_utc("Asia/Vladivostok", 1617116667), 1617152667);
        TZ_CHECK(from_local("Asia/Vladivostok", 1617152667), 1617116667);
        TZ_CHECK(from_utc("Asia/Vladivostok", 1522652628), 1522688628);
        TZ_CHECK(from_local("Asia/Vladivostok", 1522688628), 1522652628);
        TZ_CHECK(from_utc("Asia/Vladivostok", 1413457546), 1413497146);
        TZ_CHECK(from_local("Asia/Vladivostok", 1413497146), 1413457546);
        TZ_CHECK(from_utc("Asia/Vladivostok", 1485271997), 1485307997);
        TZ_CHECK(from_local("Asia/Vladivostok", 1485307997), 1485271997);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Vladivostok" << std::endl;
    }
    if (has_timezone("Asia/Yakutsk")) {
        TZ_CHECK(from_utc("Asia/Yakutsk", 1498485574), 1498517974);
        TZ_CHECK(from_local("Asia/Yakutsk", 1498517974), 1498485574);
        TZ_CHECK(from_utc("Asia/Yakutsk", 1531335636), 1531368036);
        TZ_CHECK(from_local("Asia/Yakutsk", 1531368036), 1531335636);
        TZ_CHECK(from_utc("Asia/Yakutsk", 1580533321), 1580565721);
        TZ_CHECK(from_local("Asia/Yakutsk", 1580565721), 1580533321);
        TZ_CHECK(from_utc("Asia/Yakutsk", 1586438083), 1586470483);
        TZ_CHECK(from_local("Asia/Yakutsk", 1586470483), 1586438083);
        TZ_CHECK(from_utc("Asia/Yakutsk", 1508203235), 1508235635);
        TZ_CHECK(from_local("Asia/Yakutsk", 1508235635), 1508203235);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yakutsk" << std::endl;
    }
    if (has_timezone("Asia/Yangon")) {
        TZ_CHECK(from_utc("Asia/Yangon", 1621418057), 1621441457);
        TZ_CHECK(from_local("Asia/Yangon", 1621441457), 1621418057);
        TZ_CHECK(from_utc("Asia/Yangon", 1439327255), 1439350655);
        TZ_CHECK(from_local("Asia/Yangon", 1439350655), 1439327255);
        TZ_CHECK(from_utc("Asia/Yangon", 1553060650), 1553084050);
        TZ_CHECK(from_local("Asia/Yangon", 1553084050), 1553060650);
        TZ_CHECK(from_utc("Asia/Yangon", 1580884905), 1580908305);
        TZ_CHECK(from_local("Asia/Yangon", 1580908305), 1580884905);
        TZ_CHECK(from_utc("Asia/Yangon", 1619446350), 1619469750);
        TZ_CHECK(from_local("Asia/Yangon", 1619469750), 1619446350);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yangon" << std::endl;
    }
    if (has_timezone("Asia/Yekaterinburg")) {
        TZ_CHECK(from_utc("Asia/Yekaterinburg", 1490803591), 1490821591);
        TZ_CHECK(from_local("Asia/Yekaterinburg", 1490821591), 1490803591);
        TZ_CHECK(from_utc("Asia/Yekaterinburg", 1494170157), 1494188157);
        TZ_CHECK(from_local("Asia/Yekaterinburg", 1494188157), 1494170157);
        TZ_CHECK(from_utc("Asia/Yekaterinburg", 1456370509), 1456388509);
        TZ_CHECK(from_local("Asia/Yekaterinburg", 1456388509), 1456370509);
        TZ_CHECK(from_utc("Asia/Yekaterinburg", 1552600433), 1552618433);
        TZ_CHECK(from_local("Asia/Yekaterinburg", 1552618433), 1552600433);
        TZ_CHECK(from_utc("Asia/Yekaterinburg", 1471148292), 1471166292);
        TZ_CHECK(from_local("Asia/Yekaterinburg", 1471166292), 1471148292);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yekaterinburg" << std::endl;
    }
    if (has_timezone("Asia/Yerevan")) {
        TZ_CHECK(from_utc("Asia/Yerevan", 1591263030), 1591277430);
        TZ_CHECK(from_local("Asia/Yerevan", 1591277430), 1591263030);
        TZ_CHECK(from_utc("Asia/Yerevan", 1475980903), 1475995303);
        TZ_CHECK(from_local("Asia/Yerevan", 1475995303), 1475980903);
        TZ_CHECK(from_utc("Asia/Yerevan", 1423677936), 1423692336);
        TZ_CHECK(from_local("Asia/Yerevan", 1423692336), 1423677936);
        TZ_CHECK(from_utc("Asia/Yerevan", 1587523693), 1587538093);
        TZ_CHECK(from_local("Asia/Yerevan", 1587538093), 1587523693);
        TZ_CHECK(from_utc("Asia/Yerevan", 1613641298), 1613655698);
        TZ_CHECK(from_local("Asia/Yerevan", 1613655698), 1613641298);
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yerevan" << std::endl;
    }
    if (has_timezone("Atlantic/Azores")) {
        TZ_CHECK(from_utc("Atlantic/Azores", 1512085131), 1512081531);
        TZ_CHECK(from_local("Atlantic/Azores", 1512081531), 1512085131);
        TZ_CHECK(from_utc("Atlantic/Azores", 1524695602), 1524695602);
        TZ_CHECK(from_local("Atlantic/Azores", 1524695602), 1524695602);
        TZ_CHECK(from_utc("Atlantic/Azores", 1563990530), 1563990530);
        TZ_CHECK(from_local("Atlantic/Azores", 1563990530), 1563990530);
        TZ_CHECK(from_utc("Atlantic/Azores", 1542431922), 1542428322);
        TZ_CHECK(from_local("Atlantic/Azores", 1542428322), 1542431922);
        TZ_CHECK(from_utc("Atlantic/Azores", 1477690574), 1477690574);
        TZ_CHECK(from_local("Atlantic/Azores", 1477690574), 1477690574);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Azores" << std::endl;
    }
    if (has_timezone("Atlantic/Bermuda")) {
        TZ_CHECK(from_utc("Atlantic/Bermuda", 1569687324), 1569676524);
        TZ_CHECK(from_local("Atlantic/Bermuda", 1569676524), 1569687324);
        TZ_CHECK(from_utc("Atlantic/Bermuda", 1578195244), 1578180844);
        TZ_CHECK(from_local("Atlantic/Bermuda", 1578180844), 1578195244);
        TZ_CHECK(from_utc("Atlantic/Bermuda", 1448406599), 1448392199);
        TZ_CHECK(from_local("Atlantic/Bermuda", 1448392199), 1448406599);
        TZ_CHECK(from_utc("Atlantic/Bermuda", 1609486426), 1609472026);
        TZ_CHECK(from_local("Atlantic/Bermuda", 1609472026), 1609486426);
        TZ_CHECK(from_utc("Atlantic/Bermuda", 1620249335), 1620238535);
        TZ_CHECK(from_local("Atlantic/Bermuda", 1620238535), 1620249335);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Bermuda" << std::endl;
    }
    if (has_timezone("Atlantic/Canary")) {
        TZ_CHECK(from_utc("Atlantic/Canary", 1434958048), 1434961648);
        TZ_CHECK(from_local("Atlantic/Canary", 1434961648), 1434958048);
        TZ_CHECK(from_utc("Atlantic/Canary", 1465572865), 1465576465);
        TZ_CHECK(from_local("Atlantic/Canary", 1465576465), 1465572865);
        TZ_CHECK(from_utc("Atlantic/Canary", 1545426322), 1545426322);
        TZ_CHECK(from_local("Atlantic/Canary", 1545426322), 1545426322);
        TZ_CHECK(from_utc("Atlantic/Canary", 1590101250), 1590104850);
        TZ_CHECK(from_local("Atlantic/Canary", 1590104850), 1590101250);
        TZ_CHECK(from_utc("Atlantic/Canary", 1469153714), 1469157314);
        TZ_CHECK(from_local("Atlantic/Canary", 1469157314), 1469153714);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Canary" << std::endl;
    }
    if (has_timezone("Atlantic/Cape_Verde")) {
        TZ_CHECK(from_utc("Atlantic/Cape_Verde", 1523612710), 1523609110);
        TZ_CHECK(from_local("Atlantic/Cape_Verde", 1523609110), 1523612710);
        TZ_CHECK(from_utc("Atlantic/Cape_Verde", 1472183568), 1472179968);
        TZ_CHECK(from_local("Atlantic/Cape_Verde", 1472179968), 1472183568);
        TZ_CHECK(from_utc("Atlantic/Cape_Verde", 1426078149), 1426074549);
        TZ_CHECK(from_local("Atlantic/Cape_Verde", 1426074549), 1426078149);
        TZ_CHECK(from_utc("Atlantic/Cape_Verde", 1508699453), 1508695853);
        TZ_CHECK(from_local("Atlantic/Cape_Verde", 1508695853), 1508699453);
        TZ_CHECK(from_utc("Atlantic/Cape_Verde", 1597186946), 1597183346);
        TZ_CHECK(from_local("Atlantic/Cape_Verde", 1597183346), 1597186946);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Cape_Verde" << std::endl;
    }
    if (has_timezone("Atlantic/Faeroe")) {
        TZ_CHECK(from_utc("Atlantic/Faeroe", 1449786387), 1449786387);
        TZ_CHECK(from_local("Atlantic/Faeroe", 1449786387), 1449786387);
        TZ_CHECK(from_utc("Atlantic/Faeroe", 1614565628), 1614565628);
        TZ_CHECK(from_local("Atlantic/Faeroe", 1614565628), 1614565628);
        TZ_CHECK(from_utc("Atlantic/Faeroe", 1416706371), 1416706371);
        TZ_CHECK(from_local("Atlantic/Faeroe", 1416706371), 1416706371);
        TZ_CHECK(from_utc("Atlantic/Faeroe", 1629653833), 1629657433);
        TZ_CHECK(from_local("Atlantic/Faeroe", 1629657433), 1629653833);
        TZ_CHECK(from_utc("Atlantic/Faeroe", 1570688487), 1570692087);
        TZ_CHECK(from_local("Atlantic/Faeroe", 1570692087), 1570688487);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Faeroe" << std::endl;
    }
    if (has_timezone("Atlantic/Faroe")) {
        TZ_CHECK(from_utc("Atlantic/Faroe", 1605851616), 1605851616);
        TZ_CHECK(from_local("Atlantic/Faroe", 1605851616), 1605851616);
        TZ_CHECK(from_utc("Atlantic/Faroe", 1600137538), 1600141138);
        TZ_CHECK(from_local("Atlantic/Faroe", 1600141138), 1600137538);
        TZ_CHECK(from_utc("Atlantic/Faroe", 1611161289), 1611161289);
        TZ_CHECK(from_local("Atlantic/Faroe", 1611161289), 1611161289);
        TZ_CHECK(from_utc("Atlantic/Faroe", 1575191151), 1575191151);
        TZ_CHECK(from_local("Atlantic/Faroe", 1575191151), 1575191151);
        TZ_CHECK(from_utc("Atlantic/Faroe", 1491436944), 1491440544);
        TZ_CHECK(from_local("Atlantic/Faroe", 1491440544), 1491436944);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Faroe" << std::endl;
    }
    if (has_timezone("Atlantic/Jan_Mayen")) {
        TZ_CHECK(from_utc("Atlantic/Jan_Mayen", 1424371548), 1424375148);
        TZ_CHECK(from_local("Atlantic/Jan_Mayen", 1424375148), 1424371548);
        TZ_CHECK(from_utc("Atlantic/Jan_Mayen", 1584980981), 1584984581);
        TZ_CHECK(from_local("Atlantic/Jan_Mayen", 1584984581), 1584980981);
        TZ_CHECK(from_utc("Atlantic/Jan_Mayen", 1512714257), 1512717857);
        TZ_CHECK(from_local("Atlantic/Jan_Mayen", 1512717857), 1512714257);
        TZ_CHECK(from_utc("Atlantic/Jan_Mayen", 1483992791), 1483996391);
        TZ_CHECK(from_local("Atlantic/Jan_Mayen", 1483996391), 1483992791);
        TZ_CHECK(from_utc("Atlantic/Jan_Mayen", 1593682470), 1593689670);
        TZ_CHECK(from_local("Atlantic/Jan_Mayen", 1593689670), 1593682470);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Jan_Mayen" << std::endl;
    }
    if (has_timezone("Atlantic/Madeira")) {
        TZ_CHECK(from_utc("Atlantic/Madeira", 1479502078), 1479502078);
        TZ_CHECK(from_local("Atlantic/Madeira", 1479502078), 1479502078);
        TZ_CHECK(from_utc("Atlantic/Madeira", 1613687533), 1613687533);
        TZ_CHECK(from_local("Atlantic/Madeira", 1613687533), 1613687533);
        TZ_CHECK(from_utc("Atlantic/Madeira", 1557313875), 1557317475);
        TZ_CHECK(from_local("Atlantic/Madeira", 1557317475), 1557313875);
        TZ_CHECK(from_utc("Atlantic/Madeira", 1528165466), 1528169066);
        TZ_CHECK(from_local("Atlantic/Madeira", 1528169066), 1528165466);
        TZ_CHECK(from_utc("Atlantic/Madeira", 1518523149), 1518523149);
        TZ_CHECK(from_local("Atlantic/Madeira", 1518523149), 1518523149);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Madeira" << std::endl;
    }
    if (has_timezone("Atlantic/Reykjavik")) {
        TZ_CHECK(from_utc("Atlantic/Reykjavik", 1500574944), 1500574944);
        TZ_CHECK(from_local("Atlantic/Reykjavik", 1500574944), 1500574944);
        TZ_CHECK(from_utc("Atlantic/Reykjavik", 1597817069), 1597817069);
        TZ_CHECK(from_local("Atlantic/Reykjavik", 1597817069), 1597817069);
        TZ_CHECK(from_utc("Atlantic/Reykjavik", 1444693750), 1444693750);
        TZ_CHECK(from_local("Atlantic/Reykjavik", 1444693750), 1444693750);
        TZ_CHECK(from_utc("Atlantic/Reykjavik", 1526695643), 1526695643);
        TZ_CHECK(from_local("Atlantic/Reykjavik", 1526695643), 1526695643);
        TZ_CHECK(from_utc("Atlantic/Reykjavik", 1465251015), 1465251015);
        TZ_CHECK(from_local("Atlantic/Reykjavik", 1465251015), 1465251015);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Reykjavik" << std::endl;
    }
    if (has_timezone("Atlantic/South_Georgia")) {
        TZ_CHECK(from_utc("Atlantic/South_Georgia", 1596064084), 1596056884);
        TZ_CHECK(from_local("Atlantic/South_Georgia", 1596056884), 1596064084);
        TZ_CHECK(from_utc("Atlantic/South_Georgia", 1482869153), 1482861953);
        TZ_CHECK(from_local("Atlantic/South_Georgia", 1482861953), 1482869153);
        TZ_CHECK(from_utc("Atlantic/South_Georgia", 1409699519), 1409692319);
        TZ_CHECK(from_local("Atlantic/South_Georgia", 1409692319), 1409699519);
        TZ_CHECK(from_utc("Atlantic/South_Georgia", 1589677748), 1589670548);
        TZ_CHECK(from_local("Atlantic/South_Georgia", 1589670548), 1589677748);
        TZ_CHECK(from_utc("Atlantic/South_Georgia", 1539284154), 1539276954);
        TZ_CHECK(from_local("Atlantic/South_Georgia", 1539276954), 1539284154);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/South_Georgia" << std::endl;
    }
    if (has_timezone("Atlantic/St_Helena")) {
        TZ_CHECK(from_utc("Atlantic/St_Helena", 1612434894), 1612434894);
        TZ_CHECK(from_local("Atlantic/St_Helena", 1612434894), 1612434894);
        TZ_CHECK(from_utc("Atlantic/St_Helena", 1439959697), 1439959697);
        TZ_CHECK(from_local("Atlantic/St_Helena", 1439959697), 1439959697);
        TZ_CHECK(from_utc("Atlantic/St_Helena", 1493769426), 1493769426);
        TZ_CHECK(from_local("Atlantic/St_Helena", 1493769426), 1493769426);
        TZ_CHECK(from_utc("Atlantic/St_Helena", 1572503005), 1572503005);
        TZ_CHECK(from_local("Atlantic/St_Helena", 1572503005), 1572503005);
        TZ_CHECK(from_utc("Atlantic/St_Helena", 1455948491), 1455948491);
        TZ_CHECK(from_local("Atlantic/St_Helena", 1455948491), 1455948491);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/St_Helena" << std::endl;
    }
    if (has_timezone("Atlantic/Stanley")) {
        TZ_CHECK(from_utc("Atlantic/Stanley", 1497847073), 1497836273);
        TZ_CHECK(from_local("Atlantic/Stanley", 1497836273), 1497847073);
        TZ_CHECK(from_utc("Atlantic/Stanley", 1603452318), 1603441518);
        TZ_CHECK(from_local("Atlantic/Stanley", 1603441518), 1603452318);
        TZ_CHECK(from_utc("Atlantic/Stanley", 1503909628), 1503898828);
        TZ_CHECK(from_local("Atlantic/Stanley", 1503898828), 1503909628);
        TZ_CHECK(from_utc("Atlantic/Stanley", 1514886786), 1514875986);
        TZ_CHECK(from_local("Atlantic/Stanley", 1514875986), 1514886786);
        TZ_CHECK(from_utc("Atlantic/Stanley", 1577432262), 1577421462);
        TZ_CHECK(from_local("Atlantic/Stanley", 1577421462), 1577432262);
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Stanley" << std::endl;
    }
    if (has_timezone("Australia/ACT")) {
        TZ_CHECK(from_utc("Australia/ACT", 1429323569), 1429359569);
        TZ_CHECK(from_local("Australia/ACT", 1429359569), 1429323569);
        TZ_CHECK(from_utc("Australia/ACT", 1469114089), 1469150089);
        TZ_CHECK(from_local("Australia/ACT", 1469150089), 1469114089);
        TZ_CHECK(from_utc("Australia/ACT", 1447896354), 1447935954);
        TZ_CHECK(from_local("Australia/ACT", 1447935954), 1447896354);
        TZ_CHECK(from_utc("Australia/ACT", 1598535011), 1598571011);
        TZ_CHECK(from_local("Australia/ACT", 1598571011), 1598535011);
        TZ_CHECK(from_utc("Australia/ACT", 1605323339), 1605362939);
        TZ_CHECK(from_local("Australia/ACT", 1605362939), 1605323339);
    } else {
        std::cerr << "NO TIMEZONE: Australia/ACT" << std::endl;
    }
    if (has_timezone("Australia/Adelaide")) {
        TZ_CHECK(from_utc("Australia/Adelaide", 1476653912), 1476691712);
        TZ_CHECK(from_local("Australia/Adelaide", 1476691712), 1476653912);
        TZ_CHECK(from_utc("Australia/Adelaide", 1603024273), 1603062073);
        TZ_CHECK(from_local("Australia/Adelaide", 1603062073), 1603024273);
        TZ_CHECK(from_utc("Australia/Adelaide", 1525091457), 1525125657);
        TZ_CHECK(from_local("Australia/Adelaide", 1525125657), 1525091457);
        TZ_CHECK(from_utc("Australia/Adelaide", 1483127850), 1483165650);
        TZ_CHECK(from_local("Australia/Adelaide", 1483165650), 1483127850);
        TZ_CHECK(from_utc("Australia/Adelaide", 1544530736), 1544568536);
        TZ_CHECK(from_local("Australia/Adelaide", 1544568536), 1544530736);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Adelaide" << std::endl;
    }
    if (has_timezone("Australia/Brisbane")) {
        TZ_CHECK(from_utc("Australia/Brisbane", 1428293973), 1428329973);
        TZ_CHECK(from_local("Australia/Brisbane", 1428329973), 1428293973);
        TZ_CHECK(from_utc("Australia/Brisbane", 1516217291), 1516253291);
        TZ_CHECK(from_local("Australia/Brisbane", 1516253291), 1516217291);
        TZ_CHECK(from_utc("Australia/Brisbane", 1507540110), 1507576110);
        TZ_CHECK(from_local("Australia/Brisbane", 1507576110), 1507540110);
        TZ_CHECK(from_utc("Australia/Brisbane", 1500123374), 1500159374);
        TZ_CHECK(from_local("Australia/Brisbane", 1500159374), 1500123374);
        TZ_CHECK(from_utc("Australia/Brisbane", 1569118165), 1569154165);
        TZ_CHECK(from_local("Australia/Brisbane", 1569154165), 1569118165);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Brisbane" << std::endl;
    }
    if (has_timezone("Australia/Broken_Hill")) {
        TZ_CHECK(from_utc("Australia/Broken_Hill", 1574490721), 1574528521);
        TZ_CHECK(from_local("Australia/Broken_Hill", 1574528521), 1574490721);
        TZ_CHECK(from_utc("Australia/Broken_Hill", 1608312108), 1608349908);
        TZ_CHECK(from_local("Australia/Broken_Hill", 1608349908), 1608312108);
        TZ_CHECK(from_utc("Australia/Broken_Hill", 1624004849), 1624039049);
        TZ_CHECK(from_local("Australia/Broken_Hill", 1624039049), 1624004849);
        TZ_CHECK(from_utc("Australia/Broken_Hill", 1567085351), 1567119551);
        TZ_CHECK(from_local("Australia/Broken_Hill", 1567119551), 1567085351);
        TZ_CHECK(from_utc("Australia/Broken_Hill", 1503073660), 1503107860);
        TZ_CHECK(from_local("Australia/Broken_Hill", 1503107860), 1503073660);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Broken_Hill" << std::endl;
    }
    if (has_timezone("Australia/Canberra")) {
        TZ_CHECK(from_utc("Australia/Canberra", 1527030632), 1527066632);
        TZ_CHECK(from_local("Australia/Canberra", 1527066632), 1527030632);
        TZ_CHECK(from_utc("Australia/Canberra", 1595165210), 1595201210);
        TZ_CHECK(from_local("Australia/Canberra", 1595201210), 1595165210);
        TZ_CHECK(from_utc("Australia/Canberra", 1578268882), 1578308482);
        TZ_CHECK(from_local("Australia/Canberra", 1578308482), 1578268882);
        TZ_CHECK(from_utc("Australia/Canberra", 1587392176), 1587428176);
        TZ_CHECK(from_local("Australia/Canberra", 1587428176), 1587392176);
        TZ_CHECK(from_utc("Australia/Canberra", 1625712102), 1625748102);
        TZ_CHECK(from_local("Australia/Canberra", 1625748102), 1625712102);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Canberra" << std::endl;
    }
    if (has_timezone("Australia/Currie")) {
        TZ_CHECK(from_utc("Australia/Currie", 1468248388), 1468284388);
        TZ_CHECK(from_local("Australia/Currie", 1468284388), 1468248388);
        TZ_CHECK(from_utc("Australia/Currie", 1566494452), 1566530452);
        TZ_CHECK(from_local("Australia/Currie", 1566530452), 1566494452);
        TZ_CHECK(from_utc("Australia/Currie", 1625029159), 1625065159);
        TZ_CHECK(from_local("Australia/Currie", 1625065159), 1625029159);
        TZ_CHECK(from_utc("Australia/Currie", 1585858441), 1585898041);
        TZ_CHECK(from_local("Australia/Currie", 1585898041), 1585858441);
        TZ_CHECK(from_utc("Australia/Currie", 1558177539), 1558213539);
        TZ_CHECK(from_local("Australia/Currie", 1558213539), 1558177539);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Currie" << std::endl;
    }
    if (has_timezone("Australia/Darwin")) {
        TZ_CHECK(from_utc("Australia/Darwin", 1628222762), 1628256962);
        TZ_CHECK(from_local("Australia/Darwin", 1628256962), 1628222762);
        TZ_CHECK(from_utc("Australia/Darwin", 1514183652), 1514217852);
        TZ_CHECK(from_local("Australia/Darwin", 1514217852), 1514183652);
        TZ_CHECK(from_utc("Australia/Darwin", 1597026809), 1597061009);
        TZ_CHECK(from_local("Australia/Darwin", 1597061009), 1597026809);
        TZ_CHECK(from_utc("Australia/Darwin", 1547782323), 1547816523);
        TZ_CHECK(from_local("Australia/Darwin", 1547816523), 1547782323);
        TZ_CHECK(from_utc("Australia/Darwin", 1569434659), 1569468859);
        TZ_CHECK(from_local("Australia/Darwin", 1569468859), 1569434659);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Darwin" << std::endl;
    }
    if (has_timezone("Australia/Eucla")) {
        TZ_CHECK(from_utc("Australia/Eucla", 1532748075), 1532779575);
        TZ_CHECK(from_local("Australia/Eucla", 1532779575), 1532748075);
        TZ_CHECK(from_utc("Australia/Eucla", 1621761135), 1621792635);
        TZ_CHECK(from_local("Australia/Eucla", 1621792635), 1621761135);
        TZ_CHECK(from_utc("Australia/Eucla", 1475724163), 1475755663);
        TZ_CHECK(from_local("Australia/Eucla", 1475755663), 1475724163);
        TZ_CHECK(from_utc("Australia/Eucla", 1554064768), 1554096268);
        TZ_CHECK(from_local("Australia/Eucla", 1554096268), 1554064768);
        TZ_CHECK(from_utc("Australia/Eucla", 1426269285), 1426300785);
        TZ_CHECK(from_local("Australia/Eucla", 1426300785), 1426269285);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Eucla" << std::endl;
    }
    if (has_timezone("Australia/Hobart")) {
        TZ_CHECK(from_utc("Australia/Hobart", 1540672220), 1540711820);
        TZ_CHECK(from_local("Australia/Hobart", 1540711820), 1540672220);
        TZ_CHECK(from_utc("Australia/Hobart", 1455638151), 1455677751);
        TZ_CHECK(from_local("Australia/Hobart", 1455677751), 1455638151);
        TZ_CHECK(from_utc("Australia/Hobart", 1482189203), 1482228803);
        TZ_CHECK(from_local("Australia/Hobart", 1482228803), 1482189203);
        TZ_CHECK(from_utc("Australia/Hobart", 1540954041), 1540993641);
        TZ_CHECK(from_local("Australia/Hobart", 1540993641), 1540954041);
        TZ_CHECK(from_utc("Australia/Hobart", 1545401760), 1545441360);
        TZ_CHECK(from_local("Australia/Hobart", 1545441360), 1545401760);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Hobart" << std::endl;
    }
    if (has_timezone("Australia/LHI")) {
        TZ_CHECK(from_utc("Australia/LHI", 1424075062), 1424114662);
        TZ_CHECK(from_local("Australia/LHI", 1424114662), 1424075062);
        TZ_CHECK(from_utc("Australia/LHI", 1484312767), 1484352367);
        TZ_CHECK(from_local("Australia/LHI", 1484352367), 1484312767);
        TZ_CHECK(from_utc("Australia/LHI", 1599706513), 1599744313);
        TZ_CHECK(from_local("Australia/LHI", 1599744313), 1599706513);
        TZ_CHECK(from_utc("Australia/LHI", 1540431203), 1540470803);
        TZ_CHECK(from_local("Australia/LHI", 1540470803), 1540431203);
        TZ_CHECK(from_utc("Australia/LHI", 1564491811), 1564529611);
        TZ_CHECK(from_local("Australia/LHI", 1564529611), 1564491811);
    } else {
        std::cerr << "NO TIMEZONE: Australia/LHI" << std::endl;
    }
    if (has_timezone("Australia/Lindeman")) {
        TZ_CHECK(from_utc("Australia/Lindeman", 1549835635), 1549871635);
        TZ_CHECK(from_local("Australia/Lindeman", 1549871635), 1549835635);
        TZ_CHECK(from_utc("Australia/Lindeman", 1548532038), 1548568038);
        TZ_CHECK(from_local("Australia/Lindeman", 1548568038), 1548532038);
        TZ_CHECK(from_utc("Australia/Lindeman", 1539020810), 1539056810);
        TZ_CHECK(from_local("Australia/Lindeman", 1539056810), 1539020810);
        TZ_CHECK(from_utc("Australia/Lindeman", 1613306491), 1613342491);
        TZ_CHECK(from_local("Australia/Lindeman", 1613342491), 1613306491);
        TZ_CHECK(from_utc("Australia/Lindeman", 1467814692), 1467850692);
        TZ_CHECK(from_local("Australia/Lindeman", 1467850692), 1467814692);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Lindeman" << std::endl;
    }
    if (has_timezone("Australia/Lord_Howe")) {
        TZ_CHECK(from_utc("Australia/Lord_Howe", 1576766590), 1576806190);
        TZ_CHECK(from_local("Australia/Lord_Howe", 1576806190), 1576766590);
        TZ_CHECK(from_utc("Australia/Lord_Howe", 1442036557), 1442074357);
        TZ_CHECK(from_local("Australia/Lord_Howe", 1442074357), 1442036557);
        TZ_CHECK(from_utc("Australia/Lord_Howe", 1628515334), 1628553134);
        TZ_CHECK(from_local("Australia/Lord_Howe", 1628553134), 1628515334);
        TZ_CHECK(from_utc("Australia/Lord_Howe", 1482148978), 1482188578);
        TZ_CHECK(from_local("Australia/Lord_Howe", 1482188578), 1482148978);
        TZ_CHECK(from_utc("Australia/Lord_Howe", 1630212170), 1630249970);
        TZ_CHECK(from_local("Australia/Lord_Howe", 1630249970), 1630212170);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Lord_Howe" << std::endl;
    }
    if (has_timezone("Australia/Melbourne")) {
        TZ_CHECK(from_utc("Australia/Melbourne", 1507951515), 1507991115);
        TZ_CHECK(from_local("Australia/Melbourne", 1507991115), 1507951515);
        TZ_CHECK(from_utc("Australia/Melbourne", 1610814334), 1610853934);
        TZ_CHECK(from_local("Australia/Melbourne", 1610853934), 1610814334);
        TZ_CHECK(from_utc("Australia/Melbourne", 1552241166), 1552280766);
        TZ_CHECK(from_local("Australia/Melbourne", 1552280766), 1552241166);
        TZ_CHECK(from_utc("Australia/Melbourne", 1467976932), 1468012932);
        TZ_CHECK(from_local("Australia/Melbourne", 1468012932), 1467976932);
        TZ_CHECK(from_utc("Australia/Melbourne", 1474033679), 1474069679);
        TZ_CHECK(from_local("Australia/Melbourne", 1474069679), 1474033679);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Melbourne" << std::endl;
    }
    if (has_timezone("Australia/NSW")) {
        TZ_CHECK(from_utc("Australia/NSW", 1541957831), 1541997431);
        TZ_CHECK(from_local("Australia/NSW", 1541997431), 1541957831);
        TZ_CHECK(from_utc("Australia/NSW", 1554235747), 1554275347);
        TZ_CHECK(from_local("Australia/NSW", 1554275347), 1554235747);
        TZ_CHECK(from_utc("Australia/NSW", 1534061495), 1534097495);
        TZ_CHECK(from_local("Australia/NSW", 1534097495), 1534061495);
        TZ_CHECK(from_utc("Australia/NSW", 1450354317), 1450393917);
        TZ_CHECK(from_local("Australia/NSW", 1450393917), 1450354317);
        TZ_CHECK(from_utc("Australia/NSW", 1463477617), 1463513617);
        TZ_CHECK(from_local("Australia/NSW", 1463513617), 1463477617);
    } else {
        std::cerr << "NO TIMEZONE: Australia/NSW" << std::endl;
    }
    if (has_timezone("Australia/North")) {
        TZ_CHECK(from_utc("Australia/North", 1541187352), 1541221552);
        TZ_CHECK(from_local("Australia/North", 1541221552), 1541187352);
        TZ_CHECK(from_utc("Australia/North", 1586809604), 1586843804);
        TZ_CHECK(from_local("Australia/North", 1586843804), 1586809604);
        TZ_CHECK(from_utc("Australia/North", 1614096475), 1614130675);
        TZ_CHECK(from_local("Australia/North", 1614130675), 1614096475);
        TZ_CHECK(from_utc("Australia/North", 1602820117), 1602854317);
        TZ_CHECK(from_local("Australia/North", 1602854317), 1602820117);
        TZ_CHECK(from_utc("Australia/North", 1423694244), 1423728444);
        TZ_CHECK(from_local("Australia/North", 1423728444), 1423694244);
    } else {
        std::cerr << "NO TIMEZONE: Australia/North" << std::endl;
    }
    if (has_timezone("Australia/Perth")) {
        TZ_CHECK(from_utc("Australia/Perth", 1553692840), 1553721640);
        TZ_CHECK(from_local("Australia/Perth", 1553721640), 1553692840);
        TZ_CHECK(from_utc("Australia/Perth", 1518184203), 1518213003);
        TZ_CHECK(from_local("Australia/Perth", 1518213003), 1518184203);
        TZ_CHECK(from_utc("Australia/Perth", 1472597622), 1472626422);
        TZ_CHECK(from_local("Australia/Perth", 1472626422), 1472597622);
        TZ_CHECK(from_utc("Australia/Perth", 1559551556), 1559580356);
        TZ_CHECK(from_local("Australia/Perth", 1559580356), 1559551556);
        TZ_CHECK(from_utc("Australia/Perth", 1607282088), 1607310888);
        TZ_CHECK(from_local("Australia/Perth", 1607310888), 1607282088);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Perth" << std::endl;
    }
    if (has_timezone("Australia/Queensland")) {
        TZ_CHECK(from_utc("Australia/Queensland", 1426758631), 1426794631);
        TZ_CHECK(from_local("Australia/Queensland", 1426794631), 1426758631);
        TZ_CHECK(from_utc("Australia/Queensland", 1508806093), 1508842093);
        TZ_CHECK(from_local("Australia/Queensland", 1508842093), 1508806093);
        TZ_CHECK(from_utc("Australia/Queensland", 1544899495), 1544935495);
        TZ_CHECK(from_local("Australia/Queensland", 1544935495), 1544899495);
        TZ_CHECK(from_utc("Australia/Queensland", 1623766466), 1623802466);
        TZ_CHECK(from_local("Australia/Queensland", 1623802466), 1623766466);
        TZ_CHECK(from_utc("Australia/Queensland", 1535142844), 1535178844);
        TZ_CHECK(from_local("Australia/Queensland", 1535178844), 1535142844);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Queensland" << std::endl;
    }
    if (has_timezone("Australia/South")) {
        TZ_CHECK(from_utc("Australia/South", 1418671990), 1418709790);
        TZ_CHECK(from_local("Australia/South", 1418709790), 1418671990);
        TZ_CHECK(from_utc("Australia/South", 1511542471), 1511580271);
        TZ_CHECK(from_local("Australia/South", 1511580271), 1511542471);
        TZ_CHECK(from_utc("Australia/South", 1477155573), 1477193373);
        TZ_CHECK(from_local("Australia/South", 1477193373), 1477155573);
        TZ_CHECK(from_utc("Australia/South", 1564149541), 1564183741);
        TZ_CHECK(from_local("Australia/South", 1564183741), 1564149541);
        TZ_CHECK(from_utc("Australia/South", 1495446999), 1495481199);
        TZ_CHECK(from_local("Australia/South", 1495481199), 1495446999);
    } else {
        std::cerr << "NO TIMEZONE: Australia/South" << std::endl;
    }
    if (has_timezone("Australia/Sydney")) {
        TZ_CHECK(from_utc("Australia/Sydney", 1457474857), 1457514457);
        TZ_CHECK(from_local("Australia/Sydney", 1457514457), 1457474857);
        TZ_CHECK(from_utc("Australia/Sydney", 1445489807), 1445529407);
        TZ_CHECK(from_local("Australia/Sydney", 1445529407), 1445489807);
        TZ_CHECK(from_utc("Australia/Sydney", 1518017224), 1518056824);
        TZ_CHECK(from_local("Australia/Sydney", 1518056824), 1518017224);
        TZ_CHECK(from_utc("Australia/Sydney", 1420795417), 1420835017);
        TZ_CHECK(from_local("Australia/Sydney", 1420835017), 1420795417);
        TZ_CHECK(from_utc("Australia/Sydney", 1437860514), 1437896514);
        TZ_CHECK(from_local("Australia/Sydney", 1437896514), 1437860514);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Sydney" << std::endl;
    }
    if (has_timezone("Australia/Tasmania")) {
        TZ_CHECK(from_utc("Australia/Tasmania", 1628551797), 1628587797);
        TZ_CHECK(from_local("Australia/Tasmania", 1628587797), 1628551797);
        TZ_CHECK(from_utc("Australia/Tasmania", 1534010814), 1534046814);
        TZ_CHECK(from_local("Australia/Tasmania", 1534046814), 1534010814);
        TZ_CHECK(from_utc("Australia/Tasmania", 1574013141), 1574052741);
        TZ_CHECK(from_local("Australia/Tasmania", 1574052741), 1574013141);
        TZ_CHECK(from_utc("Australia/Tasmania", 1558300076), 1558336076);
        TZ_CHECK(from_local("Australia/Tasmania", 1558336076), 1558300076);
        TZ_CHECK(from_utc("Australia/Tasmania", 1512662317), 1512701917);
        TZ_CHECK(from_local("Australia/Tasmania", 1512701917), 1512662317);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Tasmania" << std::endl;
    }
    if (has_timezone("Australia/Victoria")) {
        TZ_CHECK(from_utc("Australia/Victoria", 1517407091), 1517446691);
        TZ_CHECK(from_local("Australia/Victoria", 1517446691), 1517407091);
        TZ_CHECK(from_utc("Australia/Victoria", 1550719454), 1550759054);
        TZ_CHECK(from_local("Australia/Victoria", 1550759054), 1550719454);
        TZ_CHECK(from_utc("Australia/Victoria", 1579370082), 1579409682);
        TZ_CHECK(from_local("Australia/Victoria", 1579409682), 1579370082);
        TZ_CHECK(from_utc("Australia/Victoria", 1591970119), 1592006119);
        TZ_CHECK(from_local("Australia/Victoria", 1592006119), 1591970119);
        TZ_CHECK(from_utc("Australia/Victoria", 1545436006), 1545475606);
        TZ_CHECK(from_local("Australia/Victoria", 1545475606), 1545436006);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Victoria" << std::endl;
    }
    if (has_timezone("Australia/West")) {
        TZ_CHECK(from_utc("Australia/West", 1630184188), 1630212988);
        TZ_CHECK(from_local("Australia/West", 1630212988), 1630184188);
        TZ_CHECK(from_utc("Australia/West", 1618061438), 1618090238);
        TZ_CHECK(from_local("Australia/West", 1618090238), 1618061438);
        TZ_CHECK(from_utc("Australia/West", 1625627152), 1625655952);
        TZ_CHECK(from_local("Australia/West", 1625655952), 1625627152);
        TZ_CHECK(from_utc("Australia/West", 1586668637), 1586697437);
        TZ_CHECK(from_local("Australia/West", 1586697437), 1586668637);
        TZ_CHECK(from_utc("Australia/West", 1579858271), 1579887071);
        TZ_CHECK(from_local("Australia/West", 1579887071), 1579858271);
    } else {
        std::cerr << "NO TIMEZONE: Australia/West" << std::endl;
    }
    if (has_timezone("Australia/Yancowinna")) {
        TZ_CHECK(from_utc("Australia/Yancowinna", 1415963145), 1416000945);
        TZ_CHECK(from_local("Australia/Yancowinna", 1416000945), 1415963145);
        TZ_CHECK(from_utc("Australia/Yancowinna", 1455401939), 1455439739);
        TZ_CHECK(from_local("Australia/Yancowinna", 1455439739), 1455401939);
        TZ_CHECK(from_utc("Australia/Yancowinna", 1514283388), 1514321188);
        TZ_CHECK(from_local("Australia/Yancowinna", 1514321188), 1514283388);
        TZ_CHECK(from_utc("Australia/Yancowinna", 1483963767), 1484001567);
        TZ_CHECK(from_local("Australia/Yancowinna", 1484001567), 1483963767);
        TZ_CHECK(from_utc("Australia/Yancowinna", 1502116569), 1502150769);
        TZ_CHECK(from_local("Australia/Yancowinna", 1502150769), 1502116569);
    } else {
        std::cerr << "NO TIMEZONE: Australia/Yancowinna" << std::endl;
    }
    if (has_timezone("Brazil/Acre")) {
        TZ_CHECK(from_utc("Brazil/Acre", 1584973650), 1584955650);
        TZ_CHECK(from_local("Brazil/Acre", 1584955650), 1584973650);
        TZ_CHECK(from_utc("Brazil/Acre", 1591455510), 1591437510);
        TZ_CHECK(from_local("Brazil/Acre", 1591437510), 1591455510);
        TZ_CHECK(from_utc("Brazil/Acre", 1423685926), 1423667926);
        TZ_CHECK(from_local("Brazil/Acre", 1423667926), 1423685926);
        TZ_CHECK(from_utc("Brazil/Acre", 1546008246), 1545990246);
        TZ_CHECK(from_local("Brazil/Acre", 1545990246), 1546008246);
        TZ_CHECK(from_utc("Brazil/Acre", 1435529284), 1435511284);
        TZ_CHECK(from_local("Brazil/Acre", 1435511284), 1435529284);
    } else {
        std::cerr << "NO TIMEZONE: Brazil/Acre" << std::endl;
    }
    if (has_timezone("Brazil/DeNoronha")) {
        TZ_CHECK(from_utc("Brazil/DeNoronha", 1582120521), 1582113321);
        TZ_CHECK(from_local("Brazil/DeNoronha", 1582113321), 1582120521);
        TZ_CHECK(from_utc("Brazil/DeNoronha", 1559456732), 1559449532);
        TZ_CHECK(from_local("Brazil/DeNoronha", 1559449532), 1559456732);
        TZ_CHECK(from_utc("Brazil/DeNoronha", 1461887489), 1461880289);
        TZ_CHECK(from_local("Brazil/DeNoronha", 1461880289), 1461887489);
        TZ_CHECK(from_utc("Brazil/DeNoronha", 1455504131), 1455496931);
        TZ_CHECK(from_local("Brazil/DeNoronha", 1455496931), 1455504131);
        TZ_CHECK(from_utc("Brazil/DeNoronha", 1515353945), 1515346745);
        TZ_CHECK(from_local("Brazil/DeNoronha", 1515346745), 1515353945);
    } else {
        std::cerr << "NO TIMEZONE: Brazil/DeNoronha" << std::endl;
    }
    if (has_timezone("Brazil/East")) {
        TZ_CHECK(from_utc("Brazil/East", 1486815800), 1486808600);
        TZ_CHECK(from_local("Brazil/East", 1486808600), 1486815800);
        TZ_CHECK(from_utc("Brazil/East", 1589708651), 1589697851);
        TZ_CHECK(from_local("Brazil/East", 1589697851), 1589708651);
        TZ_CHECK(from_utc("Brazil/East", 1492312729), 1492301929);
        TZ_CHECK(from_local("Brazil/East", 1492301929), 1492312729);
        TZ_CHECK(from_utc("Brazil/East", 1614326631), 1614315831);
        TZ_CHECK(from_local("Brazil/East", 1614315831), 1614326631);
        TZ_CHECK(from_utc("Brazil/East", 1550640814), 1550630014);
        TZ_CHECK(from_local("Brazil/East", 1550630014), 1550640814);
    } else {
        std::cerr << "NO TIMEZONE: Brazil/East" << std::endl;
    }
    if (has_timezone("Brazil/West")) {
        TZ_CHECK(from_utc("Brazil/West", 1492585133), 1492570733);
        TZ_CHECK(from_local("Brazil/West", 1492570733), 1492585133);
        TZ_CHECK(from_utc("Brazil/West", 1488416061), 1488401661);
        TZ_CHECK(from_local("Brazil/West", 1488401661), 1488416061);
        TZ_CHECK(from_utc("Brazil/West", 1602253506), 1602239106);
        TZ_CHECK(from_local("Brazil/West", 1602239106), 1602253506);
        TZ_CHECK(from_utc("Brazil/West", 1526825173), 1526810773);
        TZ_CHECK(from_local("Brazil/West", 1526810773), 1526825173);
        TZ_CHECK(from_utc("Brazil/West", 1538518847), 1538504447);
        TZ_CHECK(from_local("Brazil/West", 1538504447), 1538518847);
    } else {
        std::cerr << "NO TIMEZONE: Brazil/West" << std::endl;
    }
    if (has_timezone("CET")) {
        TZ_CHECK(from_utc("CET", 1507279829), 1507287029);
        TZ_CHECK(from_local("CET", 1507287029), 1507279829);
        TZ_CHECK(from_utc("CET", 1521079644), 1521083244);
        TZ_CHECK(from_local("CET", 1521083244), 1521079644);
        TZ_CHECK(from_utc("CET", 1421377171), 1421380771);
        TZ_CHECK(from_local("CET", 1421380771), 1421377171);
        TZ_CHECK(from_utc("CET", 1504789218), 1504796418);
        TZ_CHECK(from_local("CET", 1504796418), 1504789218);
        TZ_CHECK(from_utc("CET", 1607711515), 1607715115);
        TZ_CHECK(from_local("CET", 1607715115), 1607711515);
    } else {
        std::cerr << "NO TIMEZONE: CET" << std::endl;
    }
    if (has_timezone("CST6CDT")) {
        TZ_CHECK(from_utc("CST6CDT", 1438997042), 1438979042);
        TZ_CHECK(from_local("CST6CDT", 1438979042), 1438997042);
        TZ_CHECK(from_utc("CST6CDT", 1577358569), 1577336969);
        TZ_CHECK(from_local("CST6CDT", 1577336969), 1577358569);
        TZ_CHECK(from_utc("CST6CDT", 1611765849), 1611744249);
        TZ_CHECK(from_local("CST6CDT", 1611744249), 1611765849);
        TZ_CHECK(from_utc("CST6CDT", 1575720904), 1575699304);
        TZ_CHECK(from_local("CST6CDT", 1575699304), 1575720904);
        TZ_CHECK(from_utc("CST6CDT", 1511565089), 1511543489);
        TZ_CHECK(from_local("CST6CDT", 1511543489), 1511565089);
    } else {
        std::cerr << "NO TIMEZONE: CST6CDT" << std::endl;
    }
    if (has_timezone("Canada/Atlantic")) {
        TZ_CHECK(from_utc("Canada/Atlantic", 1598539129), 1598528329);
        TZ_CHECK(from_local("Canada/Atlantic", 1598528329), 1598539129);
        TZ_CHECK(from_utc("Canada/Atlantic", 1488124500), 1488110100);
        TZ_CHECK(from_local("Canada/Atlantic", 1488110100), 1488124500);
        TZ_CHECK(from_utc("Canada/Atlantic", 1497405585), 1497394785);
        TZ_CHECK(from_local("Canada/Atlantic", 1497394785), 1497405585);
        TZ_CHECK(from_utc("Canada/Atlantic", 1428446424), 1428435624);
        TZ_CHECK(from_local("Canada/Atlantic", 1428435624), 1428446424);
        TZ_CHECK(from_utc("Canada/Atlantic", 1429203336), 1429192536);
        TZ_CHECK(from_local("Canada/Atlantic", 1429192536), 1429203336);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Atlantic" << std::endl;
    }
    if (has_timezone("Canada/Central")) {
        TZ_CHECK(from_utc("Canada/Central", 1451145116), 1451123516);
        TZ_CHECK(from_local("Canada/Central", 1451123516), 1451145116);
        TZ_CHECK(from_utc("Canada/Central", 1427681269), 1427663269);
        TZ_CHECK(from_local("Canada/Central", 1427663269), 1427681269);
        TZ_CHECK(from_utc("Canada/Central", 1576144866), 1576123266);
        TZ_CHECK(from_local("Canada/Central", 1576123266), 1576144866);
        TZ_CHECK(from_utc("Canada/Central", 1533688053), 1533670053);
        TZ_CHECK(from_local("Canada/Central", 1533670053), 1533688053);
        TZ_CHECK(from_utc("Canada/Central", 1474680353), 1474662353);
        TZ_CHECK(from_local("Canada/Central", 1474662353), 1474680353);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Central" << std::endl;
    }
    if (has_timezone("Canada/Eastern")) {
        TZ_CHECK(from_utc("Canada/Eastern", 1524688387), 1524673987);
        TZ_CHECK(from_local("Canada/Eastern", 1524673987), 1524688387);
        TZ_CHECK(from_utc("Canada/Eastern", 1532307731), 1532293331);
        TZ_CHECK(from_local("Canada/Eastern", 1532293331), 1532307731);
        TZ_CHECK(from_utc("Canada/Eastern", 1629528677), 1629514277);
        TZ_CHECK(from_local("Canada/Eastern", 1629514277), 1629528677);
        TZ_CHECK(from_utc("Canada/Eastern", 1588049922), 1588035522);
        TZ_CHECK(from_local("Canada/Eastern", 1588035522), 1588049922);
        TZ_CHECK(from_utc("Canada/Eastern", 1510445237), 1510427237);
        TZ_CHECK(from_local("Canada/Eastern", 1510427237), 1510445237);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Eastern" << std::endl;
    }
    if (has_timezone("Canada/Mountain")) {
        TZ_CHECK(from_utc("Canada/Mountain", 1467301620), 1467280020);
        TZ_CHECK(from_local("Canada/Mountain", 1467280020), 1467301620);
        TZ_CHECK(from_utc("Canada/Mountain", 1515418847), 1515393647);
        TZ_CHECK(from_local("Canada/Mountain", 1515393647), 1515418847);
        TZ_CHECK(from_utc("Canada/Mountain", 1502931474), 1502909874);
        TZ_CHECK(from_local("Canada/Mountain", 1502909874), 1502931474);
        TZ_CHECK(from_utc("Canada/Mountain", 1481861022), 1481835822);
        TZ_CHECK(from_local("Canada/Mountain", 1481835822), 1481861022);
        TZ_CHECK(from_utc("Canada/Mountain", 1551468432), 1551443232);
        TZ_CHECK(from_local("Canada/Mountain", 1551443232), 1551468432);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Mountain" << std::endl;
    }
    if (has_timezone("Canada/Newfoundland")) {
        TZ_CHECK(from_utc("Canada/Newfoundland", 1565661177), 1565652177);
        TZ_CHECK(from_local("Canada/Newfoundland", 1565652177), 1565661177);
        TZ_CHECK(from_utc("Canada/Newfoundland", 1570151100), 1570142100);
        TZ_CHECK(from_local("Canada/Newfoundland", 1570142100), 1570151100);
        TZ_CHECK(from_utc("Canada/Newfoundland", 1425408275), 1425395675);
        TZ_CHECK(from_local("Canada/Newfoundland", 1425395675), 1425408275);
        TZ_CHECK(from_utc("Canada/Newfoundland", 1472177113), 1472168113);
        TZ_CHECK(from_local("Canada/Newfoundland", 1472168113), 1472177113);
        TZ_CHECK(from_utc("Canada/Newfoundland", 1502346078), 1502337078);
        TZ_CHECK(from_local("Canada/Newfoundland", 1502337078), 1502346078);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Newfoundland" << std::endl;
    }
    if (has_timezone("Canada/Pacific")) {
        TZ_CHECK(from_utc("Canada/Pacific", 1481976007), 1481947207);
        TZ_CHECK(from_local("Canada/Pacific", 1481947207), 1481976007);
        TZ_CHECK(from_utc("Canada/Pacific", 1569017378), 1568992178);
        TZ_CHECK(from_local("Canada/Pacific", 1568992178), 1569017378);
        TZ_CHECK(from_utc("Canada/Pacific", 1502876229), 1502851029);
        TZ_CHECK(from_local("Canada/Pacific", 1502851029), 1502876229);
        TZ_CHECK(from_utc("Canada/Pacific", 1425409623), 1425380823);
        TZ_CHECK(from_local("Canada/Pacific", 1425380823), 1425409623);
        TZ_CHECK(from_utc("Canada/Pacific", 1624247960), 1624222760);
        TZ_CHECK(from_local("Canada/Pacific", 1624222760), 1624247960);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Pacific" << std::endl;
    }
    if (has_timezone("Canada/Saskatchewan")) {
        TZ_CHECK(from_utc("Canada/Saskatchewan", 1629843703), 1629822103);
        TZ_CHECK(from_local("Canada/Saskatchewan", 1629822103), 1629843703);
        TZ_CHECK(from_utc("Canada/Saskatchewan", 1417552080), 1417530480);
        TZ_CHECK(from_local("Canada/Saskatchewan", 1417530480), 1417552080);
        TZ_CHECK(from_utc("Canada/Saskatchewan", 1548293383), 1548271783);
        TZ_CHECK(from_local("Canada/Saskatchewan", 1548271783), 1548293383);
        TZ_CHECK(from_utc("Canada/Saskatchewan", 1550415334), 1550393734);
        TZ_CHECK(from_local("Canada/Saskatchewan", 1550393734), 1550415334);
        TZ_CHECK(from_utc("Canada/Saskatchewan", 1550110415), 1550088815);
        TZ_CHECK(from_local("Canada/Saskatchewan", 1550088815), 1550110415);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Saskatchewan" << std::endl;
    }
    if (has_timezone("Canada/Yukon")) {
        TZ_CHECK(from_utc("Canada/Yukon", 1517491138), 1517462338);
        TZ_CHECK(from_local("Canada/Yukon", 1517462338), 1517491138);
        TZ_CHECK(from_utc("Canada/Yukon", 1504482296), 1504457096);
        TZ_CHECK(from_local("Canada/Yukon", 1504457096), 1504482296);
        TZ_CHECK(from_utc("Canada/Yukon", 1537615820), 1537590620);
        TZ_CHECK(from_local("Canada/Yukon", 1537590620), 1537615820);
        TZ_CHECK(from_utc("Canada/Yukon", 1572999653), 1572970853);
        TZ_CHECK(from_local("Canada/Yukon", 1572970853), 1572999653);
        TZ_CHECK(from_utc("Canada/Yukon", 1451384126), 1451355326);
        TZ_CHECK(from_local("Canada/Yukon", 1451355326), 1451384126);
    } else {
        std::cerr << "NO TIMEZONE: Canada/Yukon" << std::endl;
    }
    if (has_timezone("Chile/Continental")) {
        TZ_CHECK(from_utc("Chile/Continental", 1454061697), 1454050897);
        TZ_CHECK(from_local("Chile/Continental", 1454050897), 1454061697);
        TZ_CHECK(from_utc("Chile/Continental", 1502109628), 1502095228);
        TZ_CHECK(from_local("Chile/Continental", 1502095228), 1502109628);
        TZ_CHECK(from_utc("Chile/Continental", 1621333753), 1621319353);
        TZ_CHECK(from_local("Chile/Continental", 1621319353), 1621333753);
        TZ_CHECK(from_utc("Chile/Continental", 1607003111), 1606992311);
        TZ_CHECK(from_local("Chile/Continental", 1606992311), 1607003111);
        TZ_CHECK(from_utc("Chile/Continental", 1439949769), 1439938969);
        TZ_CHECK(from_local("Chile/Continental", 1439938969), 1439949769);
    } else {
        std::cerr << "NO TIMEZONE: Chile/Continental" << std::endl;
    }
    if (has_timezone("Chile/EasterIsland")) {
        TZ_CHECK(from_utc("Chile/EasterIsland", 1497782882), 1497761282);
        TZ_CHECK(from_local("Chile/EasterIsland", 1497761282), 1497782882);
        TZ_CHECK(from_utc("Chile/EasterIsland", 1442737731), 1442719731);
        TZ_CHECK(from_local("Chile/EasterIsland", 1442719731), 1442737731);
        TZ_CHECK(from_utc("Chile/EasterIsland", 1511081903), 1511063903);
        TZ_CHECK(from_local("Chile/EasterIsland", 1511063903), 1511081903);
        TZ_CHECK(from_utc("Chile/EasterIsland", 1434511347), 1434493347);
        TZ_CHECK(from_local("Chile/EasterIsland", 1434493347), 1434511347);
        TZ_CHECK(from_utc("Chile/EasterIsland", 1478239138), 1478221138);
        TZ_CHECK(from_local("Chile/EasterIsland", 1478221138), 1478239138);
    } else {
        std::cerr << "NO TIMEZONE: Chile/EasterIsland" << std::endl;
    }
    if (has_timezone("Cuba")) {
        TZ_CHECK(from_utc("Cuba", 1555233151), 1555218751);
        TZ_CHECK(from_local("Cuba", 1555218751), 1555233151);
        TZ_CHECK(from_utc("Cuba", 1526056922), 1526042522);
        TZ_CHECK(from_local("Cuba", 1526042522), 1526056922);
        TZ_CHECK(from_utc("Cuba", 1489417398), 1489402998);
        TZ_CHECK(from_local("Cuba", 1489402998), 1489417398);
        TZ_CHECK(from_utc("Cuba", 1497626326), 1497611926);
        TZ_CHECK(from_local("Cuba", 1497611926), 1497626326);
        TZ_CHECK(from_utc("Cuba", 1451635682), 1451617682);
        TZ_CHECK(from_local("Cuba", 1451617682), 1451635682);
    } else {
        std::cerr << "NO TIMEZONE: Cuba" << std::endl;
    }
    if (has_timezone("EET")) {
        TZ_CHECK(from_utc("EET", 1524237809), 1524248609);
        TZ_CHECK(from_local("EET", 1524248609), 1524237809);
        TZ_CHECK(from_utc("EET", 1531662194), 1531672994);
        TZ_CHECK(from_local("EET", 1531672994), 1531662194);
        TZ_CHECK(from_utc("EET", 1418263734), 1418270934);
        TZ_CHECK(from_local("EET", 1418270934), 1418263734);
        TZ_CHECK(from_utc("EET", 1618733698), 1618744498);
        TZ_CHECK(from_local("EET", 1618744498), 1618733698);
        TZ_CHECK(from_utc("EET", 1603383258), 1603394058);
        TZ_CHECK(from_local("EET", 1603394058), 1603383258);
    } else {
        std::cerr << "NO TIMEZONE: EET" << std::endl;
    }
    if (has_timezone("EST")) {
        TZ_CHECK(from_utc("EST", 1411450492), 1411432492);
        TZ_CHECK(from_local("EST", 1411432492), 1411450492);
        TZ_CHECK(from_utc("EST", 1463451269), 1463433269);
        TZ_CHECK(from_local("EST", 1463433269), 1463451269);
        TZ_CHECK(from_utc("EST", 1544667243), 1544649243);
        TZ_CHECK(from_local("EST", 1544649243), 1544667243);
        TZ_CHECK(from_utc("EST", 1530673231), 1530655231);
        TZ_CHECK(from_local("EST", 1530655231), 1530673231);
        TZ_CHECK(from_utc("EST", 1550435413), 1550417413);
        TZ_CHECK(from_local("EST", 1550417413), 1550435413);
    } else {
        std::cerr << "NO TIMEZONE: EST" << std::endl;
    }
    if (has_timezone("EST5EDT")) {
        TZ_CHECK(from_utc("EST5EDT", 1446196652), 1446182252);
        TZ_CHECK(from_local("EST5EDT", 1446182252), 1446196652);
        TZ_CHECK(from_utc("EST5EDT", 1447976612), 1447958612);
        TZ_CHECK(from_local("EST5EDT", 1447958612), 1447976612);
        TZ_CHECK(from_utc("EST5EDT", 1570256966), 1570242566);
        TZ_CHECK(from_local("EST5EDT", 1570242566), 1570256966);
        TZ_CHECK(from_utc("EST5EDT", 1606250502), 1606232502);
        TZ_CHECK(from_local("EST5EDT", 1606232502), 1606250502);
        TZ_CHECK(from_utc("EST5EDT", 1422705745), 1422687745);
        TZ_CHECK(from_local("EST5EDT", 1422687745), 1422705745);
    } else {
        std::cerr << "NO TIMEZONE: EST5EDT" << std::endl;
    }
    if (has_timezone("Egypt")) {
        TZ_CHECK(from_utc("Egypt", 1508768271), 1508775471);
        TZ_CHECK(from_local("Egypt", 1508775471), 1508768271);
        TZ_CHECK(from_utc("Egypt", 1434969608), 1434976808);
        TZ_CHECK(from_local("Egypt", 1434976808), 1434969608);
        TZ_CHECK(from_utc("Egypt", 1553802122), 1553809322);
        TZ_CHECK(from_local("Egypt", 1553809322), 1553802122);
        TZ_CHECK(from_utc("Egypt", 1584141154), 1584148354);
        TZ_CHECK(from_local("Egypt", 1584148354), 1584141154);
        TZ_CHECK(from_utc("Egypt", 1491828213), 1491835413);
        TZ_CHECK(from_local("Egypt", 1491835413), 1491828213);
    } else {
        std::cerr << "NO TIMEZONE: Egypt" << std::endl;
    }
    if (has_timezone("Eire")) {
        TZ_CHECK(from_utc("Eire", 1483948884), 1483948884);
        TZ_CHECK(from_local("Eire", 1483948884), 1483948884);
        TZ_CHECK(from_utc("Eire", 1467886817), 1467890417);
        TZ_CHECK(from_local("Eire", 1467890417), 1467886817);
        TZ_CHECK(from_utc("Eire", 1498936359), 1498939959);
        TZ_CHECK(from_local("Eire", 1498939959), 1498936359);
        TZ_CHECK(from_utc("Eire", 1617443307), 1617446907);
        TZ_CHECK(from_local("Eire", 1617446907), 1617443307);
        TZ_CHECK(from_utc("Eire", 1531406597), 1531410197);
        TZ_CHECK(from_local("Eire", 1531410197), 1531406597);
    } else {
        std::cerr << "NO TIMEZONE: Eire" << std::endl;
    }
    if (has_timezone("Etc/GMT")) {
        TZ_CHECK(from_utc("Etc/GMT", 1508485608), 1508485608);
        TZ_CHECK(from_local("Etc/GMT", 1508485608), 1508485608);
        TZ_CHECK(from_utc("Etc/GMT", 1573369790), 1573369790);
        TZ_CHECK(from_local("Etc/GMT", 1573369790), 1573369790);
        TZ_CHECK(from_utc("Etc/GMT", 1483680769), 1483680769);
        TZ_CHECK(from_local("Etc/GMT", 1483680769), 1483680769);
        TZ_CHECK(from_utc("Etc/GMT", 1556614141), 1556614141);
        TZ_CHECK(from_local("Etc/GMT", 1556614141), 1556614141);
        TZ_CHECK(from_utc("Etc/GMT", 1530640925), 1530640925);
        TZ_CHECK(from_local("Etc/GMT", 1530640925), 1530640925);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT" << std::endl;
    }
    if (has_timezone("Etc/GMT+0")) {
        TZ_CHECK(from_utc("Etc/GMT+0", 1479458208), 1479458208);
        TZ_CHECK(from_local("Etc/GMT+0", 1479458208), 1479458208);
        TZ_CHECK(from_utc("Etc/GMT+0", 1483810043), 1483810043);
        TZ_CHECK(from_local("Etc/GMT+0", 1483810043), 1483810043);
        TZ_CHECK(from_utc("Etc/GMT+0", 1515306479), 1515306479);
        TZ_CHECK(from_local("Etc/GMT+0", 1515306479), 1515306479);
        TZ_CHECK(from_utc("Etc/GMT+0", 1543134491), 1543134491);
        TZ_CHECK(from_local("Etc/GMT+0", 1543134491), 1543134491);
        TZ_CHECK(from_utc("Etc/GMT+0", 1486353370), 1486353370);
        TZ_CHECK(from_local("Etc/GMT+0", 1486353370), 1486353370);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+0" << std::endl;
    }
    if (has_timezone("Etc/GMT+1")) {
        TZ_CHECK(from_utc("Etc/GMT+1", 1586438071), 1586434471);
        TZ_CHECK(from_local("Etc/GMT+1", 1586434471), 1586438071);
        TZ_CHECK(from_utc("Etc/GMT+1", 1544207626), 1544204026);
        TZ_CHECK(from_local("Etc/GMT+1", 1544204026), 1544207626);
        TZ_CHECK(from_utc("Etc/GMT+1", 1423891206), 1423887606);
        TZ_CHECK(from_local("Etc/GMT+1", 1423887606), 1423891206);
        TZ_CHECK(from_utc("Etc/GMT+1", 1460786731), 1460783131);
        TZ_CHECK(from_local("Etc/GMT+1", 1460783131), 1460786731);
        TZ_CHECK(from_utc("Etc/GMT+1", 1509872600), 1509869000);
        TZ_CHECK(from_local("Etc/GMT+1", 1509869000), 1509872600);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+1" << std::endl;
    }
    if (has_timezone("Etc/GMT+10")) {
        TZ_CHECK(from_utc("Etc/GMT+10", 1486108068), 1486072068);
        TZ_CHECK(from_local("Etc/GMT+10", 1486072068), 1486108068);
        TZ_CHECK(from_utc("Etc/GMT+10", 1468290745), 1468254745);
        TZ_CHECK(from_local("Etc/GMT+10", 1468254745), 1468290745);
        TZ_CHECK(from_utc("Etc/GMT+10", 1571338944), 1571302944);
        TZ_CHECK(from_local("Etc/GMT+10", 1571302944), 1571338944);
        TZ_CHECK(from_utc("Etc/GMT+10", 1542624639), 1542588639);
        TZ_CHECK(from_local("Etc/GMT+10", 1542588639), 1542624639);
        TZ_CHECK(from_utc("Etc/GMT+10", 1433077745), 1433041745);
        TZ_CHECK(from_local("Etc/GMT+10", 1433041745), 1433077745);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+10" << std::endl;
    }
    if (has_timezone("Etc/GMT+11")) {
        TZ_CHECK(from_utc("Etc/GMT+11", 1495203715), 1495164115);
        TZ_CHECK(from_local("Etc/GMT+11", 1495164115), 1495203715);
        TZ_CHECK(from_utc("Etc/GMT+11", 1416518209), 1416478609);
        TZ_CHECK(from_local("Etc/GMT+11", 1416478609), 1416518209);
        TZ_CHECK(from_utc("Etc/GMT+11", 1550246629), 1550207029);
        TZ_CHECK(from_local("Etc/GMT+11", 1550207029), 1550246629);
        TZ_CHECK(from_utc("Etc/GMT+11", 1600093750), 1600054150);
        TZ_CHECK(from_local("Etc/GMT+11", 1600054150), 1600093750);
        TZ_CHECK(from_utc("Etc/GMT+11", 1432304013), 1432264413);
        TZ_CHECK(from_local("Etc/GMT+11", 1432264413), 1432304013);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+11" << std::endl;
    }
    if (has_timezone("Etc/GMT+12")) {
        TZ_CHECK(from_utc("Etc/GMT+12", 1457716500), 1457673300);
        TZ_CHECK(from_local("Etc/GMT+12", 1457673300), 1457716500);
        TZ_CHECK(from_utc("Etc/GMT+12", 1599728494), 1599685294);
        TZ_CHECK(from_local("Etc/GMT+12", 1599685294), 1599728494);
        TZ_CHECK(from_utc("Etc/GMT+12", 1580663269), 1580620069);
        TZ_CHECK(from_local("Etc/GMT+12", 1580620069), 1580663269);
        TZ_CHECK(from_utc("Etc/GMT+12", 1433381392), 1433338192);
        TZ_CHECK(from_local("Etc/GMT+12", 1433338192), 1433381392);
        TZ_CHECK(from_utc("Etc/GMT+12", 1535626229), 1535583029);
        TZ_CHECK(from_local("Etc/GMT+12", 1535583029), 1535626229);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+12" << std::endl;
    }
    if (has_timezone("Etc/GMT+2")) {
        TZ_CHECK(from_utc("Etc/GMT+2", 1595847311), 1595840111);
        TZ_CHECK(from_local("Etc/GMT+2", 1595840111), 1595847311);
        TZ_CHECK(from_utc("Etc/GMT+2", 1510134801), 1510127601);
        TZ_CHECK(from_local("Etc/GMT+2", 1510127601), 1510134801);
        TZ_CHECK(from_utc("Etc/GMT+2", 1481931489), 1481924289);
        TZ_CHECK(from_local("Etc/GMT+2", 1481924289), 1481931489);
        TZ_CHECK(from_utc("Etc/GMT+2", 1497727271), 1497720071);
        TZ_CHECK(from_local("Etc/GMT+2", 1497720071), 1497727271);
        TZ_CHECK(from_utc("Etc/GMT+2", 1548267509), 1548260309);
        TZ_CHECK(from_local("Etc/GMT+2", 1548260309), 1548267509);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+2" << std::endl;
    }
    if (has_timezone("Etc/GMT+3")) {
        TZ_CHECK(from_utc("Etc/GMT+3", 1413654824), 1413644024);
        TZ_CHECK(from_local("Etc/GMT+3", 1413644024), 1413654824);
        TZ_CHECK(from_utc("Etc/GMT+3", 1556038376), 1556027576);
        TZ_CHECK(from_local("Etc/GMT+3", 1556027576), 1556038376);
        TZ_CHECK(from_utc("Etc/GMT+3", 1459704543), 1459693743);
        TZ_CHECK(from_local("Etc/GMT+3", 1459693743), 1459704543);
        TZ_CHECK(from_utc("Etc/GMT+3", 1526489178), 1526478378);
        TZ_CHECK(from_local("Etc/GMT+3", 1526478378), 1526489178);
        TZ_CHECK(from_utc("Etc/GMT+3", 1562821270), 1562810470);
        TZ_CHECK(from_local("Etc/GMT+3", 1562810470), 1562821270);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+3" << std::endl;
    }
    if (has_timezone("Etc/GMT+4")) {
        TZ_CHECK(from_utc("Etc/GMT+4", 1436162518), 1436148118);
        TZ_CHECK(from_local("Etc/GMT+4", 1436148118), 1436162518);
        TZ_CHECK(from_utc("Etc/GMT+4", 1431075697), 1431061297);
        TZ_CHECK(from_local("Etc/GMT+4", 1431061297), 1431075697);
        TZ_CHECK(from_utc("Etc/GMT+4", 1564783406), 1564769006);
        TZ_CHECK(from_local("Etc/GMT+4", 1564769006), 1564783406);
        TZ_CHECK(from_utc("Etc/GMT+4", 1546124714), 1546110314);
        TZ_CHECK(from_local("Etc/GMT+4", 1546110314), 1546124714);
        TZ_CHECK(from_utc("Etc/GMT+4", 1606252360), 1606237960);
        TZ_CHECK(from_local("Etc/GMT+4", 1606237960), 1606252360);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+4" << std::endl;
    }
    if (has_timezone("Etc/GMT+5")) {
        TZ_CHECK(from_utc("Etc/GMT+5", 1425158242), 1425140242);
        TZ_CHECK(from_local("Etc/GMT+5", 1425140242), 1425158242);
        TZ_CHECK(from_utc("Etc/GMT+5", 1436406309), 1436388309);
        TZ_CHECK(from_local("Etc/GMT+5", 1436388309), 1436406309);
        TZ_CHECK(from_utc("Etc/GMT+5", 1436523801), 1436505801);
        TZ_CHECK(from_local("Etc/GMT+5", 1436505801), 1436523801);
        TZ_CHECK(from_utc("Etc/GMT+5", 1438310621), 1438292621);
        TZ_CHECK(from_local("Etc/GMT+5", 1438292621), 1438310621);
        TZ_CHECK(from_utc("Etc/GMT+5", 1528819788), 1528801788);
        TZ_CHECK(from_local("Etc/GMT+5", 1528801788), 1528819788);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+5" << std::endl;
    }
    if (has_timezone("Etc/GMT+6")) {
        TZ_CHECK(from_utc("Etc/GMT+6", 1601873901), 1601852301);
        TZ_CHECK(from_local("Etc/GMT+6", 1601852301), 1601873901);
        TZ_CHECK(from_utc("Etc/GMT+6", 1592947176), 1592925576);
        TZ_CHECK(from_local("Etc/GMT+6", 1592925576), 1592947176);
        TZ_CHECK(from_utc("Etc/GMT+6", 1606501153), 1606479553);
        TZ_CHECK(from_local("Etc/GMT+6", 1606479553), 1606501153);
        TZ_CHECK(from_utc("Etc/GMT+6", 1558541330), 1558519730);
        TZ_CHECK(from_local("Etc/GMT+6", 1558519730), 1558541330);
        TZ_CHECK(from_utc("Etc/GMT+6", 1518215958), 1518194358);
        TZ_CHECK(from_local("Etc/GMT+6", 1518194358), 1518215958);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+6" << std::endl;
    }
    if (has_timezone("Etc/GMT+7")) {
        TZ_CHECK(from_utc("Etc/GMT+7", 1620055436), 1620030236);
        TZ_CHECK(from_local("Etc/GMT+7", 1620030236), 1620055436);
        TZ_CHECK(from_utc("Etc/GMT+7", 1443101669), 1443076469);
        TZ_CHECK(from_local("Etc/GMT+7", 1443076469), 1443101669);
        TZ_CHECK(from_utc("Etc/GMT+7", 1481814636), 1481789436);
        TZ_CHECK(from_local("Etc/GMT+7", 1481789436), 1481814636);
        TZ_CHECK(from_utc("Etc/GMT+7", 1598810234), 1598785034);
        TZ_CHECK(from_local("Etc/GMT+7", 1598785034), 1598810234);
        TZ_CHECK(from_utc("Etc/GMT+7", 1470164659), 1470139459);
        TZ_CHECK(from_local("Etc/GMT+7", 1470139459), 1470164659);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+7" << std::endl;
    }
    if (has_timezone("Etc/GMT+8")) {
        TZ_CHECK(from_utc("Etc/GMT+8", 1520393854), 1520365054);
        TZ_CHECK(from_local("Etc/GMT+8", 1520365054), 1520393854);
        TZ_CHECK(from_utc("Etc/GMT+8", 1591962149), 1591933349);
        TZ_CHECK(from_local("Etc/GMT+8", 1591933349), 1591962149);
        TZ_CHECK(from_utc("Etc/GMT+8", 1556491334), 1556462534);
        TZ_CHECK(from_local("Etc/GMT+8", 1556462534), 1556491334);
        TZ_CHECK(from_utc("Etc/GMT+8", 1428668990), 1428640190);
        TZ_CHECK(from_local("Etc/GMT+8", 1428640190), 1428668990);
        TZ_CHECK(from_utc("Etc/GMT+8", 1500523588), 1500494788);
        TZ_CHECK(from_local("Etc/GMT+8", 1500494788), 1500523588);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+8" << std::endl;
    }
    if (has_timezone("Etc/GMT+9")) {
        TZ_CHECK(from_utc("Etc/GMT+9", 1529580976), 1529548576);
        TZ_CHECK(from_local("Etc/GMT+9", 1529548576), 1529580976);
        TZ_CHECK(from_utc("Etc/GMT+9", 1607761778), 1607729378);
        TZ_CHECK(from_local("Etc/GMT+9", 1607729378), 1607761778);
        TZ_CHECK(from_utc("Etc/GMT+9", 1446888829), 1446856429);
        TZ_CHECK(from_local("Etc/GMT+9", 1446856429), 1446888829);
        TZ_CHECK(from_utc("Etc/GMT+9", 1597110914), 1597078514);
        TZ_CHECK(from_local("Etc/GMT+9", 1597078514), 1597110914);
        TZ_CHECK(from_utc("Etc/GMT+9", 1413484051), 1413451651);
        TZ_CHECK(from_local("Etc/GMT+9", 1413451651), 1413484051);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+9" << std::endl;
    }
    if (has_timezone("Etc/GMT-0")) {
        TZ_CHECK(from_utc("Etc/GMT-0", 1566165890), 1566165890);
        TZ_CHECK(from_local("Etc/GMT-0", 1566165890), 1566165890);
        TZ_CHECK(from_utc("Etc/GMT-0", 1569524831), 1569524831);
        TZ_CHECK(from_local("Etc/GMT-0", 1569524831), 1569524831);
        TZ_CHECK(from_utc("Etc/GMT-0", 1519741926), 1519741926);
        TZ_CHECK(from_local("Etc/GMT-0", 1519741926), 1519741926);
        TZ_CHECK(from_utc("Etc/GMT-0", 1580686258), 1580686258);
        TZ_CHECK(from_local("Etc/GMT-0", 1580686258), 1580686258);
        TZ_CHECK(from_utc("Etc/GMT-0", 1549061587), 1549061587);
        TZ_CHECK(from_local("Etc/GMT-0", 1549061587), 1549061587);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-0" << std::endl;
    }
    if (has_timezone("Etc/GMT-1")) {
        TZ_CHECK(from_utc("Etc/GMT-1", 1578990030), 1578993630);
        TZ_CHECK(from_local("Etc/GMT-1", 1578993630), 1578990030);
        TZ_CHECK(from_utc("Etc/GMT-1", 1611090352), 1611093952);
        TZ_CHECK(from_local("Etc/GMT-1", 1611093952), 1611090352);
        TZ_CHECK(from_utc("Etc/GMT-1", 1524507829), 1524511429);
        TZ_CHECK(from_local("Etc/GMT-1", 1524511429), 1524507829);
        TZ_CHECK(from_utc("Etc/GMT-1", 1432600609), 1432604209);
        TZ_CHECK(from_local("Etc/GMT-1", 1432604209), 1432600609);
        TZ_CHECK(from_utc("Etc/GMT-1", 1517634740), 1517638340);
        TZ_CHECK(from_local("Etc/GMT-1", 1517638340), 1517634740);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-1" << std::endl;
    }
    if (has_timezone("Etc/GMT-10")) {
        TZ_CHECK(from_utc("Etc/GMT-10", 1493671245), 1493707245);
        TZ_CHECK(from_local("Etc/GMT-10", 1493707245), 1493671245);
        TZ_CHECK(from_utc("Etc/GMT-10", 1617236653), 1617272653);
        TZ_CHECK(from_local("Etc/GMT-10", 1617272653), 1617236653);
        TZ_CHECK(from_utc("Etc/GMT-10", 1499500792), 1499536792);
        TZ_CHECK(from_local("Etc/GMT-10", 1499536792), 1499500792);
        TZ_CHECK(from_utc("Etc/GMT-10", 1503263887), 1503299887);
        TZ_CHECK(from_local("Etc/GMT-10", 1503299887), 1503263887);
        TZ_CHECK(from_utc("Etc/GMT-10", 1507274008), 1507310008);
        TZ_CHECK(from_local("Etc/GMT-10", 1507310008), 1507274008);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-10" << std::endl;
    }
    if (has_timezone("Etc/GMT-11")) {
        TZ_CHECK(from_utc("Etc/GMT-11", 1478415850), 1478455450);
        TZ_CHECK(from_local("Etc/GMT-11", 1478455450), 1478415850);
        TZ_CHECK(from_utc("Etc/GMT-11", 1540115989), 1540155589);
        TZ_CHECK(from_local("Etc/GMT-11", 1540155589), 1540115989);
        TZ_CHECK(from_utc("Etc/GMT-11", 1601632586), 1601672186);
        TZ_CHECK(from_local("Etc/GMT-11", 1601672186), 1601632586);
        TZ_CHECK(from_utc("Etc/GMT-11", 1544293618), 1544333218);
        TZ_CHECK(from_local("Etc/GMT-11", 1544333218), 1544293618);
        TZ_CHECK(from_utc("Etc/GMT-11", 1552304641), 1552344241);
        TZ_CHECK(from_local("Etc/GMT-11", 1552344241), 1552304641);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-11" << std::endl;
    }
    if (has_timezone("Etc/GMT-12")) {
        TZ_CHECK(from_utc("Etc/GMT-12", 1508371855), 1508415055);
        TZ_CHECK(from_local("Etc/GMT-12", 1508415055), 1508371855);
        TZ_CHECK(from_utc("Etc/GMT-12", 1618729566), 1618772766);
        TZ_CHECK(from_local("Etc/GMT-12", 1618772766), 1618729566);
        TZ_CHECK(from_utc("Etc/GMT-12", 1523257617), 1523300817);
        TZ_CHECK(from_local("Etc/GMT-12", 1523300817), 1523257617);
        TZ_CHECK(from_utc("Etc/GMT-12", 1444622583), 1444665783);
        TZ_CHECK(from_local("Etc/GMT-12", 1444665783), 1444622583);
        TZ_CHECK(from_utc("Etc/GMT-12", 1579312953), 1579356153);
        TZ_CHECK(from_local("Etc/GMT-12", 1579356153), 1579312953);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-12" << std::endl;
    }
    if (has_timezone("Etc/GMT-13")) {
        TZ_CHECK(from_utc("Etc/GMT-13", 1469709654), 1469756454);
        TZ_CHECK(from_local("Etc/GMT-13", 1469756454), 1469709654);
        TZ_CHECK(from_utc("Etc/GMT-13", 1516949860), 1516996660);
        TZ_CHECK(from_local("Etc/GMT-13", 1516996660), 1516949860);
        TZ_CHECK(from_utc("Etc/GMT-13", 1513883662), 1513930462);
        TZ_CHECK(from_local("Etc/GMT-13", 1513930462), 1513883662);
        TZ_CHECK(from_utc("Etc/GMT-13", 1542565987), 1542612787);
        TZ_CHECK(from_local("Etc/GMT-13", 1542612787), 1542565987);
        TZ_CHECK(from_utc("Etc/GMT-13", 1587059087), 1587105887);
        TZ_CHECK(from_local("Etc/GMT-13", 1587105887), 1587059087);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-13" << std::endl;
    }
    if (has_timezone("Etc/GMT-14")) {
        TZ_CHECK(from_utc("Etc/GMT-14", 1550283349), 1550333749);
        TZ_CHECK(from_local("Etc/GMT-14", 1550333749), 1550283349);
        TZ_CHECK(from_utc("Etc/GMT-14", 1520744590), 1520794990);
        TZ_CHECK(from_local("Etc/GMT-14", 1520794990), 1520744590);
        TZ_CHECK(from_utc("Etc/GMT-14", 1506420216), 1506470616);
        TZ_CHECK(from_local("Etc/GMT-14", 1506470616), 1506420216);
        TZ_CHECK(from_utc("Etc/GMT-14", 1508779731), 1508830131);
        TZ_CHECK(from_local("Etc/GMT-14", 1508830131), 1508779731);
        TZ_CHECK(from_utc("Etc/GMT-14", 1586247497), 1586297897);
        TZ_CHECK(from_local("Etc/GMT-14", 1586297897), 1586247497);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-14" << std::endl;
    }
    if (has_timezone("Etc/GMT-2")) {
        TZ_CHECK(from_utc("Etc/GMT-2", 1513895836), 1513903036);
        TZ_CHECK(from_local("Etc/GMT-2", 1513903036), 1513895836);
        TZ_CHECK(from_utc("Etc/GMT-2", 1556282084), 1556289284);
        TZ_CHECK(from_local("Etc/GMT-2", 1556289284), 1556282084);
        TZ_CHECK(from_utc("Etc/GMT-2", 1537938039), 1537945239);
        TZ_CHECK(from_local("Etc/GMT-2", 1537945239), 1537938039);
        TZ_CHECK(from_utc("Etc/GMT-2", 1580323692), 1580330892);
        TZ_CHECK(from_local("Etc/GMT-2", 1580330892), 1580323692);
        TZ_CHECK(from_utc("Etc/GMT-2", 1502147051), 1502154251);
        TZ_CHECK(from_local("Etc/GMT-2", 1502154251), 1502147051);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-2" << std::endl;
    }
    if (has_timezone("Etc/GMT-3")) {
        TZ_CHECK(from_utc("Etc/GMT-3", 1605184840), 1605195640);
        TZ_CHECK(from_local("Etc/GMT-3", 1605195640), 1605184840);
        TZ_CHECK(from_utc("Etc/GMT-3", 1574572268), 1574583068);
        TZ_CHECK(from_local("Etc/GMT-3", 1574583068), 1574572268);
        TZ_CHECK(from_utc("Etc/GMT-3", 1561444348), 1561455148);
        TZ_CHECK(from_local("Etc/GMT-3", 1561455148), 1561444348);
        TZ_CHECK(from_utc("Etc/GMT-3", 1622497603), 1622508403);
        TZ_CHECK(from_local("Etc/GMT-3", 1622508403), 1622497603);
        TZ_CHECK(from_utc("Etc/GMT-3", 1505212565), 1505223365);
        TZ_CHECK(from_local("Etc/GMT-3", 1505223365), 1505212565);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-3" << std::endl;
    }
    if (has_timezone("Etc/GMT-4")) {
        TZ_CHECK(from_utc("Etc/GMT-4", 1546015723), 1546030123);
        TZ_CHECK(from_local("Etc/GMT-4", 1546030123), 1546015723);
        TZ_CHECK(from_utc("Etc/GMT-4", 1586975713), 1586990113);
        TZ_CHECK(from_local("Etc/GMT-4", 1586990113), 1586975713);
        TZ_CHECK(from_utc("Etc/GMT-4", 1538977733), 1538992133);
        TZ_CHECK(from_local("Etc/GMT-4", 1538992133), 1538977733);
        TZ_CHECK(from_utc("Etc/GMT-4", 1455349614), 1455364014);
        TZ_CHECK(from_local("Etc/GMT-4", 1455364014), 1455349614);
        TZ_CHECK(from_utc("Etc/GMT-4", 1532656864), 1532671264);
        TZ_CHECK(from_local("Etc/GMT-4", 1532671264), 1532656864);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-4" << std::endl;
    }
    if (has_timezone("Etc/GMT-5")) {
        TZ_CHECK(from_utc("Etc/GMT-5", 1504160105), 1504178105);
        TZ_CHECK(from_local("Etc/GMT-5", 1504178105), 1504160105);
        TZ_CHECK(from_utc("Etc/GMT-5", 1521195623), 1521213623);
        TZ_CHECK(from_local("Etc/GMT-5", 1521213623), 1521195623);
        TZ_CHECK(from_utc("Etc/GMT-5", 1430313654), 1430331654);
        TZ_CHECK(from_local("Etc/GMT-5", 1430331654), 1430313654);
        TZ_CHECK(from_utc("Etc/GMT-5", 1605404717), 1605422717);
        TZ_CHECK(from_local("Etc/GMT-5", 1605422717), 1605404717);
        TZ_CHECK(from_utc("Etc/GMT-5", 1515996388), 1516014388);
        TZ_CHECK(from_local("Etc/GMT-5", 1516014388), 1515996388);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-5" << std::endl;
    }
    if (has_timezone("Etc/GMT-6")) {
        TZ_CHECK(from_utc("Etc/GMT-6", 1454619808), 1454641408);
        TZ_CHECK(from_local("Etc/GMT-6", 1454641408), 1454619808);
        TZ_CHECK(from_utc("Etc/GMT-6", 1551048708), 1551070308);
        TZ_CHECK(from_local("Etc/GMT-6", 1551070308), 1551048708);
        TZ_CHECK(from_utc("Etc/GMT-6", 1479234666), 1479256266);
        TZ_CHECK(from_local("Etc/GMT-6", 1479256266), 1479234666);
        TZ_CHECK(from_utc("Etc/GMT-6", 1538033034), 1538054634);
        TZ_CHECK(from_local("Etc/GMT-6", 1538054634), 1538033034);
        TZ_CHECK(from_utc("Etc/GMT-6", 1463131669), 1463153269);
        TZ_CHECK(from_local("Etc/GMT-6", 1463153269), 1463131669);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-6" << std::endl;
    }
    if (has_timezone("Etc/GMT-7")) {
        TZ_CHECK(from_utc("Etc/GMT-7", 1629073844), 1629099044);
        TZ_CHECK(from_local("Etc/GMT-7", 1629099044), 1629073844);
        TZ_CHECK(from_utc("Etc/GMT-7", 1430572244), 1430597444);
        TZ_CHECK(from_local("Etc/GMT-7", 1430597444), 1430572244);
        TZ_CHECK(from_utc("Etc/GMT-7", 1543687541), 1543712741);
        TZ_CHECK(from_local("Etc/GMT-7", 1543712741), 1543687541);
        TZ_CHECK(from_utc("Etc/GMT-7", 1410595356), 1410620556);
        TZ_CHECK(from_local("Etc/GMT-7", 1410620556), 1410595356);
        TZ_CHECK(from_utc("Etc/GMT-7", 1439722846), 1439748046);
        TZ_CHECK(from_local("Etc/GMT-7", 1439748046), 1439722846);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-7" << std::endl;
    }
    if (has_timezone("Etc/GMT-8")) {
        TZ_CHECK(from_utc("Etc/GMT-8", 1445997916), 1446026716);
        TZ_CHECK(from_local("Etc/GMT-8", 1446026716), 1445997916);
        TZ_CHECK(from_utc("Etc/GMT-8", 1478824672), 1478853472);
        TZ_CHECK(from_local("Etc/GMT-8", 1478853472), 1478824672);
        TZ_CHECK(from_utc("Etc/GMT-8", 1614091573), 1614120373);
        TZ_CHECK(from_local("Etc/GMT-8", 1614120373), 1614091573);
        TZ_CHECK(from_utc("Etc/GMT-8", 1597509196), 1597537996);
        TZ_CHECK(from_local("Etc/GMT-8", 1597537996), 1597509196);
        TZ_CHECK(from_utc("Etc/GMT-8", 1459891870), 1459920670);
        TZ_CHECK(from_local("Etc/GMT-8", 1459920670), 1459891870);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-8" << std::endl;
    }
    if (has_timezone("Etc/GMT-9")) {
        TZ_CHECK(from_utc("Etc/GMT-9", 1470253902), 1470286302);
        TZ_CHECK(from_local("Etc/GMT-9", 1470286302), 1470253902);
        TZ_CHECK(from_utc("Etc/GMT-9", 1624748908), 1624781308);
        TZ_CHECK(from_local("Etc/GMT-9", 1624781308), 1624748908);
        TZ_CHECK(from_utc("Etc/GMT-9", 1425958507), 1425990907);
        TZ_CHECK(from_local("Etc/GMT-9", 1425990907), 1425958507);
        TZ_CHECK(from_utc("Etc/GMT-9", 1526229862), 1526262262);
        TZ_CHECK(from_local("Etc/GMT-9", 1526262262), 1526229862);
        TZ_CHECK(from_utc("Etc/GMT-9", 1510149799), 1510182199);
        TZ_CHECK(from_local("Etc/GMT-9", 1510182199), 1510149799);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-9" << std::endl;
    }
    if (has_timezone("Etc/GMT0")) {
        TZ_CHECK(from_utc("Etc/GMT0", 1549637027), 1549637027);
        TZ_CHECK(from_local("Etc/GMT0", 1549637027), 1549637027);
        TZ_CHECK(from_utc("Etc/GMT0", 1519756156), 1519756156);
        TZ_CHECK(from_local("Etc/GMT0", 1519756156), 1519756156);
        TZ_CHECK(from_utc("Etc/GMT0", 1560495089), 1560495089);
        TZ_CHECK(from_local("Etc/GMT0", 1560495089), 1560495089);
        TZ_CHECK(from_utc("Etc/GMT0", 1561473194), 1561473194);
        TZ_CHECK(from_local("Etc/GMT0", 1561473194), 1561473194);
        TZ_CHECK(from_utc("Etc/GMT0", 1611901369), 1611901369);
        TZ_CHECK(from_local("Etc/GMT0", 1611901369), 1611901369);
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT0" << std::endl;
    }
    if (has_timezone("Etc/Greenwich")) {
        TZ_CHECK(from_utc("Etc/Greenwich", 1453702169), 1453702169);
        TZ_CHECK(from_local("Etc/Greenwich", 1453702169), 1453702169);
        TZ_CHECK(from_utc("Etc/Greenwich", 1512504376), 1512504376);
        TZ_CHECK(from_local("Etc/Greenwich", 1512504376), 1512504376);
        TZ_CHECK(from_utc("Etc/Greenwich", 1419314524), 1419314524);
        TZ_CHECK(from_local("Etc/Greenwich", 1419314524), 1419314524);
        TZ_CHECK(from_utc("Etc/Greenwich", 1625073442), 1625073442);
        TZ_CHECK(from_local("Etc/Greenwich", 1625073442), 1625073442);
        TZ_CHECK(from_utc("Etc/Greenwich", 1526167621), 1526167621);
        TZ_CHECK(from_local("Etc/Greenwich", 1526167621), 1526167621);
    } else {
        std::cerr << "NO TIMEZONE: Etc/Greenwich" << std::endl;
    }
    if (has_timezone("Etc/UCT")) {
        TZ_CHECK(from_utc("Etc/UCT", 1596843288), 1596843288);
        TZ_CHECK(from_local("Etc/UCT", 1596843288), 1596843288);
        TZ_CHECK(from_utc("Etc/UCT", 1449989679), 1449989679);
        TZ_CHECK(from_local("Etc/UCT", 1449989679), 1449989679);
        TZ_CHECK(from_utc("Etc/UCT", 1601081869), 1601081869);
        TZ_CHECK(from_local("Etc/UCT", 1601081869), 1601081869);
        TZ_CHECK(from_utc("Etc/UCT", 1485615698), 1485615698);
        TZ_CHECK(from_local("Etc/UCT", 1485615698), 1485615698);
        TZ_CHECK(from_utc("Etc/UCT", 1626498139), 1626498139);
        TZ_CHECK(from_local("Etc/UCT", 1626498139), 1626498139);
    } else {
        std::cerr << "NO TIMEZONE: Etc/UCT" << std::endl;
    }
    if (has_timezone("Etc/UTC")) {
        TZ_CHECK(from_utc("Etc/UTC", 1431267303), 1431267303);
        TZ_CHECK(from_local("Etc/UTC", 1431267303), 1431267303);
        TZ_CHECK(from_utc("Etc/UTC", 1467860989), 1467860989);
        TZ_CHECK(from_local("Etc/UTC", 1467860989), 1467860989);
        TZ_CHECK(from_utc("Etc/UTC", 1421152543), 1421152543);
        TZ_CHECK(from_local("Etc/UTC", 1421152543), 1421152543);
        TZ_CHECK(from_utc("Etc/UTC", 1516832855), 1516832855);
        TZ_CHECK(from_local("Etc/UTC", 1516832855), 1516832855);
        TZ_CHECK(from_utc("Etc/UTC", 1514412832), 1514412832);
        TZ_CHECK(from_local("Etc/UTC", 1514412832), 1514412832);
    } else {
        std::cerr << "NO TIMEZONE: Etc/UTC" << std::endl;
    }
    if (has_timezone("Etc/Universal")) {
        TZ_CHECK(from_utc("Etc/Universal", 1449442522), 1449442522);
        TZ_CHECK(from_local("Etc/Universal", 1449442522), 1449442522);
        TZ_CHECK(from_utc("Etc/Universal", 1536755767), 1536755767);
        TZ_CHECK(from_local("Etc/Universal", 1536755767), 1536755767);
        TZ_CHECK(from_utc("Etc/Universal", 1621512407), 1621512407);
        TZ_CHECK(from_local("Etc/Universal", 1621512407), 1621512407);
        TZ_CHECK(from_utc("Etc/Universal", 1415478201), 1415478201);
        TZ_CHECK(from_local("Etc/Universal", 1415478201), 1415478201);
        TZ_CHECK(from_utc("Etc/Universal", 1508420325), 1508420325);
        TZ_CHECK(from_local("Etc/Universal", 1508420325), 1508420325);
    } else {
        std::cerr << "NO TIMEZONE: Etc/Universal" << std::endl;
    }
    if (has_timezone("Etc/Zulu")) {
        TZ_CHECK(from_utc("Etc/Zulu", 1535971691), 1535971691);
        TZ_CHECK(from_local("Etc/Zulu", 1535971691), 1535971691);
        TZ_CHECK(from_utc("Etc/Zulu", 1565156796), 1565156796);
        TZ_CHECK(from_local("Etc/Zulu", 1565156796), 1565156796);
        TZ_CHECK(from_utc("Etc/Zulu", 1490764391), 1490764391);
        TZ_CHECK(from_local("Etc/Zulu", 1490764391), 1490764391);
        TZ_CHECK(from_utc("Etc/Zulu", 1441357378), 1441357378);
        TZ_CHECK(from_local("Etc/Zulu", 1441357378), 1441357378);
        TZ_CHECK(from_utc("Etc/Zulu", 1551919249), 1551919249);
        TZ_CHECK(from_local("Etc/Zulu", 1551919249), 1551919249);
    } else {
        std::cerr << "NO TIMEZONE: Etc/Zulu" << std::endl;
    }
    if (has_timezone("Europe/Amsterdam")) {
        TZ_CHECK(from_utc("Europe/Amsterdam", 1417824461), 1417828061);
        TZ_CHECK(from_local("Europe/Amsterdam", 1417828061), 1417824461);
        TZ_CHECK(from_utc("Europe/Amsterdam", 1492148659), 1492155859);
        TZ_CHECK(from_local("Europe/Amsterdam", 1492155859), 1492148659);
        TZ_CHECK(from_utc("Europe/Amsterdam", 1608617941), 1608621541);
        TZ_CHECK(from_local("Europe/Amsterdam", 1608621541), 1608617941);
        TZ_CHECK(from_utc("Europe/Amsterdam", 1432815713), 1432822913);
        TZ_CHECK(from_local("Europe/Amsterdam", 1432822913), 1432815713);
        TZ_CHECK(from_utc("Europe/Amsterdam", 1579591819), 1579595419);
        TZ_CHECK(from_local("Europe/Amsterdam", 1579595419), 1579591819);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Amsterdam" << std::endl;
    }
    if (has_timezone("Europe/Andorra")) {
        TZ_CHECK(from_utc("Europe/Andorra", 1514137178), 1514140778);
        TZ_CHECK(from_local("Europe/Andorra", 1514140778), 1514137178);
        TZ_CHECK(from_utc("Europe/Andorra", 1490990425), 1490997625);
        TZ_CHECK(from_local("Europe/Andorra", 1490997625), 1490990425);
        TZ_CHECK(from_utc("Europe/Andorra", 1522341039), 1522348239);
        TZ_CHECK(from_local("Europe/Andorra", 1522348239), 1522341039);
        TZ_CHECK(from_utc("Europe/Andorra", 1519877789), 1519881389);
        TZ_CHECK(from_local("Europe/Andorra", 1519881389), 1519877789);
        TZ_CHECK(from_utc("Europe/Andorra", 1435029180), 1435036380);
        TZ_CHECK(from_local("Europe/Andorra", 1435036380), 1435029180);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Andorra" << std::endl;
    }
    if (has_timezone("Europe/Astrakhan")) {
        TZ_CHECK(from_utc("Europe/Astrakhan", 1548427769), 1548442169);
        TZ_CHECK(from_local("Europe/Astrakhan", 1548442169), 1548427769);
        TZ_CHECK(from_utc("Europe/Astrakhan", 1556777666), 1556792066);
        TZ_CHECK(from_local("Europe/Astrakhan", 1556792066), 1556777666);
        TZ_CHECK(from_utc("Europe/Astrakhan", 1541110213), 1541124613);
        TZ_CHECK(from_local("Europe/Astrakhan", 1541124613), 1541110213);
        TZ_CHECK(from_utc("Europe/Astrakhan", 1521739437), 1521753837);
        TZ_CHECK(from_local("Europe/Astrakhan", 1521753837), 1521739437);
        TZ_CHECK(from_utc("Europe/Astrakhan", 1476010958), 1476025358);
        TZ_CHECK(from_local("Europe/Astrakhan", 1476025358), 1476010958);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Astrakhan" << std::endl;
    }
    if (has_timezone("Europe/Athens")) {
        TZ_CHECK(from_utc("Europe/Athens", 1511755277), 1511762477);
        TZ_CHECK(from_local("Europe/Athens", 1511762477), 1511755277);
        TZ_CHECK(from_utc("Europe/Athens", 1615356769), 1615363969);
        TZ_CHECK(from_local("Europe/Athens", 1615363969), 1615356769);
        TZ_CHECK(from_utc("Europe/Athens", 1481686477), 1481693677);
        TZ_CHECK(from_local("Europe/Athens", 1481693677), 1481686477);
        TZ_CHECK(from_utc("Europe/Athens", 1540820108), 1540827308);
        TZ_CHECK(from_local("Europe/Athens", 1540827308), 1540820108);
        TZ_CHECK(from_utc("Europe/Athens", 1502339299), 1502350099);
        TZ_CHECK(from_local("Europe/Athens", 1502350099), 1502339299);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Athens" << std::endl;
    }
    if (has_timezone("Europe/Belfast")) {
        TZ_CHECK(from_utc("Europe/Belfast", 1616534749), 1616534749);
        TZ_CHECK(from_local("Europe/Belfast", 1616534749), 1616534749);
        TZ_CHECK(from_utc("Europe/Belfast", 1569065857), 1569069457);
        TZ_CHECK(from_local("Europe/Belfast", 1569069457), 1569065857);
        TZ_CHECK(from_utc("Europe/Belfast", 1612088093), 1612088093);
        TZ_CHECK(from_local("Europe/Belfast", 1612088093), 1612088093);
        TZ_CHECK(from_utc("Europe/Belfast", 1540383659), 1540387259);
        TZ_CHECK(from_local("Europe/Belfast", 1540387259), 1540383659);
        TZ_CHECK(from_utc("Europe/Belfast", 1474838684), 1474842284);
        TZ_CHECK(from_local("Europe/Belfast", 1474842284), 1474838684);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Belfast" << std::endl;
    }
    if (has_timezone("Europe/Belgrade")) {
        TZ_CHECK(from_utc("Europe/Belgrade", 1525820721), 1525827921);
        TZ_CHECK(from_local("Europe/Belgrade", 1525827921), 1525820721);
        TZ_CHECK(from_utc("Europe/Belgrade", 1484266449), 1484270049);
        TZ_CHECK(from_local("Europe/Belgrade", 1484270049), 1484266449);
        TZ_CHECK(from_utc("Europe/Belgrade", 1485692300), 1485695900);
        TZ_CHECK(from_local("Europe/Belgrade", 1485695900), 1485692300);
        TZ_CHECK(from_utc("Europe/Belgrade", 1622394903), 1622402103);
        TZ_CHECK(from_local("Europe/Belgrade", 1622402103), 1622394903);
        TZ_CHECK(from_utc("Europe/Belgrade", 1589217268), 1589224468);
        TZ_CHECK(from_local("Europe/Belgrade", 1589224468), 1589217268);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Belgrade" << std::endl;
    }
    if (has_timezone("Europe/Berlin")) {
        TZ_CHECK(from_utc("Europe/Berlin", 1547247371), 1547250971);
        TZ_CHECK(from_local("Europe/Berlin", 1547250971), 1547247371);
        TZ_CHECK(from_utc("Europe/Berlin", 1620666324), 1620673524);
        TZ_CHECK(from_local("Europe/Berlin", 1620673524), 1620666324);
        TZ_CHECK(from_utc("Europe/Berlin", 1574859215), 1574862815);
        TZ_CHECK(from_local("Europe/Berlin", 1574862815), 1574859215);
        TZ_CHECK(from_utc("Europe/Berlin", 1450938909), 1450942509);
        TZ_CHECK(from_local("Europe/Berlin", 1450942509), 1450938909);
        TZ_CHECK(from_utc("Europe/Berlin", 1468428793), 1468435993);
        TZ_CHECK(from_local("Europe/Berlin", 1468435993), 1468428793);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Berlin" << std::endl;
    }
    if (has_timezone("Europe/Bratislava")) {
        TZ_CHECK(from_utc("Europe/Bratislava", 1556583870), 1556591070);
        TZ_CHECK(from_local("Europe/Bratislava", 1556591070), 1556583870);
        TZ_CHECK(from_utc("Europe/Bratislava", 1565636010), 1565643210);
        TZ_CHECK(from_local("Europe/Bratislava", 1565643210), 1565636010);
        TZ_CHECK(from_utc("Europe/Bratislava", 1521473223), 1521476823);
        TZ_CHECK(from_local("Europe/Bratislava", 1521476823), 1521473223);
        TZ_CHECK(from_utc("Europe/Bratislava", 1476314072), 1476321272);
        TZ_CHECK(from_local("Europe/Bratislava", 1476321272), 1476314072);
        TZ_CHECK(from_utc("Europe/Bratislava", 1528976787), 1528983987);
        TZ_CHECK(from_local("Europe/Bratislava", 1528983987), 1528976787);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Bratislava" << std::endl;
    }
    if (has_timezone("Europe/Brussels")) {
        TZ_CHECK(from_utc("Europe/Brussels", 1446991600), 1446995200);
        TZ_CHECK(from_local("Europe/Brussels", 1446995200), 1446991600);
        TZ_CHECK(from_utc("Europe/Brussels", 1417656548), 1417660148);
        TZ_CHECK(from_local("Europe/Brussels", 1417660148), 1417656548);
        TZ_CHECK(from_utc("Europe/Brussels", 1428664428), 1428671628);
        TZ_CHECK(from_local("Europe/Brussels", 1428671628), 1428664428);
        TZ_CHECK(from_utc("Europe/Brussels", 1480102876), 1480106476);
        TZ_CHECK(from_local("Europe/Brussels", 1480106476), 1480102876);
        TZ_CHECK(from_utc("Europe/Brussels", 1615960038), 1615963638);
        TZ_CHECK(from_local("Europe/Brussels", 1615963638), 1615960038);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Brussels" << std::endl;
    }
    if (has_timezone("Europe/Bucharest")) {
        TZ_CHECK(from_utc("Europe/Bucharest", 1628422048), 1628432848);
        TZ_CHECK(from_local("Europe/Bucharest", 1628432848), 1628422048);
        TZ_CHECK(from_utc("Europe/Bucharest", 1460364564), 1460375364);
        TZ_CHECK(from_local("Europe/Bucharest", 1460375364), 1460364564);
        TZ_CHECK(from_utc("Europe/Bucharest", 1455717695), 1455724895);
        TZ_CHECK(from_local("Europe/Bucharest", 1455724895), 1455717695);
        TZ_CHECK(from_utc("Europe/Bucharest", 1554674028), 1554684828);
        TZ_CHECK(from_local("Europe/Bucharest", 1554684828), 1554674028);
        TZ_CHECK(from_utc("Europe/Bucharest", 1522996398), 1523007198);
        TZ_CHECK(from_local("Europe/Bucharest", 1523007198), 1522996398);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Bucharest" << std::endl;
    }
    if (has_timezone("Europe/Budapest")) {
        TZ_CHECK(from_utc("Europe/Budapest", 1499312289), 1499319489);
        TZ_CHECK(from_local("Europe/Budapest", 1499319489), 1499312289);
        TZ_CHECK(from_utc("Europe/Budapest", 1574684298), 1574687898);
        TZ_CHECK(from_local("Europe/Budapest", 1574687898), 1574684298);
        TZ_CHECK(from_utc("Europe/Budapest", 1531903653), 1531910853);
        TZ_CHECK(from_local("Europe/Budapest", 1531910853), 1531903653);
        TZ_CHECK(from_utc("Europe/Budapest", 1551581707), 1551585307);
        TZ_CHECK(from_local("Europe/Budapest", 1551585307), 1551581707);
        TZ_CHECK(from_utc("Europe/Budapest", 1521706970), 1521710570);
        TZ_CHECK(from_local("Europe/Budapest", 1521710570), 1521706970);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Budapest" << std::endl;
    }
    if (has_timezone("Europe/Busingen")) {
        TZ_CHECK(from_utc("Europe/Busingen", 1456361312), 1456364912);
        TZ_CHECK(from_local("Europe/Busingen", 1456364912), 1456361312);
        TZ_CHECK(from_utc("Europe/Busingen", 1563512278), 1563519478);
        TZ_CHECK(from_local("Europe/Busingen", 1563519478), 1563512278);
        TZ_CHECK(from_utc("Europe/Busingen", 1484034105), 1484037705);
        TZ_CHECK(from_local("Europe/Busingen", 1484037705), 1484034105);
        TZ_CHECK(from_utc("Europe/Busingen", 1566741074), 1566748274);
        TZ_CHECK(from_local("Europe/Busingen", 1566748274), 1566741074);
        TZ_CHECK(from_utc("Europe/Busingen", 1501869278), 1501876478);
        TZ_CHECK(from_local("Europe/Busingen", 1501876478), 1501869278);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Busingen" << std::endl;
    }
    if (has_timezone("Europe/Chisinau")) {
        TZ_CHECK(from_utc("Europe/Chisinau", 1505410171), 1505420971);
        TZ_CHECK(from_local("Europe/Chisinau", 1505420971), 1505410171);
        TZ_CHECK(from_utc("Europe/Chisinau", 1622901182), 1622911982);
        TZ_CHECK(from_local("Europe/Chisinau", 1622911982), 1622901182);
        TZ_CHECK(from_utc("Europe/Chisinau", 1459273336), 1459284136);
        TZ_CHECK(from_local("Europe/Chisinau", 1459284136), 1459273336);
        TZ_CHECK(from_utc("Europe/Chisinau", 1492651302), 1492662102);
        TZ_CHECK(from_local("Europe/Chisinau", 1492662102), 1492651302);
        TZ_CHECK(from_utc("Europe/Chisinau", 1441793567), 1441804367);
        TZ_CHECK(from_local("Europe/Chisinau", 1441804367), 1441793567);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Chisinau" << std::endl;
    }
    if (has_timezone("Europe/Copenhagen")) {
        TZ_CHECK(from_utc("Europe/Copenhagen", 1590135327), 1590142527);
        TZ_CHECK(from_local("Europe/Copenhagen", 1590142527), 1590135327);
        TZ_CHECK(from_utc("Europe/Copenhagen", 1438287015), 1438294215);
        TZ_CHECK(from_local("Europe/Copenhagen", 1438294215), 1438287015);
        TZ_CHECK(from_utc("Europe/Copenhagen", 1428626966), 1428634166);
        TZ_CHECK(from_local("Europe/Copenhagen", 1428634166), 1428626966);
        TZ_CHECK(from_utc("Europe/Copenhagen", 1443118577), 1443125777);
        TZ_CHECK(from_local("Europe/Copenhagen", 1443125777), 1443118577);
        TZ_CHECK(from_utc("Europe/Copenhagen", 1411075556), 1411082756);
        TZ_CHECK(from_local("Europe/Copenhagen", 1411082756), 1411075556);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Copenhagen" << std::endl;
    }
    if (has_timezone("Europe/Dublin")) {
        TZ_CHECK(from_utc("Europe/Dublin", 1466021157), 1466024757);
        TZ_CHECK(from_local("Europe/Dublin", 1466024757), 1466021157);
        TZ_CHECK(from_utc("Europe/Dublin", 1420800964), 1420800964);
        TZ_CHECK(from_local("Europe/Dublin", 1420800964), 1420800964);
        TZ_CHECK(from_utc("Europe/Dublin", 1523287950), 1523291550);
        TZ_CHECK(from_local("Europe/Dublin", 1523291550), 1523287950);
        TZ_CHECK(from_utc("Europe/Dublin", 1584576017), 1584576017);
        TZ_CHECK(from_local("Europe/Dublin", 1584576017), 1584576017);
        TZ_CHECK(from_utc("Europe/Dublin", 1490061030), 1490061030);
        TZ_CHECK(from_local("Europe/Dublin", 1490061030), 1490061030);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Dublin" << std::endl;
    }
    if (has_timezone("Europe/Gibraltar")) {
        TZ_CHECK(from_utc("Europe/Gibraltar", 1477730195), 1477737395);
        TZ_CHECK(from_local("Europe/Gibraltar", 1477737395), 1477730195);
        TZ_CHECK(from_utc("Europe/Gibraltar", 1456675326), 1456678926);
        TZ_CHECK(from_local("Europe/Gibraltar", 1456678926), 1456675326);
        TZ_CHECK(from_utc("Europe/Gibraltar", 1485676259), 1485679859);
        TZ_CHECK(from_local("Europe/Gibraltar", 1485679859), 1485676259);
        TZ_CHECK(from_utc("Europe/Gibraltar", 1600182205), 1600189405);
        TZ_CHECK(from_local("Europe/Gibraltar", 1600189405), 1600182205);
        TZ_CHECK(from_utc("Europe/Gibraltar", 1553909358), 1553912958);
        TZ_CHECK(from_local("Europe/Gibraltar", 1553912958), 1553909358);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Gibraltar" << std::endl;
    }
    if (has_timezone("Europe/Guernsey")) {
        TZ_CHECK(from_utc("Europe/Guernsey", 1418271198), 1418271198);
        TZ_CHECK(from_local("Europe/Guernsey", 1418271198), 1418271198);
        TZ_CHECK(from_utc("Europe/Guernsey", 1564620491), 1564624091);
        TZ_CHECK(from_local("Europe/Guernsey", 1564624091), 1564620491);
        TZ_CHECK(from_utc("Europe/Guernsey", 1499941901), 1499945501);
        TZ_CHECK(from_local("Europe/Guernsey", 1499945501), 1499941901);
        TZ_CHECK(from_utc("Europe/Guernsey", 1569584194), 1569587794);
        TZ_CHECK(from_local("Europe/Guernsey", 1569587794), 1569584194);
        TZ_CHECK(from_utc("Europe/Guernsey", 1525660720), 1525664320);
        TZ_CHECK(from_local("Europe/Guernsey", 1525664320), 1525660720);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Guernsey" << std::endl;
    }
    if (has_timezone("Europe/Helsinki")) {
        TZ_CHECK(from_utc("Europe/Helsinki", 1491927268), 1491938068);
        TZ_CHECK(from_local("Europe/Helsinki", 1491938068), 1491927268);
        TZ_CHECK(from_utc("Europe/Helsinki", 1587371569), 1587382369);
        TZ_CHECK(from_local("Europe/Helsinki", 1587382369), 1587371569);
        TZ_CHECK(from_utc("Europe/Helsinki", 1518152667), 1518159867);
        TZ_CHECK(from_local("Europe/Helsinki", 1518159867), 1518152667);
        TZ_CHECK(from_utc("Europe/Helsinki", 1542092630), 1542099830);
        TZ_CHECK(from_local("Europe/Helsinki", 1542099830), 1542092630);
        TZ_CHECK(from_utc("Europe/Helsinki", 1438910031), 1438920831);
        TZ_CHECK(from_local("Europe/Helsinki", 1438920831), 1438910031);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Helsinki" << std::endl;
    }
    if (has_timezone("Europe/Isle_of_Man")) {
        TZ_CHECK(from_utc("Europe/Isle_of_Man", 1506736930), 1506740530);
        TZ_CHECK(from_local("Europe/Isle_of_Man", 1506740530), 1506736930);
        TZ_CHECK(from_utc("Europe/Isle_of_Man", 1439446446), 1439450046);
        TZ_CHECK(from_local("Europe/Isle_of_Man", 1439450046), 1439446446);
        TZ_CHECK(from_utc("Europe/Isle_of_Man", 1427728589), 1427732189);
        TZ_CHECK(from_local("Europe/Isle_of_Man", 1427732189), 1427728589);
        TZ_CHECK(from_utc("Europe/Isle_of_Man", 1504961469), 1504965069);
        TZ_CHECK(from_local("Europe/Isle_of_Man", 1504965069), 1504961469);
        TZ_CHECK(from_utc("Europe/Isle_of_Man", 1410384538), 1410388138);
        TZ_CHECK(from_local("Europe/Isle_of_Man", 1410388138), 1410384538);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Isle_of_Man" << std::endl;
    }
    if (has_timezone("Europe/Istanbul")) {
        TZ_CHECK(from_utc("Europe/Istanbul", 1549529913), 1549540713);
        TZ_CHECK(from_local("Europe/Istanbul", 1549540713), 1549529913);
        TZ_CHECK(from_utc("Europe/Istanbul", 1435975946), 1435986746);
        TZ_CHECK(from_local("Europe/Istanbul", 1435986746), 1435975946);
        TZ_CHECK(from_utc("Europe/Istanbul", 1459209955), 1459220755);
        TZ_CHECK(from_local("Europe/Istanbul", 1459220755), 1459209955);
        TZ_CHECK(from_utc("Europe/Istanbul", 1582700537), 1582711337);
        TZ_CHECK(from_local("Europe/Istanbul", 1582711337), 1582700537);
        TZ_CHECK(from_utc("Europe/Istanbul", 1454687606), 1454694806);
        TZ_CHECK(from_local("Europe/Istanbul", 1454694806), 1454687606);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Istanbul" << std::endl;
    }
    if (has_timezone("Europe/Jersey")) {
        TZ_CHECK(from_utc("Europe/Jersey", 1585431312), 1585431312);
        TZ_CHECK(from_local("Europe/Jersey", 1585431312), 1585431312);
        TZ_CHECK(from_utc("Europe/Jersey", 1586959566), 1586963166);
        TZ_CHECK(from_local("Europe/Jersey", 1586963166), 1586959566);
        TZ_CHECK(from_utc("Europe/Jersey", 1562352265), 1562355865);
        TZ_CHECK(from_local("Europe/Jersey", 1562355865), 1562352265);
        TZ_CHECK(from_utc("Europe/Jersey", 1512497817), 1512497817);
        TZ_CHECK(from_local("Europe/Jersey", 1512497817), 1512497817);
        TZ_CHECK(from_utc("Europe/Jersey", 1429045808), 1429049408);
        TZ_CHECK(from_local("Europe/Jersey", 1429049408), 1429045808);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Jersey" << std::endl;
    }
    if (has_timezone("Europe/Kaliningrad")) {
        TZ_CHECK(from_utc("Europe/Kaliningrad", 1565977275), 1565984475);
        TZ_CHECK(from_local("Europe/Kaliningrad", 1565984475), 1565977275);
        TZ_CHECK(from_utc("Europe/Kaliningrad", 1498965487), 1498972687);
        TZ_CHECK(from_local("Europe/Kaliningrad", 1498972687), 1498965487);
        TZ_CHECK(from_utc("Europe/Kaliningrad", 1420382348), 1420389548);
        TZ_CHECK(from_local("Europe/Kaliningrad", 1420389548), 1420382348);
        TZ_CHECK(from_utc("Europe/Kaliningrad", 1563266890), 1563274090);
        TZ_CHECK(from_local("Europe/Kaliningrad", 1563274090), 1563266890);
        TZ_CHECK(from_utc("Europe/Kaliningrad", 1451578939), 1451586139);
        TZ_CHECK(from_local("Europe/Kaliningrad", 1451586139), 1451578939);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kaliningrad" << std::endl;
    }
    if (has_timezone("Europe/Kiev")) {
        TZ_CHECK(from_utc("Europe/Kiev", 1470490466), 1470501266);
        TZ_CHECK(from_local("Europe/Kiev", 1470501266), 1470490466);
        TZ_CHECK(from_utc("Europe/Kiev", 1483957487), 1483964687);
        TZ_CHECK(from_local("Europe/Kiev", 1483964687), 1483957487);
        TZ_CHECK(from_utc("Europe/Kiev", 1409753112), 1409763912);
        TZ_CHECK(from_local("Europe/Kiev", 1409763912), 1409753112);
        TZ_CHECK(from_utc("Europe/Kiev", 1418311128), 1418318328);
        TZ_CHECK(from_local("Europe/Kiev", 1418318328), 1418311128);
        TZ_CHECK(from_utc("Europe/Kiev", 1569395699), 1569406499);
        TZ_CHECK(from_local("Europe/Kiev", 1569406499), 1569395699);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kiev" << std::endl;
    }
    if (has_timezone("Europe/Kirov")) {
        TZ_CHECK(from_utc("Europe/Kirov", 1502247713), 1502258513);
        TZ_CHECK(from_local("Europe/Kirov", 1502258513), 1502247713);
        TZ_CHECK(from_utc("Europe/Kirov", 1496037039), 1496047839);
        TZ_CHECK(from_local("Europe/Kirov", 1496047839), 1496037039);
        TZ_CHECK(from_utc("Europe/Kirov", 1622493964), 1622504764);
        TZ_CHECK(from_local("Europe/Kirov", 1622504764), 1622493964);
        TZ_CHECK(from_utc("Europe/Kirov", 1524167223), 1524178023);
        TZ_CHECK(from_local("Europe/Kirov", 1524178023), 1524167223);
        TZ_CHECK(from_utc("Europe/Kirov", 1630273742), 1630284542);
        TZ_CHECK(from_local("Europe/Kirov", 1630284542), 1630273742);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kirov" << std::endl;
    }
    if (has_timezone("Europe/Lisbon")) {
        TZ_CHECK(from_utc("Europe/Lisbon", 1425198283), 1425198283);
        TZ_CHECK(from_local("Europe/Lisbon", 1425198283), 1425198283);
        TZ_CHECK(from_utc("Europe/Lisbon", 1616182386), 1616182386);
        TZ_CHECK(from_local("Europe/Lisbon", 1616182386), 1616182386);
        TZ_CHECK(from_utc("Europe/Lisbon", 1585749017), 1585752617);
        TZ_CHECK(from_local("Europe/Lisbon", 1585752617), 1585749017);
        TZ_CHECK(from_utc("Europe/Lisbon", 1473055863), 1473059463);
        TZ_CHECK(from_local("Europe/Lisbon", 1473059463), 1473055863);
        TZ_CHECK(from_utc("Europe/Lisbon", 1462101211), 1462104811);
        TZ_CHECK(from_local("Europe/Lisbon", 1462104811), 1462101211);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Lisbon" << std::endl;
    }
    if (has_timezone("Europe/Ljubljana")) {
        TZ_CHECK(from_utc("Europe/Ljubljana", 1500421576), 1500428776);
        TZ_CHECK(from_local("Europe/Ljubljana", 1500428776), 1500421576);
        TZ_CHECK(from_utc("Europe/Ljubljana", 1457663100), 1457666700);
        TZ_CHECK(from_local("Europe/Ljubljana", 1457666700), 1457663100);
        TZ_CHECK(from_utc("Europe/Ljubljana", 1492498938), 1492506138);
        TZ_CHECK(from_local("Europe/Ljubljana", 1492506138), 1492498938);
        TZ_CHECK(from_utc("Europe/Ljubljana", 1581868897), 1581872497);
        TZ_CHECK(from_local("Europe/Ljubljana", 1581872497), 1581868897);
        TZ_CHECK(from_utc("Europe/Ljubljana", 1489142614), 1489146214);
        TZ_CHECK(from_local("Europe/Ljubljana", 1489146214), 1489142614);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Ljubljana" << std::endl;
    }
    if (has_timezone("Europe/London")) {
        TZ_CHECK(from_utc("Europe/London", 1529158208), 1529161808);
        TZ_CHECK(from_local("Europe/London", 1529161808), 1529158208);
        TZ_CHECK(from_utc("Europe/London", 1446533406), 1446533406);
        TZ_CHECK(from_local("Europe/London", 1446533406), 1446533406);
        TZ_CHECK(from_utc("Europe/London", 1542426927), 1542426927);
        TZ_CHECK(from_local("Europe/London", 1542426927), 1542426927);
        TZ_CHECK(from_utc("Europe/London", 1614868835), 1614868835);
        TZ_CHECK(from_local("Europe/London", 1614868835), 1614868835);
        TZ_CHECK(from_utc("Europe/London", 1442268060), 1442271660);
        TZ_CHECK(from_local("Europe/London", 1442271660), 1442268060);
    } else {
        std::cerr << "NO TIMEZONE: Europe/London" << std::endl;
    }
    if (has_timezone("Europe/Luxembourg")) {
        TZ_CHECK(from_utc("Europe/Luxembourg", 1614319705), 1614323305);
        TZ_CHECK(from_local("Europe/Luxembourg", 1614323305), 1614319705);
        TZ_CHECK(from_utc("Europe/Luxembourg", 1491240337), 1491247537);
        TZ_CHECK(from_local("Europe/Luxembourg", 1491247537), 1491240337);
        TZ_CHECK(from_utc("Europe/Luxembourg", 1470916506), 1470923706);
        TZ_CHECK(from_local("Europe/Luxembourg", 1470923706), 1470916506);
        TZ_CHECK(from_utc("Europe/Luxembourg", 1599890119), 1599897319);
        TZ_CHECK(from_local("Europe/Luxembourg", 1599897319), 1599890119);
        TZ_CHECK(from_utc("Europe/Luxembourg", 1629682497), 1629689697);
        TZ_CHECK(from_local("Europe/Luxembourg", 1629689697), 1629682497);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Luxembourg" << std::endl;
    }
    if (has_timezone("Europe/Madrid")) {
        TZ_CHECK(from_utc("Europe/Madrid", 1430944233), 1430951433);
        TZ_CHECK(from_local("Europe/Madrid", 1430951433), 1430944233);
        TZ_CHECK(from_utc("Europe/Madrid", 1522313285), 1522320485);
        TZ_CHECK(from_local("Europe/Madrid", 1522320485), 1522313285);
        TZ_CHECK(from_utc("Europe/Madrid", 1515218776), 1515222376);
        TZ_CHECK(from_local("Europe/Madrid", 1515222376), 1515218776);
        TZ_CHECK(from_utc("Europe/Madrid", 1410012643), 1410019843);
        TZ_CHECK(from_local("Europe/Madrid", 1410019843), 1410012643);
        TZ_CHECK(from_utc("Europe/Madrid", 1539742772), 1539749972);
        TZ_CHECK(from_local("Europe/Madrid", 1539749972), 1539742772);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Madrid" << std::endl;
    }
    if (has_timezone("Europe/Malta")) {
        TZ_CHECK(from_utc("Europe/Malta", 1612985290), 1612988890);
        TZ_CHECK(from_local("Europe/Malta", 1612988890), 1612985290);
        TZ_CHECK(from_utc("Europe/Malta", 1475764269), 1475771469);
        TZ_CHECK(from_local("Europe/Malta", 1475771469), 1475764269);
        TZ_CHECK(from_utc("Europe/Malta", 1493814674), 1493821874);
        TZ_CHECK(from_local("Europe/Malta", 1493821874), 1493814674);
        TZ_CHECK(from_utc("Europe/Malta", 1513558328), 1513561928);
        TZ_CHECK(from_local("Europe/Malta", 1513561928), 1513558328);
        TZ_CHECK(from_utc("Europe/Malta", 1576618023), 1576621623);
        TZ_CHECK(from_local("Europe/Malta", 1576621623), 1576618023);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Malta" << std::endl;
    }
    if (has_timezone("Europe/Mariehamn")) {
        TZ_CHECK(from_utc("Europe/Mariehamn", 1620183675), 1620194475);
        TZ_CHECK(from_local("Europe/Mariehamn", 1620194475), 1620183675);
        TZ_CHECK(from_utc("Europe/Mariehamn", 1463616805), 1463627605);
        TZ_CHECK(from_local("Europe/Mariehamn", 1463627605), 1463616805);
        TZ_CHECK(from_utc("Europe/Mariehamn", 1622237617), 1622248417);
        TZ_CHECK(from_local("Europe/Mariehamn", 1622248417), 1622237617);
        TZ_CHECK(from_utc("Europe/Mariehamn", 1414783799), 1414790999);
        TZ_CHECK(from_local("Europe/Mariehamn", 1414790999), 1414783799);
        TZ_CHECK(from_utc("Europe/Mariehamn", 1483849870), 1483857070);
        TZ_CHECK(from_local("Europe/Mariehamn", 1483857070), 1483849870);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Mariehamn" << std::endl;
    }
    if (has_timezone("Europe/Minsk")) {
        TZ_CHECK(from_utc("Europe/Minsk", 1520481988), 1520492788);
        TZ_CHECK(from_local("Europe/Minsk", 1520492788), 1520481988);
        TZ_CHECK(from_utc("Europe/Minsk", 1432480713), 1432491513);
        TZ_CHECK(from_local("Europe/Minsk", 1432491513), 1432480713);
        TZ_CHECK(from_utc("Europe/Minsk", 1597802329), 1597813129);
        TZ_CHECK(from_local("Europe/Minsk", 1597813129), 1597802329);
        TZ_CHECK(from_utc("Europe/Minsk", 1510738699), 1510749499);
        TZ_CHECK(from_local("Europe/Minsk", 1510749499), 1510738699);
        TZ_CHECK(from_utc("Europe/Minsk", 1516000566), 1516011366);
        TZ_CHECK(from_local("Europe/Minsk", 1516011366), 1516000566);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Minsk" << std::endl;
    }
    if (has_timezone("Europe/Monaco")) {
        TZ_CHECK(from_utc("Europe/Monaco", 1428442306), 1428449506);
        TZ_CHECK(from_local("Europe/Monaco", 1428449506), 1428442306);
        TZ_CHECK(from_utc("Europe/Monaco", 1422398325), 1422401925);
        TZ_CHECK(from_local("Europe/Monaco", 1422401925), 1422398325);
        TZ_CHECK(from_utc("Europe/Monaco", 1481491527), 1481495127);
        TZ_CHECK(from_local("Europe/Monaco", 1481495127), 1481491527);
        TZ_CHECK(from_utc("Europe/Monaco", 1503889135), 1503896335);
        TZ_CHECK(from_local("Europe/Monaco", 1503896335), 1503889135);
        TZ_CHECK(from_utc("Europe/Monaco", 1546438838), 1546442438);
        TZ_CHECK(from_local("Europe/Monaco", 1546442438), 1546438838);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Monaco" << std::endl;
    }
    if (has_timezone("Europe/Moscow")) {
        TZ_CHECK(from_utc("Europe/Moscow", 1502213374), 1502224174);
        TZ_CHECK(from_local("Europe/Moscow", 1502224174), 1502213374);
        TZ_CHECK(from_utc("Europe/Moscow", 1443503585), 1443514385);
        TZ_CHECK(from_local("Europe/Moscow", 1443514385), 1443503585);
        TZ_CHECK(from_utc("Europe/Moscow", 1590374584), 1590385384);
        TZ_CHECK(from_local("Europe/Moscow", 1590385384), 1590374584);
        TZ_CHECK(from_utc("Europe/Moscow", 1596310091), 1596320891);
        TZ_CHECK(from_local("Europe/Moscow", 1596320891), 1596310091);
        TZ_CHECK(from_utc("Europe/Moscow", 1501849244), 1501860044);
        TZ_CHECK(from_local("Europe/Moscow", 1501860044), 1501849244);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Moscow" << std::endl;
    }
    if (has_timezone("Europe/Nicosia")) {
        TZ_CHECK(from_utc("Europe/Nicosia", 1461717889), 1461728689);
        TZ_CHECK(from_local("Europe/Nicosia", 1461728689), 1461717889);
        TZ_CHECK(from_utc("Europe/Nicosia", 1534621230), 1534632030);
        TZ_CHECK(from_local("Europe/Nicosia", 1534632030), 1534621230);
        TZ_CHECK(from_utc("Europe/Nicosia", 1586441498), 1586452298);
        TZ_CHECK(from_local("Europe/Nicosia", 1586452298), 1586441498);
        TZ_CHECK(from_utc("Europe/Nicosia", 1554285027), 1554295827);
        TZ_CHECK(from_local("Europe/Nicosia", 1554295827), 1554285027);
        TZ_CHECK(from_utc("Europe/Nicosia", 1613724668), 1613731868);
        TZ_CHECK(from_local("Europe/Nicosia", 1613731868), 1613724668);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Nicosia" << std::endl;
    }
    if (has_timezone("Europe/Oslo")) {
        TZ_CHECK(from_utc("Europe/Oslo", 1626030421), 1626037621);
        TZ_CHECK(from_local("Europe/Oslo", 1626037621), 1626030421);
        TZ_CHECK(from_utc("Europe/Oslo", 1518740588), 1518744188);
        TZ_CHECK(from_local("Europe/Oslo", 1518744188), 1518740588);
        TZ_CHECK(from_utc("Europe/Oslo", 1410215712), 1410222912);
        TZ_CHECK(from_local("Europe/Oslo", 1410222912), 1410215712);
        TZ_CHECK(from_utc("Europe/Oslo", 1529102144), 1529109344);
        TZ_CHECK(from_local("Europe/Oslo", 1529109344), 1529102144);
        TZ_CHECK(from_utc("Europe/Oslo", 1456130342), 1456133942);
        TZ_CHECK(from_local("Europe/Oslo", 1456133942), 1456130342);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Oslo" << std::endl;
    }
    if (has_timezone("Europe/Paris")) {
        TZ_CHECK(from_utc("Europe/Paris", 1602004271), 1602011471);
        TZ_CHECK(from_local("Europe/Paris", 1602011471), 1602004271);
        TZ_CHECK(from_utc("Europe/Paris", 1471011514), 1471018714);
        TZ_CHECK(from_local("Europe/Paris", 1471018714), 1471011514);
        TZ_CHECK(from_utc("Europe/Paris", 1464062863), 1464070063);
        TZ_CHECK(from_local("Europe/Paris", 1464070063), 1464062863);
        TZ_CHECK(from_utc("Europe/Paris", 1456885568), 1456889168);
        TZ_CHECK(from_local("Europe/Paris", 1456889168), 1456885568);
        TZ_CHECK(from_utc("Europe/Paris", 1519924005), 1519927605);
        TZ_CHECK(from_local("Europe/Paris", 1519927605), 1519924005);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Paris" << std::endl;
    }
    if (has_timezone("Europe/Podgorica")) {
        TZ_CHECK(from_utc("Europe/Podgorica", 1418865157), 1418868757);
        TZ_CHECK(from_local("Europe/Podgorica", 1418868757), 1418865157);
        TZ_CHECK(from_utc("Europe/Podgorica", 1461062078), 1461069278);
        TZ_CHECK(from_local("Europe/Podgorica", 1461069278), 1461062078);
        TZ_CHECK(from_utc("Europe/Podgorica", 1422260206), 1422263806);
        TZ_CHECK(from_local("Europe/Podgorica", 1422263806), 1422260206);
        TZ_CHECK(from_utc("Europe/Podgorica", 1621263766), 1621270966);
        TZ_CHECK(from_local("Europe/Podgorica", 1621270966), 1621263766);
        TZ_CHECK(from_utc("Europe/Podgorica", 1427051893), 1427055493);
        TZ_CHECK(from_local("Europe/Podgorica", 1427055493), 1427051893);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Podgorica" << std::endl;
    }
    if (has_timezone("Europe/Prague")) {
        TZ_CHECK(from_utc("Europe/Prague", 1495959304), 1495966504);
        TZ_CHECK(from_local("Europe/Prague", 1495966504), 1495959304);
        TZ_CHECK(from_utc("Europe/Prague", 1492433242), 1492440442);
        TZ_CHECK(from_local("Europe/Prague", 1492440442), 1492433242);
        TZ_CHECK(from_utc("Europe/Prague", 1593873808), 1593881008);
        TZ_CHECK(from_local("Europe/Prague", 1593881008), 1593873808);
        TZ_CHECK(from_utc("Europe/Prague", 1619704872), 1619712072);
        TZ_CHECK(from_local("Europe/Prague", 1619712072), 1619704872);
        TZ_CHECK(from_utc("Europe/Prague", 1496153208), 1496160408);
        TZ_CHECK(from_local("Europe/Prague", 1496160408), 1496153208);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Prague" << std::endl;
    }
    if (has_timezone("Europe/Riga")) {
        TZ_CHECK(from_utc("Europe/Riga", 1552568176), 1552575376);
        TZ_CHECK(from_local("Europe/Riga", 1552575376), 1552568176);
        TZ_CHECK(from_utc("Europe/Riga", 1487761947), 1487769147);
        TZ_CHECK(from_local("Europe/Riga", 1487769147), 1487761947);
        TZ_CHECK(from_utc("Europe/Riga", 1484861993), 1484869193);
        TZ_CHECK(from_local("Europe/Riga", 1484869193), 1484861993);
        TZ_CHECK(from_utc("Europe/Riga", 1499894909), 1499905709);
        TZ_CHECK(from_local("Europe/Riga", 1499905709), 1499894909);
        TZ_CHECK(from_utc("Europe/Riga", 1425448263), 1425455463);
        TZ_CHECK(from_local("Europe/Riga", 1425455463), 1425448263);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Riga" << std::endl;
    }
    if (has_timezone("Europe/Rome")) {
        TZ_CHECK(from_utc("Europe/Rome", 1559495811), 1559503011);
        TZ_CHECK(from_local("Europe/Rome", 1559503011), 1559495811);
        TZ_CHECK(from_utc("Europe/Rome", 1533111668), 1533118868);
        TZ_CHECK(from_local("Europe/Rome", 1533118868), 1533111668);
        TZ_CHECK(from_utc("Europe/Rome", 1627797330), 1627804530);
        TZ_CHECK(from_local("Europe/Rome", 1627804530), 1627797330);
        TZ_CHECK(from_utc("Europe/Rome", 1597363983), 1597371183);
        TZ_CHECK(from_local("Europe/Rome", 1597371183), 1597363983);
        TZ_CHECK(from_utc("Europe/Rome", 1497747871), 1497755071);
        TZ_CHECK(from_local("Europe/Rome", 1497755071), 1497747871);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Rome" << std::endl;
    }
    if (has_timezone("Europe/Samara")) {
        TZ_CHECK(from_utc("Europe/Samara", 1547672314), 1547686714);
        TZ_CHECK(from_local("Europe/Samara", 1547686714), 1547672314);
        TZ_CHECK(from_utc("Europe/Samara", 1429978981), 1429993381);
        TZ_CHECK(from_local("Europe/Samara", 1429993381), 1429978981);
        TZ_CHECK(from_utc("Europe/Samara", 1551668198), 1551682598);
        TZ_CHECK(from_local("Europe/Samara", 1551682598), 1551668198);
        TZ_CHECK(from_utc("Europe/Samara", 1529661715), 1529676115);
        TZ_CHECK(from_local("Europe/Samara", 1529676115), 1529661715);
        TZ_CHECK(from_utc("Europe/Samara", 1478191593), 1478205993);
        TZ_CHECK(from_local("Europe/Samara", 1478205993), 1478191593);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Samara" << std::endl;
    }
    if (has_timezone("Europe/San_Marino")) {
        TZ_CHECK(from_utc("Europe/San_Marino", 1524134319), 1524141519);
        TZ_CHECK(from_local("Europe/San_Marino", 1524141519), 1524134319);
        TZ_CHECK(from_utc("Europe/San_Marino", 1620311640), 1620318840);
        TZ_CHECK(from_local("Europe/San_Marino", 1620318840), 1620311640);
        TZ_CHECK(from_utc("Europe/San_Marino", 1486975724), 1486979324);
        TZ_CHECK(from_local("Europe/San_Marino", 1486979324), 1486975724);
        TZ_CHECK(from_utc("Europe/San_Marino", 1574537113), 1574540713);
        TZ_CHECK(from_local("Europe/San_Marino", 1574540713), 1574537113);
        TZ_CHECK(from_utc("Europe/San_Marino", 1498138430), 1498145630);
        TZ_CHECK(from_local("Europe/San_Marino", 1498145630), 1498138430);
    } else {
        std::cerr << "NO TIMEZONE: Europe/San_Marino" << std::endl;
    }
    if (has_timezone("Europe/Sarajevo")) {
        TZ_CHECK(from_utc("Europe/Sarajevo", 1593365834), 1593373034);
        TZ_CHECK(from_local("Europe/Sarajevo", 1593373034), 1593365834);
        TZ_CHECK(from_utc("Europe/Sarajevo", 1453802734), 1453806334);
        TZ_CHECK(from_local("Europe/Sarajevo", 1453806334), 1453802734);
        TZ_CHECK(from_utc("Europe/Sarajevo", 1454419859), 1454423459);
        TZ_CHECK(from_local("Europe/Sarajevo", 1454423459), 1454419859);
        TZ_CHECK(from_utc("Europe/Sarajevo", 1517675325), 1517678925);
        TZ_CHECK(from_local("Europe/Sarajevo", 1517678925), 1517675325);
        TZ_CHECK(from_utc("Europe/Sarajevo", 1495866080), 1495873280);
        TZ_CHECK(from_local("Europe/Sarajevo", 1495873280), 1495866080);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Sarajevo" << std::endl;
    }
    if (has_timezone("Europe/Saratov")) {
        TZ_CHECK(from_utc("Europe/Saratov", 1457658139), 1457668939);
        TZ_CHECK(from_local("Europe/Saratov", 1457668939), 1457658139);
        TZ_CHECK(from_utc("Europe/Saratov", 1415322568), 1415333368);
        TZ_CHECK(from_local("Europe/Saratov", 1415333368), 1415322568);
        TZ_CHECK(from_utc("Europe/Saratov", 1482265682), 1482280082);
        TZ_CHECK(from_local("Europe/Saratov", 1482280082), 1482265682);
        TZ_CHECK(from_utc("Europe/Saratov", 1630199416), 1630213816);
        TZ_CHECK(from_local("Europe/Saratov", 1630213816), 1630199416);
        TZ_CHECK(from_utc("Europe/Saratov", 1467972333), 1467983133);
        TZ_CHECK(from_local("Europe/Saratov", 1467983133), 1467972333);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Saratov" << std::endl;
    }
    if (has_timezone("Europe/Simferopol")) {
        TZ_CHECK(from_utc("Europe/Simferopol", 1476738809), 1476749609);
        TZ_CHECK(from_local("Europe/Simferopol", 1476749609), 1476738809);
        TZ_CHECK(from_utc("Europe/Simferopol", 1511173634), 1511184434);
        TZ_CHECK(from_local("Europe/Simferopol", 1511184434), 1511173634);
        TZ_CHECK(from_utc("Europe/Simferopol", 1535101547), 1535112347);
        TZ_CHECK(from_local("Europe/Simferopol", 1535112347), 1535101547);
        TZ_CHECK(from_utc("Europe/Simferopol", 1524969376), 1524980176);
        TZ_CHECK(from_local("Europe/Simferopol", 1524980176), 1524969376);
        TZ_CHECK(from_utc("Europe/Simferopol", 1430992122), 1431002922);
        TZ_CHECK(from_local("Europe/Simferopol", 1431002922), 1430992122);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Simferopol" << std::endl;
    }
    if (has_timezone("Europe/Skopje")) {
        TZ_CHECK(from_utc("Europe/Skopje", 1542299945), 1542303545);
        TZ_CHECK(from_local("Europe/Skopje", 1542303545), 1542299945);
        TZ_CHECK(from_utc("Europe/Skopje", 1489029559), 1489033159);
        TZ_CHECK(from_local("Europe/Skopje", 1489033159), 1489029559);
        TZ_CHECK(from_utc("Europe/Skopje", 1598513410), 1598520610);
        TZ_CHECK(from_local("Europe/Skopje", 1598520610), 1598513410);
        TZ_CHECK(from_utc("Europe/Skopje", 1630079317), 1630086517);
        TZ_CHECK(from_local("Europe/Skopje", 1630086517), 1630079317);
        TZ_CHECK(from_utc("Europe/Skopje", 1510001286), 1510004886);
        TZ_CHECK(from_local("Europe/Skopje", 1510004886), 1510001286);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Skopje" << std::endl;
    }
    if (has_timezone("Europe/Sofia")) {
        TZ_CHECK(from_utc("Europe/Sofia", 1540139280), 1540150080);
        TZ_CHECK(from_local("Europe/Sofia", 1540150080), 1540139280);
        TZ_CHECK(from_utc("Europe/Sofia", 1491323823), 1491334623);
        TZ_CHECK(from_local("Europe/Sofia", 1491334623), 1491323823);
        TZ_CHECK(from_utc("Europe/Sofia", 1420696446), 1420703646);
        TZ_CHECK(from_local("Europe/Sofia", 1420703646), 1420696446);
        TZ_CHECK(from_utc("Europe/Sofia", 1522801729), 1522812529);
        TZ_CHECK(from_local("Europe/Sofia", 1522812529), 1522801729);
        TZ_CHECK(from_utc("Europe/Sofia", 1563529596), 1563540396);
        TZ_CHECK(from_local("Europe/Sofia", 1563540396), 1563529596);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Sofia" << std::endl;
    }
    if (has_timezone("Europe/Stockholm")) {
        TZ_CHECK(from_utc("Europe/Stockholm", 1471576246), 1471583446);
        TZ_CHECK(from_local("Europe/Stockholm", 1471583446), 1471576246);
        TZ_CHECK(from_utc("Europe/Stockholm", 1494018165), 1494025365);
        TZ_CHECK(from_local("Europe/Stockholm", 1494025365), 1494018165);
        TZ_CHECK(from_utc("Europe/Stockholm", 1464355040), 1464362240);
        TZ_CHECK(from_local("Europe/Stockholm", 1464362240), 1464355040);
        TZ_CHECK(from_utc("Europe/Stockholm", 1417904476), 1417908076);
        TZ_CHECK(from_local("Europe/Stockholm", 1417908076), 1417904476);
        TZ_CHECK(from_utc("Europe/Stockholm", 1443862731), 1443869931);
        TZ_CHECK(from_local("Europe/Stockholm", 1443869931), 1443862731);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Stockholm" << std::endl;
    }
    if (has_timezone("Europe/Tallinn")) {
        TZ_CHECK(from_utc("Europe/Tallinn", 1452468240), 1452475440);
        TZ_CHECK(from_local("Europe/Tallinn", 1452475440), 1452468240);
        TZ_CHECK(from_utc("Europe/Tallinn", 1623599183), 1623609983);
        TZ_CHECK(from_local("Europe/Tallinn", 1623609983), 1623599183);
        TZ_CHECK(from_utc("Europe/Tallinn", 1463436123), 1463446923);
        TZ_CHECK(from_local("Europe/Tallinn", 1463446923), 1463436123);
        TZ_CHECK(from_utc("Europe/Tallinn", 1627716556), 1627727356);
        TZ_CHECK(from_local("Europe/Tallinn", 1627727356), 1627716556);
        TZ_CHECK(from_utc("Europe/Tallinn", 1519760459), 1519767659);
        TZ_CHECK(from_local("Europe/Tallinn", 1519767659), 1519760459);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tallinn" << std::endl;
    }
    if (has_timezone("Europe/Tirane")) {
        TZ_CHECK(from_utc("Europe/Tirane", 1552485065), 1552488665);
        TZ_CHECK(from_local("Europe/Tirane", 1552488665), 1552485065);
        TZ_CHECK(from_utc("Europe/Tirane", 1435080798), 1435087998);
        TZ_CHECK(from_local("Europe/Tirane", 1435087998), 1435080798);
        TZ_CHECK(from_utc("Europe/Tirane", 1462772455), 1462779655);
        TZ_CHECK(from_local("Europe/Tirane", 1462779655), 1462772455);
        TZ_CHECK(from_utc("Europe/Tirane", 1584955151), 1584958751);
        TZ_CHECK(from_local("Europe/Tirane", 1584958751), 1584955151);
        TZ_CHECK(from_utc("Europe/Tirane", 1474750696), 1474757896);
        TZ_CHECK(from_local("Europe/Tirane", 1474757896), 1474750696);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tirane" << std::endl;
    }
    if (has_timezone("Europe/Tiraspol")) {
        TZ_CHECK(from_utc("Europe/Tiraspol", 1567414354), 1567425154);
        TZ_CHECK(from_local("Europe/Tiraspol", 1567425154), 1567414354);
        TZ_CHECK(from_utc("Europe/Tiraspol", 1435310770), 1435321570);
        TZ_CHECK(from_local("Europe/Tiraspol", 1435321570), 1435310770);
        TZ_CHECK(from_utc("Europe/Tiraspol", 1413660805), 1413671605);
        TZ_CHECK(from_local("Europe/Tiraspol", 1413671605), 1413660805);
        TZ_CHECK(from_utc("Europe/Tiraspol", 1464459048), 1464469848);
        TZ_CHECK(from_local("Europe/Tiraspol", 1464469848), 1464459048);
        TZ_CHECK(from_utc("Europe/Tiraspol", 1508565232), 1508576032);
        TZ_CHECK(from_local("Europe/Tiraspol", 1508576032), 1508565232);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tiraspol" << std::endl;
    }
    if (has_timezone("Europe/Ulyanovsk")) {
        TZ_CHECK(from_utc("Europe/Ulyanovsk", 1410555734), 1410570134);
        TZ_CHECK(from_local("Europe/Ulyanovsk", 1410570134), 1410555734);
        TZ_CHECK(from_utc("Europe/Ulyanovsk", 1516804255), 1516818655);
        TZ_CHECK(from_local("Europe/Ulyanovsk", 1516818655), 1516804255);
        TZ_CHECK(from_utc("Europe/Ulyanovsk", 1458183355), 1458194155);
        TZ_CHECK(from_local("Europe/Ulyanovsk", 1458194155), 1458183355);
        TZ_CHECK(from_utc("Europe/Ulyanovsk", 1559759662), 1559774062);
        TZ_CHECK(from_local("Europe/Ulyanovsk", 1559774062), 1559759662);
        TZ_CHECK(from_utc("Europe/Ulyanovsk", 1550084649), 1550099049);
        TZ_CHECK(from_local("Europe/Ulyanovsk", 1550099049), 1550084649);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Ulyanovsk" << std::endl;
    }
    if (has_timezone("Europe/Uzhgorod")) {
        TZ_CHECK(from_utc("Europe/Uzhgorod", 1500550574), 1500561374);
        TZ_CHECK(from_local("Europe/Uzhgorod", 1500561374), 1500550574);
        TZ_CHECK(from_utc("Europe/Uzhgorod", 1517107992), 1517115192);
        TZ_CHECK(from_local("Europe/Uzhgorod", 1517115192), 1517107992);
        TZ_CHECK(from_utc("Europe/Uzhgorod", 1554193528), 1554204328);
        TZ_CHECK(from_local("Europe/Uzhgorod", 1554204328), 1554193528);
        TZ_CHECK(from_utc("Europe/Uzhgorod", 1492229757), 1492240557);
        TZ_CHECK(from_local("Europe/Uzhgorod", 1492240557), 1492229757);
        TZ_CHECK(from_utc("Europe/Uzhgorod", 1512748137), 1512755337);
        TZ_CHECK(from_local("Europe/Uzhgorod", 1512755337), 1512748137);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Uzhgorod" << std::endl;
    }
    if (has_timezone("Europe/Vaduz")) {
        TZ_CHECK(from_utc("Europe/Vaduz", 1521938773), 1521942373);
        TZ_CHECK(from_local("Europe/Vaduz", 1521942373), 1521938773);
        TZ_CHECK(from_utc("Europe/Vaduz", 1598158376), 1598165576);
        TZ_CHECK(from_local("Europe/Vaduz", 1598165576), 1598158376);
        TZ_CHECK(from_utc("Europe/Vaduz", 1606008333), 1606011933);
        TZ_CHECK(from_local("Europe/Vaduz", 1606011933), 1606008333);
        TZ_CHECK(from_utc("Europe/Vaduz", 1519897461), 1519901061);
        TZ_CHECK(from_local("Europe/Vaduz", 1519901061), 1519897461);
        TZ_CHECK(from_utc("Europe/Vaduz", 1491497147), 1491504347);
        TZ_CHECK(from_local("Europe/Vaduz", 1491504347), 1491497147);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vaduz" << std::endl;
    }
    if (has_timezone("Europe/Vatican")) {
        TZ_CHECK(from_utc("Europe/Vatican", 1526817862), 1526825062);
        TZ_CHECK(from_local("Europe/Vatican", 1526825062), 1526817862);
        TZ_CHECK(from_utc("Europe/Vatican", 1436933445), 1436940645);
        TZ_CHECK(from_local("Europe/Vatican", 1436940645), 1436933445);
        TZ_CHECK(from_utc("Europe/Vatican", 1582587036), 1582590636);
        TZ_CHECK(from_local("Europe/Vatican", 1582590636), 1582587036);
        TZ_CHECK(from_utc("Europe/Vatican", 1449420585), 1449424185);
        TZ_CHECK(from_local("Europe/Vatican", 1449424185), 1449420585);
        TZ_CHECK(from_utc("Europe/Vatican", 1491330488), 1491337688);
        TZ_CHECK(from_local("Europe/Vatican", 1491337688), 1491330488);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vatican" << std::endl;
    }
    if (has_timezone("Europe/Vienna")) {
        TZ_CHECK(from_utc("Europe/Vienna", 1416471593), 1416475193);
        TZ_CHECK(from_local("Europe/Vienna", 1416475193), 1416471593);
        TZ_CHECK(from_utc("Europe/Vienna", 1428344312), 1428351512);
        TZ_CHECK(from_local("Europe/Vienna", 1428351512), 1428344312);
        TZ_CHECK(from_utc("Europe/Vienna", 1627426759), 1627433959);
        TZ_CHECK(from_local("Europe/Vienna", 1627433959), 1627426759);
        TZ_CHECK(from_utc("Europe/Vienna", 1548796396), 1548799996);
        TZ_CHECK(from_local("Europe/Vienna", 1548799996), 1548796396);
        TZ_CHECK(from_utc("Europe/Vienna", 1575914257), 1575917857);
        TZ_CHECK(from_local("Europe/Vienna", 1575917857), 1575914257);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vienna" << std::endl;
    }
    if (has_timezone("Europe/Vilnius")) {
        TZ_CHECK(from_utc("Europe/Vilnius", 1575309135), 1575316335);
        TZ_CHECK(from_local("Europe/Vilnius", 1575316335), 1575309135);
        TZ_CHECK(from_utc("Europe/Vilnius", 1605590361), 1605597561);
        TZ_CHECK(from_local("Europe/Vilnius", 1605597561), 1605590361);
        TZ_CHECK(from_utc("Europe/Vilnius", 1457270948), 1457278148);
        TZ_CHECK(from_local("Europe/Vilnius", 1457278148), 1457270948);
        TZ_CHECK(from_utc("Europe/Vilnius", 1541984287), 1541991487);
        TZ_CHECK(from_local("Europe/Vilnius", 1541991487), 1541984287);
        TZ_CHECK(from_utc("Europe/Vilnius", 1442796015), 1442806815);
        TZ_CHECK(from_local("Europe/Vilnius", 1442806815), 1442796015);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vilnius" << std::endl;
    }
    if (has_timezone("Europe/Volgograd")) {
        TZ_CHECK(from_utc("Europe/Volgograd", 1473185903), 1473196703);
        TZ_CHECK(from_local("Europe/Volgograd", 1473196703), 1473185903);
        TZ_CHECK(from_utc("Europe/Volgograd", 1598972981), 1598987381);
        TZ_CHECK(from_local("Europe/Volgograd", 1598987381), 1598972981);
        TZ_CHECK(from_utc("Europe/Volgograd", 1587628932), 1587643332);
        TZ_CHECK(from_local("Europe/Volgograd", 1587643332), 1587628932);
        TZ_CHECK(from_utc("Europe/Volgograd", 1484332910), 1484343710);
        TZ_CHECK(from_local("Europe/Volgograd", 1484343710), 1484332910);
        TZ_CHECK(from_utc("Europe/Volgograd", 1513098377), 1513109177);
        TZ_CHECK(from_local("Europe/Volgograd", 1513109177), 1513098377);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Volgograd" << std::endl;
    }
    if (has_timezone("Europe/Warsaw")) {
        TZ_CHECK(from_utc("Europe/Warsaw", 1569133459), 1569140659);
        TZ_CHECK(from_local("Europe/Warsaw", 1569140659), 1569133459);
        TZ_CHECK(from_utc("Europe/Warsaw", 1421409333), 1421412933);
        TZ_CHECK(from_local("Europe/Warsaw", 1421412933), 1421409333);
        TZ_CHECK(from_utc("Europe/Warsaw", 1508174092), 1508181292);
        TZ_CHECK(from_local("Europe/Warsaw", 1508181292), 1508174092);
        TZ_CHECK(from_utc("Europe/Warsaw", 1434514282), 1434521482);
        TZ_CHECK(from_local("Europe/Warsaw", 1434521482), 1434514282);
        TZ_CHECK(from_utc("Europe/Warsaw", 1568317389), 1568324589);
        TZ_CHECK(from_local("Europe/Warsaw", 1568324589), 1568317389);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Warsaw" << std::endl;
    }
    if (has_timezone("Europe/Zagreb")) {
        TZ_CHECK(from_utc("Europe/Zagreb", 1463085317), 1463092517);
        TZ_CHECK(from_local("Europe/Zagreb", 1463092517), 1463085317);
        TZ_CHECK(from_utc("Europe/Zagreb", 1485067223), 1485070823);
        TZ_CHECK(from_local("Europe/Zagreb", 1485070823), 1485067223);
        TZ_CHECK(from_utc("Europe/Zagreb", 1438324632), 1438331832);
        TZ_CHECK(from_local("Europe/Zagreb", 1438331832), 1438324632);
        TZ_CHECK(from_utc("Europe/Zagreb", 1598159200), 1598166400);
        TZ_CHECK(from_local("Europe/Zagreb", 1598166400), 1598159200);
        TZ_CHECK(from_utc("Europe/Zagreb", 1550777824), 1550781424);
        TZ_CHECK(from_local("Europe/Zagreb", 1550781424), 1550777824);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zagreb" << std::endl;
    }
    if (has_timezone("Europe/Zaporozhye")) {
        TZ_CHECK(from_utc("Europe/Zaporozhye", 1528937952), 1528948752);
        TZ_CHECK(from_local("Europe/Zaporozhye", 1528948752), 1528937952);
        TZ_CHECK(from_utc("Europe/Zaporozhye", 1492126073), 1492136873);
        TZ_CHECK(from_local("Europe/Zaporozhye", 1492136873), 1492126073);
        TZ_CHECK(from_utc("Europe/Zaporozhye", 1559230802), 1559241602);
        TZ_CHECK(from_local("Europe/Zaporozhye", 1559241602), 1559230802);
        TZ_CHECK(from_utc("Europe/Zaporozhye", 1471061604), 1471072404);
        TZ_CHECK(from_local("Europe/Zaporozhye", 1471072404), 1471061604);
        TZ_CHECK(from_utc("Europe/Zaporozhye", 1468677211), 1468688011);
        TZ_CHECK(from_local("Europe/Zaporozhye", 1468688011), 1468677211);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zaporozhye" << std::endl;
    }
    if (has_timezone("Europe/Zurich")) {
        TZ_CHECK(from_utc("Europe/Zurich", 1604808130), 1604811730);
        TZ_CHECK(from_local("Europe/Zurich", 1604811730), 1604808130);
        TZ_CHECK(from_utc("Europe/Zurich", 1554768843), 1554776043);
        TZ_CHECK(from_local("Europe/Zurich", 1554776043), 1554768843);
        TZ_CHECK(from_utc("Europe/Zurich", 1437258830), 1437266030);
        TZ_CHECK(from_local("Europe/Zurich", 1437266030), 1437258830);
        TZ_CHECK(from_utc("Europe/Zurich", 1544397994), 1544401594);
        TZ_CHECK(from_local("Europe/Zurich", 1544401594), 1544397994);
        TZ_CHECK(from_utc("Europe/Zurich", 1604599526), 1604603126);
        TZ_CHECK(from_local("Europe/Zurich", 1604603126), 1604599526);
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zurich" << std::endl;
    }
    if (has_timezone("GB")) {
        TZ_CHECK(from_utc("GB", 1565596163), 1565599763);
        TZ_CHECK(from_local("GB", 1565599763), 1565596163);
        TZ_CHECK(from_utc("GB", 1573580814), 1573580814);
        TZ_CHECK(from_local("GB", 1573580814), 1573580814);
        TZ_CHECK(from_utc("GB", 1540126195), 1540129795);
        TZ_CHECK(from_local("GB", 1540129795), 1540126195);
        TZ_CHECK(from_utc("GB", 1469651287), 1469654887);
        TZ_CHECK(from_local("GB", 1469654887), 1469651287);
        TZ_CHECK(from_utc("GB", 1564874359), 1564877959);
        TZ_CHECK(from_local("GB", 1564877959), 1564874359);
    } else {
        std::cerr << "NO TIMEZONE: GB" << std::endl;
    }
    if (has_timezone("GB-Eire")) {
        TZ_CHECK(from_utc("GB-Eire", 1528648842), 1528652442);
        TZ_CHECK(from_local("GB-Eire", 1528652442), 1528648842);
        TZ_CHECK(from_utc("GB-Eire", 1464824417), 1464828017);
        TZ_CHECK(from_local("GB-Eire", 1464828017), 1464824417);
        TZ_CHECK(from_utc("GB-Eire", 1420434712), 1420434712);
        TZ_CHECK(from_local("GB-Eire", 1420434712), 1420434712);
        TZ_CHECK(from_utc("GB-Eire", 1622595935), 1622599535);
        TZ_CHECK(from_local("GB-Eire", 1622599535), 1622595935);
        TZ_CHECK(from_utc("GB-Eire", 1540948876), 1540948876);
        TZ_CHECK(from_local("GB-Eire", 1540948876), 1540948876);
    } else {
        std::cerr << "NO TIMEZONE: GB-Eire" << std::endl;
    }
    if (has_timezone("GMT")) {
        TZ_CHECK(from_utc("GMT", 1511582416), 1511582416);
        TZ_CHECK(from_local("GMT", 1511582416), 1511582416);
        TZ_CHECK(from_utc("GMT", 1557352163), 1557352163);
        TZ_CHECK(from_local("GMT", 1557352163), 1557352163);
        TZ_CHECK(from_utc("GMT", 1619344574), 1619344574);
        TZ_CHECK(from_local("GMT", 1619344574), 1619344574);
        TZ_CHECK(from_utc("GMT", 1518669654), 1518669654);
        TZ_CHECK(from_local("GMT", 1518669654), 1518669654);
        TZ_CHECK(from_utc("GMT", 1567621198), 1567621198);
        TZ_CHECK(from_local("GMT", 1567621198), 1567621198);
    } else {
        std::cerr << "NO TIMEZONE: GMT" << std::endl;
    }
    if (has_timezone("GMT+0")) {
        TZ_CHECK(from_utc("GMT+0", 1425709234), 1425709234);
        TZ_CHECK(from_local("GMT+0", 1425709234), 1425709234);
        TZ_CHECK(from_utc("GMT+0", 1525631591), 1525631591);
        TZ_CHECK(from_local("GMT+0", 1525631591), 1525631591);
        TZ_CHECK(from_utc("GMT+0", 1607489961), 1607489961);
        TZ_CHECK(from_local("GMT+0", 1607489961), 1607489961);
        TZ_CHECK(from_utc("GMT+0", 1484021361), 1484021361);
        TZ_CHECK(from_local("GMT+0", 1484021361), 1484021361);
        TZ_CHECK(from_utc("GMT+0", 1570660072), 1570660072);
        TZ_CHECK(from_local("GMT+0", 1570660072), 1570660072);
    } else {
        std::cerr << "NO TIMEZONE: GMT+0" << std::endl;
    }
    if (has_timezone("GMT-0")) {
        TZ_CHECK(from_utc("GMT-0", 1417445007), 1417445007);
        TZ_CHECK(from_local("GMT-0", 1417445007), 1417445007);
        TZ_CHECK(from_utc("GMT-0", 1569315688), 1569315688);
        TZ_CHECK(from_local("GMT-0", 1569315688), 1569315688);
        TZ_CHECK(from_utc("GMT-0", 1538226319), 1538226319);
        TZ_CHECK(from_local("GMT-0", 1538226319), 1538226319);
        TZ_CHECK(from_utc("GMT-0", 1578035974), 1578035974);
        TZ_CHECK(from_local("GMT-0", 1578035974), 1578035974);
        TZ_CHECK(from_utc("GMT-0", 1514975763), 1514975763);
        TZ_CHECK(from_local("GMT-0", 1514975763), 1514975763);
    } else {
        std::cerr << "NO TIMEZONE: GMT-0" << std::endl;
    }
    if (has_timezone("GMT0")) {
        TZ_CHECK(from_utc("GMT0", 1452518249), 1452518249);
        TZ_CHECK(from_local("GMT0", 1452518249), 1452518249);
        TZ_CHECK(from_utc("GMT0", 1526083292), 1526083292);
        TZ_CHECK(from_local("GMT0", 1526083292), 1526083292);
        TZ_CHECK(from_utc("GMT0", 1549176425), 1549176425);
        TZ_CHECK(from_local("GMT0", 1549176425), 1549176425);
        TZ_CHECK(from_utc("GMT0", 1600410085), 1600410085);
        TZ_CHECK(from_local("GMT0", 1600410085), 1600410085);
        TZ_CHECK(from_utc("GMT0", 1554464010), 1554464010);
        TZ_CHECK(from_local("GMT0", 1554464010), 1554464010);
    } else {
        std::cerr << "NO TIMEZONE: GMT0" << std::endl;
    }
    if (has_timezone("Greenwich")) {
        TZ_CHECK(from_utc("Greenwich", 1533439851), 1533439851);
        TZ_CHECK(from_local("Greenwich", 1533439851), 1533439851);
        TZ_CHECK(from_utc("Greenwich", 1432965789), 1432965789);
        TZ_CHECK(from_local("Greenwich", 1432965789), 1432965789);
        TZ_CHECK(from_utc("Greenwich", 1580042293), 1580042293);
        TZ_CHECK(from_local("Greenwich", 1580042293), 1580042293);
        TZ_CHECK(from_utc("Greenwich", 1557641202), 1557641202);
        TZ_CHECK(from_local("Greenwich", 1557641202), 1557641202);
        TZ_CHECK(from_utc("Greenwich", 1562322506), 1562322506);
        TZ_CHECK(from_local("Greenwich", 1562322506), 1562322506);
    } else {
        std::cerr << "NO TIMEZONE: Greenwich" << std::endl;
    }
    if (has_timezone("HST")) {
        TZ_CHECK(from_utc("HST", 1524533803), 1524497803);
        TZ_CHECK(from_local("HST", 1524497803), 1524533803);
        TZ_CHECK(from_utc("HST", 1468402351), 1468366351);
        TZ_CHECK(from_local("HST", 1468366351), 1468402351);
        TZ_CHECK(from_utc("HST", 1583300075), 1583264075);
        TZ_CHECK(from_local("HST", 1583264075), 1583300075);
        TZ_CHECK(from_utc("HST", 1421207113), 1421171113);
        TZ_CHECK(from_local("HST", 1421171113), 1421207113);
        TZ_CHECK(from_utc("HST", 1448395912), 1448359912);
        TZ_CHECK(from_local("HST", 1448359912), 1448395912);
    } else {
        std::cerr << "NO TIMEZONE: HST" << std::endl;
    }
    if (has_timezone("Hongkong")) {
        TZ_CHECK(from_utc("Hongkong", 1575294025), 1575322825);
        TZ_CHECK(from_local("Hongkong", 1575322825), 1575294025);
        TZ_CHECK(from_utc("Hongkong", 1586672828), 1586701628);
        TZ_CHECK(from_local("Hongkong", 1586701628), 1586672828);
        TZ_CHECK(from_utc("Hongkong", 1415389931), 1415418731);
        TZ_CHECK(from_local("Hongkong", 1415418731), 1415389931);
        TZ_CHECK(from_utc("Hongkong", 1481884686), 1481913486);
        TZ_CHECK(from_local("Hongkong", 1481913486), 1481884686);
        TZ_CHECK(from_utc("Hongkong", 1628546871), 1628575671);
        TZ_CHECK(from_local("Hongkong", 1628575671), 1628546871);
    } else {
        std::cerr << "NO TIMEZONE: Hongkong" << std::endl;
    }
    if (has_timezone("Iceland")) {
        TZ_CHECK(from_utc("Iceland", 1480089260), 1480089260);
        TZ_CHECK(from_local("Iceland", 1480089260), 1480089260);
        TZ_CHECK(from_utc("Iceland", 1598795333), 1598795333);
        TZ_CHECK(from_local("Iceland", 1598795333), 1598795333);
        TZ_CHECK(from_utc("Iceland", 1492142484), 1492142484);
        TZ_CHECK(from_local("Iceland", 1492142484), 1492142484);
        TZ_CHECK(from_utc("Iceland", 1477249641), 1477249641);
        TZ_CHECK(from_local("Iceland", 1477249641), 1477249641);
        TZ_CHECK(from_utc("Iceland", 1620846403), 1620846403);
        TZ_CHECK(from_local("Iceland", 1620846403), 1620846403);
    } else {
        std::cerr << "NO TIMEZONE: Iceland" << std::endl;
    }
    if (has_timezone("Indian/Antananarivo")) {
        TZ_CHECK(from_utc("Indian/Antananarivo", 1538210273), 1538221073);
        TZ_CHECK(from_local("Indian/Antananarivo", 1538221073), 1538210273);
        TZ_CHECK(from_utc("Indian/Antananarivo", 1434468322), 1434479122);
        TZ_CHECK(from_local("Indian/Antananarivo", 1434479122), 1434468322);
        TZ_CHECK(from_utc("Indian/Antananarivo", 1460486036), 1460496836);
        TZ_CHECK(from_local("Indian/Antananarivo", 1460496836), 1460486036);
        TZ_CHECK(from_utc("Indian/Antananarivo", 1503295738), 1503306538);
        TZ_CHECK(from_local("Indian/Antananarivo", 1503306538), 1503295738);
        TZ_CHECK(from_utc("Indian/Antananarivo", 1579613228), 1579624028);
        TZ_CHECK(from_local("Indian/Antananarivo", 1579624028), 1579613228);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Antananarivo" << std::endl;
    }
    if (has_timezone("Indian/Chagos")) {
        TZ_CHECK(from_utc("Indian/Chagos", 1442096632), 1442118232);
        TZ_CHECK(from_local("Indian/Chagos", 1442118232), 1442096632);
        TZ_CHECK(from_utc("Indian/Chagos", 1585253367), 1585274967);
        TZ_CHECK(from_local("Indian/Chagos", 1585274967), 1585253367);
        TZ_CHECK(from_utc("Indian/Chagos", 1519501662), 1519523262);
        TZ_CHECK(from_local("Indian/Chagos", 1519523262), 1519501662);
        TZ_CHECK(from_utc("Indian/Chagos", 1591335280), 1591356880);
        TZ_CHECK(from_local("Indian/Chagos", 1591356880), 1591335280);
        TZ_CHECK(from_utc("Indian/Chagos", 1459244554), 1459266154);
        TZ_CHECK(from_local("Indian/Chagos", 1459266154), 1459244554);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Chagos" << std::endl;
    }
    if (has_timezone("Indian/Christmas")) {
        TZ_CHECK(from_utc("Indian/Christmas", 1456471245), 1456496445);
        TZ_CHECK(from_local("Indian/Christmas", 1456496445), 1456471245);
        TZ_CHECK(from_utc("Indian/Christmas", 1496394308), 1496419508);
        TZ_CHECK(from_local("Indian/Christmas", 1496419508), 1496394308);
        TZ_CHECK(from_utc("Indian/Christmas", 1627152276), 1627177476);
        TZ_CHECK(from_local("Indian/Christmas", 1627177476), 1627152276);
        TZ_CHECK(from_utc("Indian/Christmas", 1466612403), 1466637603);
        TZ_CHECK(from_local("Indian/Christmas", 1466637603), 1466612403);
        TZ_CHECK(from_utc("Indian/Christmas", 1470795572), 1470820772);
        TZ_CHECK(from_local("Indian/Christmas", 1470820772), 1470795572);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Christmas" << std::endl;
    }
    if (has_timezone("Indian/Cocos")) {
        TZ_CHECK(from_utc("Indian/Cocos", 1576125669), 1576149069);
        TZ_CHECK(from_local("Indian/Cocos", 1576149069), 1576125669);
        TZ_CHECK(from_utc("Indian/Cocos", 1467663415), 1467686815);
        TZ_CHECK(from_local("Indian/Cocos", 1467686815), 1467663415);
        TZ_CHECK(from_utc("Indian/Cocos", 1499706618), 1499730018);
        TZ_CHECK(from_local("Indian/Cocos", 1499730018), 1499706618);
        TZ_CHECK(from_utc("Indian/Cocos", 1475605666), 1475629066);
        TZ_CHECK(from_local("Indian/Cocos", 1475629066), 1475605666);
        TZ_CHECK(from_utc("Indian/Cocos", 1421810351), 1421833751);
        TZ_CHECK(from_local("Indian/Cocos", 1421833751), 1421810351);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Cocos" << std::endl;
    }
    if (has_timezone("Indian/Comoro")) {
        TZ_CHECK(from_utc("Indian/Comoro", 1601081879), 1601092679);
        TZ_CHECK(from_local("Indian/Comoro", 1601092679), 1601081879);
        TZ_CHECK(from_utc("Indian/Comoro", 1626707858), 1626718658);
        TZ_CHECK(from_local("Indian/Comoro", 1626718658), 1626707858);
        TZ_CHECK(from_utc("Indian/Comoro", 1444185254), 1444196054);
        TZ_CHECK(from_local("Indian/Comoro", 1444196054), 1444185254);
        TZ_CHECK(from_utc("Indian/Comoro", 1548290766), 1548301566);
        TZ_CHECK(from_local("Indian/Comoro", 1548301566), 1548290766);
        TZ_CHECK(from_utc("Indian/Comoro", 1492276556), 1492287356);
        TZ_CHECK(from_local("Indian/Comoro", 1492287356), 1492276556);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Comoro" << std::endl;
    }
    if (has_timezone("Indian/Kerguelen")) {
        TZ_CHECK(from_utc("Indian/Kerguelen", 1498908974), 1498926974);
        TZ_CHECK(from_local("Indian/Kerguelen", 1498926974), 1498908974);
        TZ_CHECK(from_utc("Indian/Kerguelen", 1449095966), 1449113966);
        TZ_CHECK(from_local("Indian/Kerguelen", 1449113966), 1449095966);
        TZ_CHECK(from_utc("Indian/Kerguelen", 1583355203), 1583373203);
        TZ_CHECK(from_local("Indian/Kerguelen", 1583373203), 1583355203);
        TZ_CHECK(from_utc("Indian/Kerguelen", 1544301453), 1544319453);
        TZ_CHECK(from_local("Indian/Kerguelen", 1544319453), 1544301453);
        TZ_CHECK(from_utc("Indian/Kerguelen", 1431197536), 1431215536);
        TZ_CHECK(from_local("Indian/Kerguelen", 1431215536), 1431197536);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Kerguelen" << std::endl;
    }
    if (has_timezone("Indian/Mahe")) {
        TZ_CHECK(from_utc("Indian/Mahe", 1606257438), 1606271838);
        TZ_CHECK(from_local("Indian/Mahe", 1606271838), 1606257438);
        TZ_CHECK(from_utc("Indian/Mahe", 1566226123), 1566240523);
        TZ_CHECK(from_local("Indian/Mahe", 1566240523), 1566226123);
        TZ_CHECK(from_utc("Indian/Mahe", 1571254475), 1571268875);
        TZ_CHECK(from_local("Indian/Mahe", 1571268875), 1571254475);
        TZ_CHECK(from_utc("Indian/Mahe", 1538339133), 1538353533);
        TZ_CHECK(from_local("Indian/Mahe", 1538353533), 1538339133);
        TZ_CHECK(from_utc("Indian/Mahe", 1600268612), 1600283012);
        TZ_CHECK(from_local("Indian/Mahe", 1600283012), 1600268612);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mahe" << std::endl;
    }
    if (has_timezone("Indian/Maldives")) {
        TZ_CHECK(from_utc("Indian/Maldives", 1446473263), 1446491263);
        TZ_CHECK(from_local("Indian/Maldives", 1446491263), 1446473263);
        TZ_CHECK(from_utc("Indian/Maldives", 1569698884), 1569716884);
        TZ_CHECK(from_local("Indian/Maldives", 1569716884), 1569698884);
        TZ_CHECK(from_utc("Indian/Maldives", 1549155772), 1549173772);
        TZ_CHECK(from_local("Indian/Maldives", 1549173772), 1549155772);
        TZ_CHECK(from_utc("Indian/Maldives", 1630109106), 1630127106);
        TZ_CHECK(from_local("Indian/Maldives", 1630127106), 1630109106);
        TZ_CHECK(from_utc("Indian/Maldives", 1492825330), 1492843330);
        TZ_CHECK(from_local("Indian/Maldives", 1492843330), 1492825330);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Maldives" << std::endl;
    }
    if (has_timezone("Indian/Mauritius")) {
        TZ_CHECK(from_utc("Indian/Mauritius", 1451789451), 1451803851);
        TZ_CHECK(from_local("Indian/Mauritius", 1451803851), 1451789451);
        TZ_CHECK(from_utc("Indian/Mauritius", 1603439164), 1603453564);
        TZ_CHECK(from_local("Indian/Mauritius", 1603453564), 1603439164);
        TZ_CHECK(from_utc("Indian/Mauritius", 1548739985), 1548754385);
        TZ_CHECK(from_local("Indian/Mauritius", 1548754385), 1548739985);
        TZ_CHECK(from_utc("Indian/Mauritius", 1564763332), 1564777732);
        TZ_CHECK(from_local("Indian/Mauritius", 1564777732), 1564763332);
        TZ_CHECK(from_utc("Indian/Mauritius", 1446316415), 1446330815);
        TZ_CHECK(from_local("Indian/Mauritius", 1446330815), 1446316415);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mauritius" << std::endl;
    }
    if (has_timezone("Indian/Mayotte")) {
        TZ_CHECK(from_utc("Indian/Mayotte", 1604288072), 1604298872);
        TZ_CHECK(from_local("Indian/Mayotte", 1604298872), 1604288072);
        TZ_CHECK(from_utc("Indian/Mayotte", 1514001432), 1514012232);
        TZ_CHECK(from_local("Indian/Mayotte", 1514012232), 1514001432);
        TZ_CHECK(from_utc("Indian/Mayotte", 1549937862), 1549948662);
        TZ_CHECK(from_local("Indian/Mayotte", 1549948662), 1549937862);
        TZ_CHECK(from_utc("Indian/Mayotte", 1452877896), 1452888696);
        TZ_CHECK(from_local("Indian/Mayotte", 1452888696), 1452877896);
        TZ_CHECK(from_utc("Indian/Mayotte", 1621871024), 1621881824);
        TZ_CHECK(from_local("Indian/Mayotte", 1621881824), 1621871024);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mayotte" << std::endl;
    }
    if (has_timezone("Indian/Reunion")) {
        TZ_CHECK(from_utc("Indian/Reunion", 1605293933), 1605308333);
        TZ_CHECK(from_local("Indian/Reunion", 1605308333), 1605293933);
        TZ_CHECK(from_utc("Indian/Reunion", 1541128884), 1541143284);
        TZ_CHECK(from_local("Indian/Reunion", 1541143284), 1541128884);
        TZ_CHECK(from_utc("Indian/Reunion", 1434901583), 1434915983);
        TZ_CHECK(from_local("Indian/Reunion", 1434915983), 1434901583);
        TZ_CHECK(from_utc("Indian/Reunion", 1525189606), 1525204006);
        TZ_CHECK(from_local("Indian/Reunion", 1525204006), 1525189606);
        TZ_CHECK(from_utc("Indian/Reunion", 1486813654), 1486828054);
        TZ_CHECK(from_local("Indian/Reunion", 1486828054), 1486813654);
    } else {
        std::cerr << "NO TIMEZONE: Indian/Reunion" << std::endl;
    }
    if (has_timezone("Iran")) {
        TZ_CHECK(from_utc("Iran", 1522614865), 1522631065);
        TZ_CHECK(from_local("Iran", 1522631065), 1522614865);
        TZ_CHECK(from_utc("Iran", 1443030059), 1443042659);
        TZ_CHECK(from_local("Iran", 1443042659), 1443030059);
        TZ_CHECK(from_utc("Iran", 1432483128), 1432499328);
        TZ_CHECK(from_local("Iran", 1432499328), 1432483128);
        TZ_CHECK(from_utc("Iran", 1620188983), 1620205183);
        TZ_CHECK(from_local("Iran", 1620205183), 1620188983);
        TZ_CHECK(from_utc("Iran", 1420569162), 1420581762);
        TZ_CHECK(from_local("Iran", 1420581762), 1420569162);
    } else {
        std::cerr << "NO TIMEZONE: Iran" << std::endl;
    }
    if (has_timezone("Israel")) {
        TZ_CHECK(from_utc("Israel", 1504445741), 1504456541);
        TZ_CHECK(from_local("Israel", 1504456541), 1504445741);
        TZ_CHECK(from_utc("Israel", 1568213027), 1568223827);
        TZ_CHECK(from_local("Israel", 1568223827), 1568213027);
        TZ_CHECK(from_utc("Israel", 1576739140), 1576746340);
        TZ_CHECK(from_local("Israel", 1576746340), 1576739140);
        TZ_CHECK(from_utc("Israel", 1556805909), 1556816709);
        TZ_CHECK(from_local("Israel", 1556816709), 1556805909);
        TZ_CHECK(from_utc("Israel", 1409723713), 1409734513);
        TZ_CHECK(from_local("Israel", 1409734513), 1409723713);
    } else {
        std::cerr << "NO TIMEZONE: Israel" << std::endl;
    }
    if (has_timezone("Jamaica")) {
        TZ_CHECK(from_utc("Jamaica", 1503441629), 1503423629);
        TZ_CHECK(from_local("Jamaica", 1503423629), 1503441629);
        TZ_CHECK(from_utc("Jamaica", 1478200412), 1478182412);
        TZ_CHECK(from_local("Jamaica", 1478182412), 1478200412);
        TZ_CHECK(from_utc("Jamaica", 1607225979), 1607207979);
        TZ_CHECK(from_local("Jamaica", 1607207979), 1607225979);
        TZ_CHECK(from_utc("Jamaica", 1595396410), 1595378410);
        TZ_CHECK(from_local("Jamaica", 1595378410), 1595396410);
        TZ_CHECK(from_utc("Jamaica", 1523225681), 1523207681);
        TZ_CHECK(from_local("Jamaica", 1523207681), 1523225681);
    } else {
        std::cerr << "NO TIMEZONE: Jamaica" << std::endl;
    }
    if (has_timezone("Japan")) {
        TZ_CHECK(from_utc("Japan", 1413333973), 1413366373);
        TZ_CHECK(from_local("Japan", 1413366373), 1413333973);
        TZ_CHECK(from_utc("Japan", 1596595202), 1596627602);
        TZ_CHECK(from_local("Japan", 1596627602), 1596595202);
        TZ_CHECK(from_utc("Japan", 1481061504), 1481093904);
        TZ_CHECK(from_local("Japan", 1481093904), 1481061504);
        TZ_CHECK(from_utc("Japan", 1441973806), 1442006206);
        TZ_CHECK(from_local("Japan", 1442006206), 1441973806);
        TZ_CHECK(from_utc("Japan", 1409760967), 1409793367);
        TZ_CHECK(from_local("Japan", 1409793367), 1409760967);
    } else {
        std::cerr << "NO TIMEZONE: Japan" << std::endl;
    }
    if (has_timezone("Kwajalein")) {
        TZ_CHECK(from_utc("Kwajalein", 1440162891), 1440206091);
        TZ_CHECK(from_local("Kwajalein", 1440206091), 1440162891);
        TZ_CHECK(from_utc("Kwajalein", 1452451035), 1452494235);
        TZ_CHECK(from_local("Kwajalein", 1452494235), 1452451035);
        TZ_CHECK(from_utc("Kwajalein", 1441695704), 1441738904);
        TZ_CHECK(from_local("Kwajalein", 1441738904), 1441695704);
        TZ_CHECK(from_utc("Kwajalein", 1565045165), 1565088365);
        TZ_CHECK(from_local("Kwajalein", 1565088365), 1565045165);
        TZ_CHECK(from_utc("Kwajalein", 1607277060), 1607320260);
        TZ_CHECK(from_local("Kwajalein", 1607320260), 1607277060);
    } else {
        std::cerr << "NO TIMEZONE: Kwajalein" << std::endl;
    }
    if (has_timezone("Libya")) {
        TZ_CHECK(from_utc("Libya", 1615174508), 1615181708);
        TZ_CHECK(from_local("Libya", 1615181708), 1615174508);
        TZ_CHECK(from_utc("Libya", 1437107771), 1437114971);
        TZ_CHECK(from_local("Libya", 1437114971), 1437107771);
        TZ_CHECK(from_utc("Libya", 1588977250), 1588984450);
        TZ_CHECK(from_local("Libya", 1588984450), 1588977250);
        TZ_CHECK(from_utc("Libya", 1530240259), 1530247459);
        TZ_CHECK(from_local("Libya", 1530247459), 1530240259);
        TZ_CHECK(from_utc("Libya", 1515284639), 1515291839);
        TZ_CHECK(from_local("Libya", 1515291839), 1515284639);
    } else {
        std::cerr << "NO TIMEZONE: Libya" << std::endl;
    }
    if (has_timezone("MET")) {
        TZ_CHECK(from_utc("MET", 1546276138), 1546279738);
        TZ_CHECK(from_local("MET", 1546279738), 1546276138);
        TZ_CHECK(from_utc("MET", 1606820200), 1606823800);
        TZ_CHECK(from_local("MET", 1606823800), 1606820200);
        TZ_CHECK(from_utc("MET", 1469804169), 1469811369);
        TZ_CHECK(from_local("MET", 1469811369), 1469804169);
        TZ_CHECK(from_utc("MET", 1553318710), 1553322310);
        TZ_CHECK(from_local("MET", 1553322310), 1553318710);
        TZ_CHECK(from_utc("MET", 1427870364), 1427877564);
        TZ_CHECK(from_local("MET", 1427877564), 1427870364);
    } else {
        std::cerr << "NO TIMEZONE: MET" << std::endl;
    }
    if (has_timezone("MST")) {
        TZ_CHECK(from_utc("MST", 1626088646), 1626063446);
        TZ_CHECK(from_local("MST", 1626063446), 1626088646);
        TZ_CHECK(from_utc("MST", 1464794844), 1464769644);
        TZ_CHECK(from_local("MST", 1464769644), 1464794844);
        TZ_CHECK(from_utc("MST", 1595170315), 1595145115);
        TZ_CHECK(from_local("MST", 1595145115), 1595170315);
        TZ_CHECK(from_utc("MST", 1495991871), 1495966671);
        TZ_CHECK(from_local("MST", 1495966671), 1495991871);
        TZ_CHECK(from_utc("MST", 1434455936), 1434430736);
        TZ_CHECK(from_local("MST", 1434430736), 1434455936);
    } else {
        std::cerr << "NO TIMEZONE: MST" << std::endl;
    }
    if (has_timezone("MST7MDT")) {
        TZ_CHECK(from_utc("MST7MDT", 1478661033), 1478635833);
        TZ_CHECK(from_local("MST7MDT", 1478635833), 1478661033);
        TZ_CHECK(from_utc("MST7MDT", 1435057576), 1435035976);
        TZ_CHECK(from_local("MST7MDT", 1435035976), 1435057576);
        TZ_CHECK(from_utc("MST7MDT", 1539340199), 1539318599);
        TZ_CHECK(from_local("MST7MDT", 1539318599), 1539340199);
        TZ_CHECK(from_utc("MST7MDT", 1432463837), 1432442237);
        TZ_CHECK(from_local("MST7MDT", 1432442237), 1432463837);
        TZ_CHECK(from_utc("MST7MDT", 1418839542), 1418814342);
        TZ_CHECK(from_local("MST7MDT", 1418814342), 1418839542);
    } else {
        std::cerr << "NO TIMEZONE: MST7MDT" << std::endl;
    }
    if (has_timezone("Mexico/BajaNorte")) {
        TZ_CHECK(from_utc("Mexico/BajaNorte", 1518597789), 1518568989);
        TZ_CHECK(from_local("Mexico/BajaNorte", 1518568989), 1518597789);
        TZ_CHECK(from_utc("Mexico/BajaNorte", 1526807967), 1526782767);
        TZ_CHECK(from_local("Mexico/BajaNorte", 1526782767), 1526807967);
        TZ_CHECK(from_utc("Mexico/BajaNorte", 1493850968), 1493825768);
        TZ_CHECK(from_local("Mexico/BajaNorte", 1493825768), 1493850968);
        TZ_CHECK(from_utc("Mexico/BajaNorte", 1446177659), 1446152459);
        TZ_CHECK(from_local("Mexico/BajaNorte", 1446152459), 1446177659);
        TZ_CHECK(from_utc("Mexico/BajaNorte", 1459263306), 1459238106);
        TZ_CHECK(from_local("Mexico/BajaNorte", 1459238106), 1459263306);
    } else {
        std::cerr << "NO TIMEZONE: Mexico/BajaNorte" << std::endl;
    }
    if (has_timezone("Mexico/BajaSur")) {
        TZ_CHECK(from_utc("Mexico/BajaSur", 1459120860), 1459095660);
        TZ_CHECK(from_local("Mexico/BajaSur", 1459095660), 1459120860);
        TZ_CHECK(from_utc("Mexico/BajaSur", 1517555345), 1517530145);
        TZ_CHECK(from_local("Mexico/BajaSur", 1517530145), 1517555345);
        TZ_CHECK(from_utc("Mexico/BajaSur", 1435053724), 1435032124);
        TZ_CHECK(from_local("Mexico/BajaSur", 1435032124), 1435053724);
        TZ_CHECK(from_utc("Mexico/BajaSur", 1575537419), 1575512219);
        TZ_CHECK(from_local("Mexico/BajaSur", 1575512219), 1575537419);
        TZ_CHECK(from_utc("Mexico/BajaSur", 1548713551), 1548688351);
        TZ_CHECK(from_local("Mexico/BajaSur", 1548688351), 1548713551);
    } else {
        std::cerr << "NO TIMEZONE: Mexico/BajaSur" << std::endl;
    }
    if (has_timezone("Mexico/General")) {
        TZ_CHECK(from_utc("Mexico/General", 1565467214), 1565449214);
        TZ_CHECK(from_local("Mexico/General", 1565449214), 1565467214);
        TZ_CHECK(from_utc("Mexico/General", 1488609188), 1488587588);
        TZ_CHECK(from_local("Mexico/General", 1488587588), 1488609188);
        TZ_CHECK(from_utc("Mexico/General", 1411184091), 1411166091);
        TZ_CHECK(from_local("Mexico/General", 1411166091), 1411184091);
        TZ_CHECK(from_utc("Mexico/General", 1549388882), 1549367282);
        TZ_CHECK(from_local("Mexico/General", 1549367282), 1549388882);
        TZ_CHECK(from_utc("Mexico/General", 1593728151), 1593710151);
        TZ_CHECK(from_local("Mexico/General", 1593710151), 1593728151);
    } else {
        std::cerr << "NO TIMEZONE: Mexico/General" << std::endl;
    }
    if (has_timezone("NZ")) {
        TZ_CHECK(from_utc("NZ", 1439160049), 1439203249);
        TZ_CHECK(from_local("NZ", 1439203249), 1439160049);
        TZ_CHECK(from_utc("NZ", 1605614408), 1605661208);
        TZ_CHECK(from_local("NZ", 1605661208), 1605614408);
        TZ_CHECK(from_utc("NZ", 1499729335), 1499772535);
        TZ_CHECK(from_local("NZ", 1499772535), 1499729335);
        TZ_CHECK(from_utc("NZ", 1487132700), 1487179500);
        TZ_CHECK(from_local("NZ", 1487179500), 1487132700);
        TZ_CHECK(from_utc("NZ", 1519182223), 1519229023);
        TZ_CHECK(from_local("NZ", 1519229023), 1519182223);
    } else {
        std::cerr << "NO TIMEZONE: NZ" << std::endl;
    }
    if (has_timezone("NZ-CHAT")) {
        TZ_CHECK(from_utc("NZ-CHAT", 1494306858), 1494352758);
        TZ_CHECK(from_local("NZ-CHAT", 1494352758), 1494306858);
        TZ_CHECK(from_utc("NZ-CHAT", 1416107943), 1416157443);
        TZ_CHECK(from_local("NZ-CHAT", 1416157443), 1416107943);
        TZ_CHECK(from_utc("NZ-CHAT", 1588376550), 1588422450);
        TZ_CHECK(from_local("NZ-CHAT", 1588422450), 1588376550);
        TZ_CHECK(from_utc("NZ-CHAT", 1512557705), 1512607205);
        TZ_CHECK(from_local("NZ-CHAT", 1512607205), 1512557705);
        TZ_CHECK(from_utc("NZ-CHAT", 1414891990), 1414941490);
        TZ_CHECK(from_local("NZ-CHAT", 1414941490), 1414891990);
    } else {
        std::cerr << "NO TIMEZONE: NZ-CHAT" << std::endl;
    }
    if (has_timezone("Navajo")) {
        TZ_CHECK(from_utc("Navajo", 1577342833), 1577317633);
        TZ_CHECK(from_local("Navajo", 1577317633), 1577342833);
        TZ_CHECK(from_utc("Navajo", 1575865815), 1575840615);
        TZ_CHECK(from_local("Navajo", 1575840615), 1575865815);
        TZ_CHECK(from_utc("Navajo", 1574116361), 1574091161);
        TZ_CHECK(from_local("Navajo", 1574091161), 1574116361);
        TZ_CHECK(from_utc("Navajo", 1567585199), 1567563599);
        TZ_CHECK(from_local("Navajo", 1567563599), 1567585199);
        TZ_CHECK(from_utc("Navajo", 1478038501), 1478016901);
        TZ_CHECK(from_local("Navajo", 1478016901), 1478038501);
    } else {
        std::cerr << "NO TIMEZONE: Navajo" << std::endl;
    }
    if (has_timezone("PRC")) {
        TZ_CHECK(from_utc("PRC", 1570202247), 1570231047);
        TZ_CHECK(from_local("PRC", 1570231047), 1570202247);
        TZ_CHECK(from_utc("PRC", 1596067218), 1596096018);
        TZ_CHECK(from_local("PRC", 1596096018), 1596067218);
        TZ_CHECK(from_utc("PRC", 1433211468), 1433240268);
        TZ_CHECK(from_local("PRC", 1433240268), 1433211468);
        TZ_CHECK(from_utc("PRC", 1546750857), 1546779657);
        TZ_CHECK(from_local("PRC", 1546779657), 1546750857);
        TZ_CHECK(from_utc("PRC", 1489755152), 1489783952);
        TZ_CHECK(from_local("PRC", 1489783952), 1489755152);
    } else {
        std::cerr << "NO TIMEZONE: PRC" << std::endl;
    }
    if (has_timezone("PST8PDT")) {
        TZ_CHECK(from_utc("PST8PDT", 1433070918), 1433045718);
        TZ_CHECK(from_local("PST8PDT", 1433045718), 1433070918);
        TZ_CHECK(from_utc("PST8PDT", 1420522981), 1420494181);
        TZ_CHECK(from_local("PST8PDT", 1420494181), 1420522981);
        TZ_CHECK(from_utc("PST8PDT", 1489085217), 1489056417);
        TZ_CHECK(from_local("PST8PDT", 1489056417), 1489085217);
        TZ_CHECK(from_utc("PST8PDT", 1421708238), 1421679438);
        TZ_CHECK(from_local("PST8PDT", 1421679438), 1421708238);
        TZ_CHECK(from_utc("PST8PDT", 1446497247), 1446468447);
        TZ_CHECK(from_local("PST8PDT", 1446468447), 1446497247);
    } else {
        std::cerr << "NO TIMEZONE: PST8PDT" << std::endl;
    }
    if (has_timezone("Pacific/Apia")) {
        TZ_CHECK(from_utc("Pacific/Apia", 1441401879), 1441448679);
        TZ_CHECK(from_local("Pacific/Apia", 1441448679), 1441401879);
        TZ_CHECK(from_utc("Pacific/Apia", 1505764176), 1505810976);
        TZ_CHECK(from_local("Pacific/Apia", 1505810976), 1505764176);
        TZ_CHECK(from_utc("Pacific/Apia", 1602599273), 1602649673);
        TZ_CHECK(from_local("Pacific/Apia", 1602649673), 1602599273);
        TZ_CHECK(from_utc("Pacific/Apia", 1590455102), 1590501902);
        TZ_CHECK(from_local("Pacific/Apia", 1590501902), 1590455102);
        TZ_CHECK(from_utc("Pacific/Apia", 1425069447), 1425119847);
        TZ_CHECK(from_local("Pacific/Apia", 1425119847), 1425069447);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Apia" << std::endl;
    }
    if (has_timezone("Pacific/Auckland")) {
        TZ_CHECK(from_utc("Pacific/Auckland", 1617929082), 1617972282);
        TZ_CHECK(from_local("Pacific/Auckland", 1617972282), 1617929082);
        TZ_CHECK(from_utc("Pacific/Auckland", 1468082530), 1468125730);
        TZ_CHECK(from_local("Pacific/Auckland", 1468125730), 1468082530);
        TZ_CHECK(from_utc("Pacific/Auckland", 1517770308), 1517817108);
        TZ_CHECK(from_local("Pacific/Auckland", 1517817108), 1517770308);
        TZ_CHECK(from_utc("Pacific/Auckland", 1576698320), 1576745120);
        TZ_CHECK(from_local("Pacific/Auckland", 1576745120), 1576698320);
        TZ_CHECK(from_utc("Pacific/Auckland", 1470701209), 1470744409);
        TZ_CHECK(from_local("Pacific/Auckland", 1470744409), 1470701209);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Auckland" << std::endl;
    }
    if (has_timezone("Pacific/Bougainville")) {
        TZ_CHECK(from_utc("Pacific/Bougainville", 1566586868), 1566626468);
        TZ_CHECK(from_local("Pacific/Bougainville", 1566626468), 1566586868);
        TZ_CHECK(from_utc("Pacific/Bougainville", 1581095941), 1581135541);
        TZ_CHECK(from_local("Pacific/Bougainville", 1581135541), 1581095941);
        TZ_CHECK(from_utc("Pacific/Bougainville", 1608091796), 1608131396);
        TZ_CHECK(from_local("Pacific/Bougainville", 1608131396), 1608091796);
        TZ_CHECK(from_utc("Pacific/Bougainville", 1625201751), 1625241351);
        TZ_CHECK(from_local("Pacific/Bougainville", 1625241351), 1625201751);
        TZ_CHECK(from_utc("Pacific/Bougainville", 1499532684), 1499572284);
        TZ_CHECK(from_local("Pacific/Bougainville", 1499572284), 1499532684);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Bougainville" << std::endl;
    }
    if (has_timezone("Pacific/Chatham")) {
        TZ_CHECK(from_utc("Pacific/Chatham", 1482024451), 1482073951);
        TZ_CHECK(from_local("Pacific/Chatham", 1482073951), 1482024451);
        TZ_CHECK(from_utc("Pacific/Chatham", 1555847675), 1555893575);
        TZ_CHECK(from_local("Pacific/Chatham", 1555893575), 1555847675);
        TZ_CHECK(from_utc("Pacific/Chatham", 1439114733), 1439160633);
        TZ_CHECK(from_local("Pacific/Chatham", 1439160633), 1439114733);
        TZ_CHECK(from_utc("Pacific/Chatham", 1551277557), 1551327057);
        TZ_CHECK(from_local("Pacific/Chatham", 1551327057), 1551277557);
        TZ_CHECK(from_utc("Pacific/Chatham", 1628528369), 1628574269);
        TZ_CHECK(from_local("Pacific/Chatham", 1628574269), 1628528369);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Chatham" << std::endl;
    }
    if (has_timezone("Pacific/Chuuk")) {
        TZ_CHECK(from_utc("Pacific/Chuuk", 1474860439), 1474896439);
        TZ_CHECK(from_local("Pacific/Chuuk", 1474896439), 1474860439);
        TZ_CHECK(from_utc("Pacific/Chuuk", 1446316903), 1446352903);
        TZ_CHECK(from_local("Pacific/Chuuk", 1446352903), 1446316903);
        TZ_CHECK(from_utc("Pacific/Chuuk", 1409871817), 1409907817);
        TZ_CHECK(from_local("Pacific/Chuuk", 1409907817), 1409871817);
        TZ_CHECK(from_utc("Pacific/Chuuk", 1441033576), 1441069576);
        TZ_CHECK(from_local("Pacific/Chuuk", 1441069576), 1441033576);
        TZ_CHECK(from_utc("Pacific/Chuuk", 1433256887), 1433292887);
        TZ_CHECK(from_local("Pacific/Chuuk", 1433292887), 1433256887);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Chuuk" << std::endl;
    }
    if (has_timezone("Pacific/Easter")) {
        TZ_CHECK(from_utc("Pacific/Easter", 1476412181), 1476394181);
        TZ_CHECK(from_local("Pacific/Easter", 1476394181), 1476412181);
        TZ_CHECK(from_utc("Pacific/Easter", 1619379064), 1619357464);
        TZ_CHECK(from_local("Pacific/Easter", 1619357464), 1619379064);
        TZ_CHECK(from_utc("Pacific/Easter", 1504551879), 1504533879);
        TZ_CHECK(from_local("Pacific/Easter", 1504533879), 1504551879);
        TZ_CHECK(from_utc("Pacific/Easter", 1539833138), 1539815138);
        TZ_CHECK(from_local("Pacific/Easter", 1539815138), 1539833138);
        TZ_CHECK(from_utc("Pacific/Easter", 1588233808), 1588212208);
        TZ_CHECK(from_local("Pacific/Easter", 1588212208), 1588233808);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Easter" << std::endl;
    }
    if (has_timezone("Pacific/Efate")) {
        TZ_CHECK(from_utc("Pacific/Efate", 1445391210), 1445430810);
        TZ_CHECK(from_local("Pacific/Efate", 1445430810), 1445391210);
        TZ_CHECK(from_utc("Pacific/Efate", 1599944211), 1599983811);
        TZ_CHECK(from_local("Pacific/Efate", 1599983811), 1599944211);
        TZ_CHECK(from_utc("Pacific/Efate", 1543225337), 1543264937);
        TZ_CHECK(from_local("Pacific/Efate", 1543264937), 1543225337);
        TZ_CHECK(from_utc("Pacific/Efate", 1580441504), 1580481104);
        TZ_CHECK(from_local("Pacific/Efate", 1580481104), 1580441504);
        TZ_CHECK(from_utc("Pacific/Efate", 1520352941), 1520392541);
        TZ_CHECK(from_local("Pacific/Efate", 1520392541), 1520352941);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Efate" << std::endl;
    }
    if (has_timezone("Pacific/Enderbury")) {
        TZ_CHECK(from_utc("Pacific/Enderbury", 1503795555), 1503842355);
        TZ_CHECK(from_local("Pacific/Enderbury", 1503842355), 1503795555);
        TZ_CHECK(from_utc("Pacific/Enderbury", 1576458028), 1576504828);
        TZ_CHECK(from_local("Pacific/Enderbury", 1576504828), 1576458028);
        TZ_CHECK(from_utc("Pacific/Enderbury", 1523353546), 1523400346);
        TZ_CHECK(from_local("Pacific/Enderbury", 1523400346), 1523353546);
        TZ_CHECK(from_utc("Pacific/Enderbury", 1415729793), 1415776593);
        TZ_CHECK(from_local("Pacific/Enderbury", 1415776593), 1415729793);
        TZ_CHECK(from_utc("Pacific/Enderbury", 1439913427), 1439960227);
        TZ_CHECK(from_local("Pacific/Enderbury", 1439960227), 1439913427);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Enderbury" << std::endl;
    }
    if (has_timezone("Pacific/Fakaofo")) {
        TZ_CHECK(from_utc("Pacific/Fakaofo", 1519370996), 1519417796);
        TZ_CHECK(from_local("Pacific/Fakaofo", 1519417796), 1519370996);
        TZ_CHECK(from_utc("Pacific/Fakaofo", 1470735750), 1470782550);
        TZ_CHECK(from_local("Pacific/Fakaofo", 1470782550), 1470735750);
        TZ_CHECK(from_utc("Pacific/Fakaofo", 1546306062), 1546352862);
        TZ_CHECK(from_local("Pacific/Fakaofo", 1546352862), 1546306062);
        TZ_CHECK(from_utc("Pacific/Fakaofo", 1436523486), 1436570286);
        TZ_CHECK(from_local("Pacific/Fakaofo", 1436570286), 1436523486);
        TZ_CHECK(from_utc("Pacific/Fakaofo", 1487889809), 1487936609);
        TZ_CHECK(from_local("Pacific/Fakaofo", 1487936609), 1487889809);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Fakaofo" << std::endl;
    }
    if (has_timezone("Pacific/Fiji")) {
        TZ_CHECK(from_utc("Pacific/Fiji", 1608306198), 1608352998);
        TZ_CHECK(from_local("Pacific/Fiji", 1608352998), 1608306198);
        TZ_CHECK(from_utc("Pacific/Fiji", 1529819708), 1529862908);
        TZ_CHECK(from_local("Pacific/Fiji", 1529862908), 1529819708);
        TZ_CHECK(from_utc("Pacific/Fiji", 1495543410), 1495586610);
        TZ_CHECK(from_local("Pacific/Fiji", 1495586610), 1495543410);
        TZ_CHECK(from_utc("Pacific/Fiji", 1490392846), 1490436046);
        TZ_CHECK(from_local("Pacific/Fiji", 1490436046), 1490392846);
        TZ_CHECK(from_utc("Pacific/Fiji", 1459832044), 1459875244);
        TZ_CHECK(from_local("Pacific/Fiji", 1459875244), 1459832044);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Fiji" << std::endl;
    }
    if (has_timezone("Pacific/Funafuti")) {
        TZ_CHECK(from_utc("Pacific/Funafuti", 1598939747), 1598982947);
        TZ_CHECK(from_local("Pacific/Funafuti", 1598982947), 1598939747);
        TZ_CHECK(from_utc("Pacific/Funafuti", 1462136899), 1462180099);
        TZ_CHECK(from_local("Pacific/Funafuti", 1462180099), 1462136899);
        TZ_CHECK(from_utc("Pacific/Funafuti", 1476886435), 1476929635);
        TZ_CHECK(from_local("Pacific/Funafuti", 1476929635), 1476886435);
        TZ_CHECK(from_utc("Pacific/Funafuti", 1450798861), 1450842061);
        TZ_CHECK(from_local("Pacific/Funafuti", 1450842061), 1450798861);
        TZ_CHECK(from_utc("Pacific/Funafuti", 1622616632), 1622659832);
        TZ_CHECK(from_local("Pacific/Funafuti", 1622659832), 1622616632);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Funafuti" << std::endl;
    }
    if (has_timezone("Pacific/Galapagos")) {
        TZ_CHECK(from_utc("Pacific/Galapagos", 1439535890), 1439514290);
        TZ_CHECK(from_local("Pacific/Galapagos", 1439514290), 1439535890);
        TZ_CHECK(from_utc("Pacific/Galapagos", 1560038414), 1560016814);
        TZ_CHECK(from_local("Pacific/Galapagos", 1560016814), 1560038414);
        TZ_CHECK(from_utc("Pacific/Galapagos", 1618802935), 1618781335);
        TZ_CHECK(from_local("Pacific/Galapagos", 1618781335), 1618802935);
        TZ_CHECK(from_utc("Pacific/Galapagos", 1558952489), 1558930889);
        TZ_CHECK(from_local("Pacific/Galapagos", 1558930889), 1558952489);
        TZ_CHECK(from_utc("Pacific/Galapagos", 1544443288), 1544421688);
        TZ_CHECK(from_local("Pacific/Galapagos", 1544421688), 1544443288);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Galapagos" << std::endl;
    }
    if (has_timezone("Pacific/Gambier")) {
        TZ_CHECK(from_utc("Pacific/Gambier", 1466185005), 1466152605);
        TZ_CHECK(from_local("Pacific/Gambier", 1466152605), 1466185005);
        TZ_CHECK(from_utc("Pacific/Gambier", 1445195747), 1445163347);
        TZ_CHECK(from_local("Pacific/Gambier", 1445163347), 1445195747);
        TZ_CHECK(from_utc("Pacific/Gambier", 1490197955), 1490165555);
        TZ_CHECK(from_local("Pacific/Gambier", 1490165555), 1490197955);
        TZ_CHECK(from_utc("Pacific/Gambier", 1412952836), 1412920436);
        TZ_CHECK(from_local("Pacific/Gambier", 1412920436), 1412952836);
        TZ_CHECK(from_utc("Pacific/Gambier", 1432178759), 1432146359);
        TZ_CHECK(from_local("Pacific/Gambier", 1432146359), 1432178759);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Gambier" << std::endl;
    }
    if (has_timezone("Pacific/Guadalcanal")) {
        TZ_CHECK(from_utc("Pacific/Guadalcanal", 1535499088), 1535538688);
        TZ_CHECK(from_local("Pacific/Guadalcanal", 1535538688), 1535499088);
        TZ_CHECK(from_utc("Pacific/Guadalcanal", 1534664217), 1534703817);
        TZ_CHECK(from_local("Pacific/Guadalcanal", 1534703817), 1534664217);
        TZ_CHECK(from_utc("Pacific/Guadalcanal", 1525020097), 1525059697);
        TZ_CHECK(from_local("Pacific/Guadalcanal", 1525059697), 1525020097);
        TZ_CHECK(from_utc("Pacific/Guadalcanal", 1602562074), 1602601674);
        TZ_CHECK(from_local("Pacific/Guadalcanal", 1602601674), 1602562074);
        TZ_CHECK(from_utc("Pacific/Guadalcanal", 1422019152), 1422058752);
        TZ_CHECK(from_local("Pacific/Guadalcanal", 1422058752), 1422019152);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Guadalcanal" << std::endl;
    }
    if (has_timezone("Pacific/Guam")) {
        TZ_CHECK(from_utc("Pacific/Guam", 1466405488), 1466441488);
        TZ_CHECK(from_local("Pacific/Guam", 1466441488), 1466405488);
        TZ_CHECK(from_utc("Pacific/Guam", 1433463294), 1433499294);
        TZ_CHECK(from_local("Pacific/Guam", 1433499294), 1433463294);
        TZ_CHECK(from_utc("Pacific/Guam", 1612496427), 1612532427);
        TZ_CHECK(from_local("Pacific/Guam", 1612532427), 1612496427);
        TZ_CHECK(from_utc("Pacific/Guam", 1445731320), 1445767320);
        TZ_CHECK(from_local("Pacific/Guam", 1445767320), 1445731320);
        TZ_CHECK(from_utc("Pacific/Guam", 1442581238), 1442617238);
        TZ_CHECK(from_local("Pacific/Guam", 1442617238), 1442581238);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Guam" << std::endl;
    }
    if (has_timezone("Pacific/Honolulu")) {
        TZ_CHECK(from_utc("Pacific/Honolulu", 1481644781), 1481608781);
        TZ_CHECK(from_local("Pacific/Honolulu", 1481608781), 1481644781);
        TZ_CHECK(from_utc("Pacific/Honolulu", 1566792838), 1566756838);
        TZ_CHECK(from_local("Pacific/Honolulu", 1566756838), 1566792838);
        TZ_CHECK(from_utc("Pacific/Honolulu", 1498721658), 1498685658);
        TZ_CHECK(from_local("Pacific/Honolulu", 1498685658), 1498721658);
        TZ_CHECK(from_utc("Pacific/Honolulu", 1412057936), 1412021936);
        TZ_CHECK(from_local("Pacific/Honolulu", 1412021936), 1412057936);
        TZ_CHECK(from_utc("Pacific/Honolulu", 1572479082), 1572443082);
        TZ_CHECK(from_local("Pacific/Honolulu", 1572443082), 1572479082);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Honolulu" << std::endl;
    }
    if (has_timezone("Pacific/Johnston")) {
        TZ_CHECK(from_utc("Pacific/Johnston", 1428518592), 1428482592);
        TZ_CHECK(from_local("Pacific/Johnston", 1428482592), 1428518592);
        TZ_CHECK(from_utc("Pacific/Johnston", 1453324787), 1453288787);
        TZ_CHECK(from_local("Pacific/Johnston", 1453288787), 1453324787);
        TZ_CHECK(from_utc("Pacific/Johnston", 1507423444), 1507387444);
        TZ_CHECK(from_local("Pacific/Johnston", 1507387444), 1507423444);
        TZ_CHECK(from_utc("Pacific/Johnston", 1452790683), 1452754683);
        TZ_CHECK(from_local("Pacific/Johnston", 1452754683), 1452790683);
        TZ_CHECK(from_utc("Pacific/Johnston", 1556419475), 1556383475);
        TZ_CHECK(from_local("Pacific/Johnston", 1556383475), 1556419475);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Johnston" << std::endl;
    }
    if (has_timezone("Pacific/Kiritimati")) {
        TZ_CHECK(from_utc("Pacific/Kiritimati", 1599506720), 1599557120);
        TZ_CHECK(from_local("Pacific/Kiritimati", 1599557120), 1599506720);
        TZ_CHECK(from_utc("Pacific/Kiritimati", 1560121597), 1560171997);
        TZ_CHECK(from_local("Pacific/Kiritimati", 1560171997), 1560121597);
        TZ_CHECK(from_utc("Pacific/Kiritimati", 1590875830), 1590926230);
        TZ_CHECK(from_local("Pacific/Kiritimati", 1590926230), 1590875830);
        TZ_CHECK(from_utc("Pacific/Kiritimati", 1430784463), 1430834863);
        TZ_CHECK(from_local("Pacific/Kiritimati", 1430834863), 1430784463);
        TZ_CHECK(from_utc("Pacific/Kiritimati", 1531724358), 1531774758);
        TZ_CHECK(from_local("Pacific/Kiritimati", 1531774758), 1531724358);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kiritimati" << std::endl;
    }
    if (has_timezone("Pacific/Kosrae")) {
        TZ_CHECK(from_utc("Pacific/Kosrae", 1495669971), 1495709571);
        TZ_CHECK(from_local("Pacific/Kosrae", 1495709571), 1495669971);
        TZ_CHECK(from_utc("Pacific/Kosrae", 1569578906), 1569618506);
        TZ_CHECK(from_local("Pacific/Kosrae", 1569618506), 1569578906);
        TZ_CHECK(from_utc("Pacific/Kosrae", 1457429314), 1457468914);
        TZ_CHECK(from_local("Pacific/Kosrae", 1457468914), 1457429314);
        TZ_CHECK(from_utc("Pacific/Kosrae", 1472468369), 1472507969);
        TZ_CHECK(from_local("Pacific/Kosrae", 1472507969), 1472468369);
        TZ_CHECK(from_utc("Pacific/Kosrae", 1516454606), 1516494206);
        TZ_CHECK(from_local("Pacific/Kosrae", 1516494206), 1516454606);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kosrae" << std::endl;
    }
    if (has_timezone("Pacific/Kwajalein")) {
        TZ_CHECK(from_utc("Pacific/Kwajalein", 1414638843), 1414682043);
        TZ_CHECK(from_local("Pacific/Kwajalein", 1414682043), 1414638843);
        TZ_CHECK(from_utc("Pacific/Kwajalein", 1486171605), 1486214805);
        TZ_CHECK(from_local("Pacific/Kwajalein", 1486214805), 1486171605);
        TZ_CHECK(from_utc("Pacific/Kwajalein", 1543928083), 1543971283);
        TZ_CHECK(from_local("Pacific/Kwajalein", 1543971283), 1543928083);
        TZ_CHECK(from_utc("Pacific/Kwajalein", 1476647108), 1476690308);
        TZ_CHECK(from_local("Pacific/Kwajalein", 1476690308), 1476647108);
        TZ_CHECK(from_utc("Pacific/Kwajalein", 1427287855), 1427331055);
        TZ_CHECK(from_local("Pacific/Kwajalein", 1427331055), 1427287855);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kwajalein" << std::endl;
    }
    if (has_timezone("Pacific/Majuro")) {
        TZ_CHECK(from_utc("Pacific/Majuro", 1626372292), 1626415492);
        TZ_CHECK(from_local("Pacific/Majuro", 1626415492), 1626372292);
        TZ_CHECK(from_utc("Pacific/Majuro", 1518405970), 1518449170);
        TZ_CHECK(from_local("Pacific/Majuro", 1518449170), 1518405970);
        TZ_CHECK(from_utc("Pacific/Majuro", 1521629155), 1521672355);
        TZ_CHECK(from_local("Pacific/Majuro", 1521672355), 1521629155);
        TZ_CHECK(from_utc("Pacific/Majuro", 1487248278), 1487291478);
        TZ_CHECK(from_local("Pacific/Majuro", 1487291478), 1487248278);
        TZ_CHECK(from_utc("Pacific/Majuro", 1513484004), 1513527204);
        TZ_CHECK(from_local("Pacific/Majuro", 1513527204), 1513484004);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Majuro" << std::endl;
    }
    if (has_timezone("Pacific/Marquesas")) {
        TZ_CHECK(from_utc("Pacific/Marquesas", 1410226159), 1410191959);
        TZ_CHECK(from_local("Pacific/Marquesas", 1410191959), 1410226159);
        TZ_CHECK(from_utc("Pacific/Marquesas", 1436538922), 1436504722);
        TZ_CHECK(from_local("Pacific/Marquesas", 1436504722), 1436538922);
        TZ_CHECK(from_utc("Pacific/Marquesas", 1457680550), 1457646350);
        TZ_CHECK(from_local("Pacific/Marquesas", 1457646350), 1457680550);
        TZ_CHECK(from_utc("Pacific/Marquesas", 1607215324), 1607181124);
        TZ_CHECK(from_local("Pacific/Marquesas", 1607181124), 1607215324);
        TZ_CHECK(from_utc("Pacific/Marquesas", 1534108591), 1534074391);
        TZ_CHECK(from_local("Pacific/Marquesas", 1534074391), 1534108591);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Marquesas" << std::endl;
    }
    if (has_timezone("Pacific/Midway")) {
        TZ_CHECK(from_utc("Pacific/Midway", 1562068748), 1562029148);
        TZ_CHECK(from_local("Pacific/Midway", 1562029148), 1562068748);
        TZ_CHECK(from_utc("Pacific/Midway", 1507389798), 1507350198);
        TZ_CHECK(from_local("Pacific/Midway", 1507350198), 1507389798);
        TZ_CHECK(from_utc("Pacific/Midway", 1460639122), 1460599522);
        TZ_CHECK(from_local("Pacific/Midway", 1460599522), 1460639122);
        TZ_CHECK(from_utc("Pacific/Midway", 1591745533), 1591705933);
        TZ_CHECK(from_local("Pacific/Midway", 1591705933), 1591745533);
        TZ_CHECK(from_utc("Pacific/Midway", 1611624845), 1611585245);
        TZ_CHECK(from_local("Pacific/Midway", 1611585245), 1611624845);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Midway" << std::endl;
    }
    if (has_timezone("Pacific/Nauru")) {
        TZ_CHECK(from_utc("Pacific/Nauru", 1450309600), 1450352800);
        TZ_CHECK(from_local("Pacific/Nauru", 1450352800), 1450309600);
        TZ_CHECK(from_utc("Pacific/Nauru", 1566799125), 1566842325);
        TZ_CHECK(from_local("Pacific/Nauru", 1566842325), 1566799125);
        TZ_CHECK(from_utc("Pacific/Nauru", 1545655605), 1545698805);
        TZ_CHECK(from_local("Pacific/Nauru", 1545698805), 1545655605);
        TZ_CHECK(from_utc("Pacific/Nauru", 1548119589), 1548162789);
        TZ_CHECK(from_local("Pacific/Nauru", 1548162789), 1548119589);
        TZ_CHECK(from_utc("Pacific/Nauru", 1582992153), 1583035353);
        TZ_CHECK(from_local("Pacific/Nauru", 1583035353), 1582992153);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Nauru" << std::endl;
    }
    if (has_timezone("Pacific/Niue")) {
        TZ_CHECK(from_utc("Pacific/Niue", 1551411550), 1551371950);
        TZ_CHECK(from_local("Pacific/Niue", 1551371950), 1551411550);
        TZ_CHECK(from_utc("Pacific/Niue", 1448161986), 1448122386);
        TZ_CHECK(from_local("Pacific/Niue", 1448122386), 1448161986);
        TZ_CHECK(from_utc("Pacific/Niue", 1481576715), 1481537115);
        TZ_CHECK(from_local("Pacific/Niue", 1481537115), 1481576715);
        TZ_CHECK(from_utc("Pacific/Niue", 1518252423), 1518212823);
        TZ_CHECK(from_local("Pacific/Niue", 1518212823), 1518252423);
        TZ_CHECK(from_utc("Pacific/Niue", 1543190735), 1543151135);
        TZ_CHECK(from_local("Pacific/Niue", 1543151135), 1543190735);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Niue" << std::endl;
    }
    if (has_timezone("Pacific/Norfolk")) {
        TZ_CHECK(from_utc("Pacific/Norfolk", 1499696271), 1499735871);
        TZ_CHECK(from_local("Pacific/Norfolk", 1499735871), 1499696271);
        TZ_CHECK(from_utc("Pacific/Norfolk", 1544702262), 1544741862);
        TZ_CHECK(from_local("Pacific/Norfolk", 1544741862), 1544702262);
        TZ_CHECK(from_utc("Pacific/Norfolk", 1458423603), 1458463203);
        TZ_CHECK(from_local("Pacific/Norfolk", 1458463203), 1458423603);
        TZ_CHECK(from_utc("Pacific/Norfolk", 1438147290), 1438188690);
        TZ_CHECK(from_local("Pacific/Norfolk", 1438188690), 1438147290);
        TZ_CHECK(from_utc("Pacific/Norfolk", 1417681213), 1417722613);
        TZ_CHECK(from_local("Pacific/Norfolk", 1417722613), 1417681213);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Norfolk" << std::endl;
    }
    if (has_timezone("Pacific/Noumea")) {
        TZ_CHECK(from_utc("Pacific/Noumea", 1608403670), 1608443270);
        TZ_CHECK(from_local("Pacific/Noumea", 1608443270), 1608403670);
        TZ_CHECK(from_utc("Pacific/Noumea", 1534668994), 1534708594);
        TZ_CHECK(from_local("Pacific/Noumea", 1534708594), 1534668994);
        TZ_CHECK(from_utc("Pacific/Noumea", 1560033181), 1560072781);
        TZ_CHECK(from_local("Pacific/Noumea", 1560072781), 1560033181);
        TZ_CHECK(from_utc("Pacific/Noumea", 1570686920), 1570726520);
        TZ_CHECK(from_local("Pacific/Noumea", 1570726520), 1570686920);
        TZ_CHECK(from_utc("Pacific/Noumea", 1482059043), 1482098643);
        TZ_CHECK(from_local("Pacific/Noumea", 1482098643), 1482059043);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Noumea" << std::endl;
    }
    if (has_timezone("Pacific/Pago_Pago")) {
        TZ_CHECK(from_utc("Pacific/Pago_Pago", 1440444106), 1440404506);
        TZ_CHECK(from_local("Pacific/Pago_Pago", 1440404506), 1440444106);
        TZ_CHECK(from_utc("Pacific/Pago_Pago", 1584434433), 1584394833);
        TZ_CHECK(from_local("Pacific/Pago_Pago", 1584394833), 1584434433);
        TZ_CHECK(from_utc("Pacific/Pago_Pago", 1589785532), 1589745932);
        TZ_CHECK(from_local("Pacific/Pago_Pago", 1589745932), 1589785532);
        TZ_CHECK(from_utc("Pacific/Pago_Pago", 1471296599), 1471256999);
        TZ_CHECK(from_local("Pacific/Pago_Pago", 1471256999), 1471296599);
        TZ_CHECK(from_utc("Pacific/Pago_Pago", 1506082283), 1506042683);
        TZ_CHECK(from_local("Pacific/Pago_Pago", 1506042683), 1506082283);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pago_Pago" << std::endl;
    }
    if (has_timezone("Pacific/Palau")) {
        TZ_CHECK(from_utc("Pacific/Palau", 1551860204), 1551892604);
        TZ_CHECK(from_local("Pacific/Palau", 1551892604), 1551860204);
        TZ_CHECK(from_utc("Pacific/Palau", 1575111069), 1575143469);
        TZ_CHECK(from_local("Pacific/Palau", 1575143469), 1575111069);
        TZ_CHECK(from_utc("Pacific/Palau", 1628955395), 1628987795);
        TZ_CHECK(from_local("Pacific/Palau", 1628987795), 1628955395);
        TZ_CHECK(from_utc("Pacific/Palau", 1455765118), 1455797518);
        TZ_CHECK(from_local("Pacific/Palau", 1455797518), 1455765118);
        TZ_CHECK(from_utc("Pacific/Palau", 1572200692), 1572233092);
        TZ_CHECK(from_local("Pacific/Palau", 1572233092), 1572200692);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Palau" << std::endl;
    }
    if (has_timezone("Pacific/Pitcairn")) {
        TZ_CHECK(from_utc("Pacific/Pitcairn", 1545240344), 1545211544);
        TZ_CHECK(from_local("Pacific/Pitcairn", 1545211544), 1545240344);
        TZ_CHECK(from_utc("Pacific/Pitcairn", 1595731181), 1595702381);
        TZ_CHECK(from_local("Pacific/Pitcairn", 1595702381), 1595731181);
        TZ_CHECK(from_utc("Pacific/Pitcairn", 1443700663), 1443671863);
        TZ_CHECK(from_local("Pacific/Pitcairn", 1443671863), 1443700663);
        TZ_CHECK(from_utc("Pacific/Pitcairn", 1575290357), 1575261557);
        TZ_CHECK(from_local("Pacific/Pitcairn", 1575261557), 1575290357);
        TZ_CHECK(from_utc("Pacific/Pitcairn", 1602921368), 1602892568);
        TZ_CHECK(from_local("Pacific/Pitcairn", 1602892568), 1602921368);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pitcairn" << std::endl;
    }
    if (has_timezone("Pacific/Pohnpei")) {
        TZ_CHECK(from_utc("Pacific/Pohnpei", 1443000080), 1443039680);
        TZ_CHECK(from_local("Pacific/Pohnpei", 1443039680), 1443000080);
        TZ_CHECK(from_utc("Pacific/Pohnpei", 1474193005), 1474232605);
        TZ_CHECK(from_local("Pacific/Pohnpei", 1474232605), 1474193005);
        TZ_CHECK(from_utc("Pacific/Pohnpei", 1450874709), 1450914309);
        TZ_CHECK(from_local("Pacific/Pohnpei", 1450914309), 1450874709);
        TZ_CHECK(from_utc("Pacific/Pohnpei", 1523783769), 1523823369);
        TZ_CHECK(from_local("Pacific/Pohnpei", 1523823369), 1523783769);
        TZ_CHECK(from_utc("Pacific/Pohnpei", 1443304677), 1443344277);
        TZ_CHECK(from_local("Pacific/Pohnpei", 1443344277), 1443304677);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pohnpei" << std::endl;
    }
    if (has_timezone("Pacific/Ponape")) {
        TZ_CHECK(from_utc("Pacific/Ponape", 1597858581), 1597898181);
        TZ_CHECK(from_local("Pacific/Ponape", 1597898181), 1597858581);
        TZ_CHECK(from_utc("Pacific/Ponape", 1604813092), 1604852692);
        TZ_CHECK(from_local("Pacific/Ponape", 1604852692), 1604813092);
        TZ_CHECK(from_utc("Pacific/Ponape", 1471345865), 1471385465);
        TZ_CHECK(from_local("Pacific/Ponape", 1471385465), 1471345865);
        TZ_CHECK(from_utc("Pacific/Ponape", 1493736877), 1493776477);
        TZ_CHECK(from_local("Pacific/Ponape", 1493776477), 1493736877);
        TZ_CHECK(from_utc("Pacific/Ponape", 1416459215), 1416498815);
        TZ_CHECK(from_local("Pacific/Ponape", 1416498815), 1416459215);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Ponape" << std::endl;
    }
    if (has_timezone("Pacific/Port_Moresby")) {
        TZ_CHECK(from_utc("Pacific/Port_Moresby", 1588166680), 1588202680);
        TZ_CHECK(from_local("Pacific/Port_Moresby", 1588202680), 1588166680);
        TZ_CHECK(from_utc("Pacific/Port_Moresby", 1603878063), 1603914063);
        TZ_CHECK(from_local("Pacific/Port_Moresby", 1603914063), 1603878063);
        TZ_CHECK(from_utc("Pacific/Port_Moresby", 1440288606), 1440324606);
        TZ_CHECK(from_local("Pacific/Port_Moresby", 1440324606), 1440288606);
        TZ_CHECK(from_utc("Pacific/Port_Moresby", 1574349318), 1574385318);
        TZ_CHECK(from_local("Pacific/Port_Moresby", 1574385318), 1574349318);
        TZ_CHECK(from_utc("Pacific/Port_Moresby", 1436404204), 1436440204);
        TZ_CHECK(from_local("Pacific/Port_Moresby", 1436440204), 1436404204);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Port_Moresby" << std::endl;
    }
    if (has_timezone("Pacific/Rarotonga")) {
        TZ_CHECK(from_utc("Pacific/Rarotonga", 1499164423), 1499128423);
        TZ_CHECK(from_local("Pacific/Rarotonga", 1499128423), 1499164423);
        TZ_CHECK(from_utc("Pacific/Rarotonga", 1485103623), 1485067623);
        TZ_CHECK(from_local("Pacific/Rarotonga", 1485067623), 1485103623);
        TZ_CHECK(from_utc("Pacific/Rarotonga", 1456657262), 1456621262);
        TZ_CHECK(from_local("Pacific/Rarotonga", 1456621262), 1456657262);
        TZ_CHECK(from_utc("Pacific/Rarotonga", 1546778283), 1546742283);
        TZ_CHECK(from_local("Pacific/Rarotonga", 1546742283), 1546778283);
        TZ_CHECK(from_utc("Pacific/Rarotonga", 1438524131), 1438488131);
        TZ_CHECK(from_local("Pacific/Rarotonga", 1438488131), 1438524131);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Rarotonga" << std::endl;
    }
    if (has_timezone("Pacific/Saipan")) {
        TZ_CHECK(from_utc("Pacific/Saipan", 1481603399), 1481639399);
        TZ_CHECK(from_local("Pacific/Saipan", 1481639399), 1481603399);
        TZ_CHECK(from_utc("Pacific/Saipan", 1587646851), 1587682851);
        TZ_CHECK(from_local("Pacific/Saipan", 1587682851), 1587646851);
        TZ_CHECK(from_utc("Pacific/Saipan", 1588500081), 1588536081);
        TZ_CHECK(from_local("Pacific/Saipan", 1588536081), 1588500081);
        TZ_CHECK(from_utc("Pacific/Saipan", 1525499899), 1525535899);
        TZ_CHECK(from_local("Pacific/Saipan", 1525535899), 1525499899);
        TZ_CHECK(from_utc("Pacific/Saipan", 1609903045), 1609939045);
        TZ_CHECK(from_local("Pacific/Saipan", 1609939045), 1609903045);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Saipan" << std::endl;
    }
    if (has_timezone("Pacific/Samoa")) {
        TZ_CHECK(from_utc("Pacific/Samoa", 1448717925), 1448678325);
        TZ_CHECK(from_local("Pacific/Samoa", 1448678325), 1448717925);
        TZ_CHECK(from_utc("Pacific/Samoa", 1471246031), 1471206431);
        TZ_CHECK(from_local("Pacific/Samoa", 1471206431), 1471246031);
        TZ_CHECK(from_utc("Pacific/Samoa", 1537772722), 1537733122);
        TZ_CHECK(from_local("Pacific/Samoa", 1537733122), 1537772722);
        TZ_CHECK(from_utc("Pacific/Samoa", 1499803497), 1499763897);
        TZ_CHECK(from_local("Pacific/Samoa", 1499763897), 1499803497);
        TZ_CHECK(from_utc("Pacific/Samoa", 1584503708), 1584464108);
        TZ_CHECK(from_local("Pacific/Samoa", 1584464108), 1584503708);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Samoa" << std::endl;
    }
    if (has_timezone("Pacific/Tahiti")) {
        TZ_CHECK(from_utc("Pacific/Tahiti", 1573713087), 1573677087);
        TZ_CHECK(from_local("Pacific/Tahiti", 1573677087), 1573713087);
        TZ_CHECK(from_utc("Pacific/Tahiti", 1454849978), 1454813978);
        TZ_CHECK(from_local("Pacific/Tahiti", 1454813978), 1454849978);
        TZ_CHECK(from_utc("Pacific/Tahiti", 1622836604), 1622800604);
        TZ_CHECK(from_local("Pacific/Tahiti", 1622800604), 1622836604);
        TZ_CHECK(from_utc("Pacific/Tahiti", 1439990725), 1439954725);
        TZ_CHECK(from_local("Pacific/Tahiti", 1439954725), 1439990725);
        TZ_CHECK(from_utc("Pacific/Tahiti", 1579941127), 1579905127);
        TZ_CHECK(from_local("Pacific/Tahiti", 1579905127), 1579941127);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tahiti" << std::endl;
    }
    if (has_timezone("Pacific/Tarawa")) {
        TZ_CHECK(from_utc("Pacific/Tarawa", 1602240916), 1602284116);
        TZ_CHECK(from_local("Pacific/Tarawa", 1602284116), 1602240916);
        TZ_CHECK(from_utc("Pacific/Tarawa", 1498269608), 1498312808);
        TZ_CHECK(from_local("Pacific/Tarawa", 1498312808), 1498269608);
        TZ_CHECK(from_utc("Pacific/Tarawa", 1612407379), 1612450579);
        TZ_CHECK(from_local("Pacific/Tarawa", 1612450579), 1612407379);
        TZ_CHECK(from_utc("Pacific/Tarawa", 1626758408), 1626801608);
        TZ_CHECK(from_local("Pacific/Tarawa", 1626801608), 1626758408);
        TZ_CHECK(from_utc("Pacific/Tarawa", 1479865227), 1479908427);
        TZ_CHECK(from_local("Pacific/Tarawa", 1479908427), 1479865227);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tarawa" << std::endl;
    }
    if (has_timezone("Pacific/Tongatapu")) {
        TZ_CHECK(from_utc("Pacific/Tongatapu", 1536746294), 1536793094);
        TZ_CHECK(from_local("Pacific/Tongatapu", 1536793094), 1536746294);
        TZ_CHECK(from_utc("Pacific/Tongatapu", 1551256661), 1551303461);
        TZ_CHECK(from_local("Pacific/Tongatapu", 1551303461), 1551256661);
        TZ_CHECK(from_utc("Pacific/Tongatapu", 1582326861), 1582373661);
        TZ_CHECK(from_local("Pacific/Tongatapu", 1582373661), 1582326861);
        TZ_CHECK(from_utc("Pacific/Tongatapu", 1527885813), 1527932613);
        TZ_CHECK(from_local("Pacific/Tongatapu", 1527932613), 1527885813);
        TZ_CHECK(from_utc("Pacific/Tongatapu", 1455209734), 1455256534);
        TZ_CHECK(from_local("Pacific/Tongatapu", 1455256534), 1455209734);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tongatapu" << std::endl;
    }
    if (has_timezone("Pacific/Truk")) {
        TZ_CHECK(from_utc("Pacific/Truk", 1596808078), 1596844078);
        TZ_CHECK(from_local("Pacific/Truk", 1596844078), 1596808078);
        TZ_CHECK(from_utc("Pacific/Truk", 1554330900), 1554366900);
        TZ_CHECK(from_local("Pacific/Truk", 1554366900), 1554330900);
        TZ_CHECK(from_utc("Pacific/Truk", 1580364738), 1580400738);
        TZ_CHECK(from_local("Pacific/Truk", 1580400738), 1580364738);
        TZ_CHECK(from_utc("Pacific/Truk", 1587235965), 1587271965);
        TZ_CHECK(from_local("Pacific/Truk", 1587271965), 1587235965);
        TZ_CHECK(from_utc("Pacific/Truk", 1519539548), 1519575548);
        TZ_CHECK(from_local("Pacific/Truk", 1519575548), 1519539548);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Truk" << std::endl;
    }
    if (has_timezone("Pacific/Wake")) {
        TZ_CHECK(from_utc("Pacific/Wake", 1584848923), 1584892123);
        TZ_CHECK(from_local("Pacific/Wake", 1584892123), 1584848923);
        TZ_CHECK(from_utc("Pacific/Wake", 1583691497), 1583734697);
        TZ_CHECK(from_local("Pacific/Wake", 1583734697), 1583691497);
        TZ_CHECK(from_utc("Pacific/Wake", 1412675706), 1412718906);
        TZ_CHECK(from_local("Pacific/Wake", 1412718906), 1412675706);
        TZ_CHECK(from_utc("Pacific/Wake", 1442947688), 1442990888);
        TZ_CHECK(from_local("Pacific/Wake", 1442990888), 1442947688);
        TZ_CHECK(from_utc("Pacific/Wake", 1414764602), 1414807802);
        TZ_CHECK(from_local("Pacific/Wake", 1414807802), 1414764602);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Wake" << std::endl;
    }
    if (has_timezone("Pacific/Wallis")) {
        TZ_CHECK(from_utc("Pacific/Wallis", 1524746036), 1524789236);
        TZ_CHECK(from_local("Pacific/Wallis", 1524789236), 1524746036);
        TZ_CHECK(from_utc("Pacific/Wallis", 1453096482), 1453139682);
        TZ_CHECK(from_local("Pacific/Wallis", 1453139682), 1453096482);
        TZ_CHECK(from_utc("Pacific/Wallis", 1605680040), 1605723240);
        TZ_CHECK(from_local("Pacific/Wallis", 1605723240), 1605680040);
        TZ_CHECK(from_utc("Pacific/Wallis", 1514717645), 1514760845);
        TZ_CHECK(from_local("Pacific/Wallis", 1514760845), 1514717645);
        TZ_CHECK(from_utc("Pacific/Wallis", 1533565385), 1533608585);
        TZ_CHECK(from_local("Pacific/Wallis", 1533608585), 1533565385);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Wallis" << std::endl;
    }
    if (has_timezone("Pacific/Yap")) {
        TZ_CHECK(from_utc("Pacific/Yap", 1469772978), 1469808978);
        TZ_CHECK(from_local("Pacific/Yap", 1469808978), 1469772978);
        TZ_CHECK(from_utc("Pacific/Yap", 1512839912), 1512875912);
        TZ_CHECK(from_local("Pacific/Yap", 1512875912), 1512839912);
        TZ_CHECK(from_utc("Pacific/Yap", 1483469848), 1483505848);
        TZ_CHECK(from_local("Pacific/Yap", 1483505848), 1483469848);
        TZ_CHECK(from_utc("Pacific/Yap", 1443857931), 1443893931);
        TZ_CHECK(from_local("Pacific/Yap", 1443893931), 1443857931);
        TZ_CHECK(from_utc("Pacific/Yap", 1488726039), 1488762039);
        TZ_CHECK(from_local("Pacific/Yap", 1488762039), 1488726039);
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Yap" << std::endl;
    }
    if (has_timezone("Poland")) {
        TZ_CHECK(from_utc("Poland", 1444387822), 1444395022);
        TZ_CHECK(from_local("Poland", 1444395022), 1444387822);
        TZ_CHECK(from_utc("Poland", 1557169144), 1557176344);
        TZ_CHECK(from_local("Poland", 1557176344), 1557169144);
        TZ_CHECK(from_utc("Poland", 1486174697), 1486178297);
        TZ_CHECK(from_local("Poland", 1486178297), 1486174697);
        TZ_CHECK(from_utc("Poland", 1550401896), 1550405496);
        TZ_CHECK(from_local("Poland", 1550405496), 1550401896);
        TZ_CHECK(from_utc("Poland", 1600386283), 1600393483);
        TZ_CHECK(from_local("Poland", 1600393483), 1600386283);
    } else {
        std::cerr << "NO TIMEZONE: Poland" << std::endl;
    }
    if (has_timezone("Portugal")) {
        TZ_CHECK(from_utc("Portugal", 1516962199), 1516962199);
        TZ_CHECK(from_local("Portugal", 1516962199), 1516962199);
        TZ_CHECK(from_utc("Portugal", 1547852178), 1547852178);
        TZ_CHECK(from_local("Portugal", 1547852178), 1547852178);
        TZ_CHECK(from_utc("Portugal", 1626679148), 1626682748);
        TZ_CHECK(from_local("Portugal", 1626682748), 1626679148);
        TZ_CHECK(from_utc("Portugal", 1587753890), 1587757490);
        TZ_CHECK(from_local("Portugal", 1587757490), 1587753890);
        TZ_CHECK(from_utc("Portugal", 1601767726), 1601771326);
        TZ_CHECK(from_local("Portugal", 1601771326), 1601767726);
    } else {
        std::cerr << "NO TIMEZONE: Portugal" << std::endl;
    }
    if (has_timezone("ROC")) {
        TZ_CHECK(from_utc("ROC", 1522419976), 1522448776);
        TZ_CHECK(from_local("ROC", 1522448776), 1522419976);
        TZ_CHECK(from_utc("ROC", 1445790781), 1445819581);
        TZ_CHECK(from_local("ROC", 1445819581), 1445790781);
        TZ_CHECK(from_utc("ROC", 1464337605), 1464366405);
        TZ_CHECK(from_local("ROC", 1464366405), 1464337605);
        TZ_CHECK(from_utc("ROC", 1629828980), 1629857780);
        TZ_CHECK(from_local("ROC", 1629857780), 1629828980);
        TZ_CHECK(from_utc("ROC", 1429977103), 1430005903);
        TZ_CHECK(from_local("ROC", 1430005903), 1429977103);
    } else {
        std::cerr << "NO TIMEZONE: ROC" << std::endl;
    }
    if (has_timezone("ROK")) {
        TZ_CHECK(from_utc("ROK", 1458343812), 1458376212);
        TZ_CHECK(from_local("ROK", 1458376212), 1458343812);
        TZ_CHECK(from_utc("ROK", 1572442679), 1572475079);
        TZ_CHECK(from_local("ROK", 1572475079), 1572442679);
        TZ_CHECK(from_utc("ROK", 1603761289), 1603793689);
        TZ_CHECK(from_local("ROK", 1603793689), 1603761289);
        TZ_CHECK(from_utc("ROK", 1457603449), 1457635849);
        TZ_CHECK(from_local("ROK", 1457635849), 1457603449);
        TZ_CHECK(from_utc("ROK", 1598880590), 1598912990);
        TZ_CHECK(from_local("ROK", 1598912990), 1598880590);
    } else {
        std::cerr << "NO TIMEZONE: ROK" << std::endl;
    }
    if (has_timezone("Singapore")) {
        TZ_CHECK(from_utc("Singapore", 1613371839), 1613400639);
        TZ_CHECK(from_local("Singapore", 1613400639), 1613371839);
        TZ_CHECK(from_utc("Singapore", 1475907649), 1475936449);
        TZ_CHECK(from_local("Singapore", 1475936449), 1475907649);
        TZ_CHECK(from_utc("Singapore", 1469837800), 1469866600);
        TZ_CHECK(from_local("Singapore", 1469866600), 1469837800);
        TZ_CHECK(from_utc("Singapore", 1544502775), 1544531575);
        TZ_CHECK(from_local("Singapore", 1544531575), 1544502775);
        TZ_CHECK(from_utc("Singapore", 1431620490), 1431649290);
        TZ_CHECK(from_local("Singapore", 1431649290), 1431620490);
    } else {
        std::cerr << "NO TIMEZONE: Singapore" << std::endl;
    }
    if (has_timezone("Turkey")) {
        TZ_CHECK(from_utc("Turkey", 1455079075), 1455086275);
        TZ_CHECK(from_local("Turkey", 1455086275), 1455079075);
        TZ_CHECK(from_utc("Turkey", 1486064470), 1486075270);
        TZ_CHECK(from_local("Turkey", 1486075270), 1486064470);
        TZ_CHECK(from_utc("Turkey", 1494020994), 1494031794);
        TZ_CHECK(from_local("Turkey", 1494031794), 1494020994);
        TZ_CHECK(from_utc("Turkey", 1448628657), 1448635857);
        TZ_CHECK(from_local("Turkey", 1448635857), 1448628657);
        TZ_CHECK(from_utc("Turkey", 1467612590), 1467623390);
        TZ_CHECK(from_local("Turkey", 1467623390), 1467612590);
    } else {
        std::cerr << "NO TIMEZONE: Turkey" << std::endl;
    }
    if (has_timezone("UCT")) {
        TZ_CHECK(from_utc("UCT", 1487033664), 1487033664);
        TZ_CHECK(from_local("UCT", 1487033664), 1487033664);
        TZ_CHECK(from_utc("UCT", 1423597029), 1423597029);
        TZ_CHECK(from_local("UCT", 1423597029), 1423597029);
        TZ_CHECK(from_utc("UCT", 1522448556), 1522448556);
        TZ_CHECK(from_local("UCT", 1522448556), 1522448556);
        TZ_CHECK(from_utc("UCT", 1504750093), 1504750093);
        TZ_CHECK(from_local("UCT", 1504750093), 1504750093);
        TZ_CHECK(from_utc("UCT", 1575180725), 1575180725);
        TZ_CHECK(from_local("UCT", 1575180725), 1575180725);
    } else {
        std::cerr << "NO TIMEZONE: UCT" << std::endl;
    }
    if (has_timezone("US/Alaska")) {
        TZ_CHECK(from_utc("US/Alaska", 1595976230), 1595947430);
        TZ_CHECK(from_local("US/Alaska", 1595947430), 1595976230);
        TZ_CHECK(from_utc("US/Alaska", 1487744633), 1487712233);
        TZ_CHECK(from_local("US/Alaska", 1487712233), 1487744633);
        TZ_CHECK(from_utc("US/Alaska", 1539989007), 1539960207);
        TZ_CHECK(from_local("US/Alaska", 1539960207), 1539989007);
        TZ_CHECK(from_utc("US/Alaska", 1549613363), 1549580963);
        TZ_CHECK(from_local("US/Alaska", 1549580963), 1549613363);
        TZ_CHECK(from_utc("US/Alaska", 1466567375), 1466538575);
        TZ_CHECK(from_local("US/Alaska", 1466538575), 1466567375);
    } else {
        std::cerr << "NO TIMEZONE: US/Alaska" << std::endl;
    }
    if (has_timezone("US/Aleutian")) {
        TZ_CHECK(from_utc("US/Aleutian", 1563561180), 1563528780);
        TZ_CHECK(from_local("US/Aleutian", 1563528780), 1563561180);
        TZ_CHECK(from_utc("US/Aleutian", 1480804920), 1480768920);
        TZ_CHECK(from_local("US/Aleutian", 1480768920), 1480804920);
        TZ_CHECK(from_utc("US/Aleutian", 1604056328), 1604023928);
        TZ_CHECK(from_local("US/Aleutian", 1604023928), 1604056328);
        TZ_CHECK(from_utc("US/Aleutian", 1565296315), 1565263915);
        TZ_CHECK(from_local("US/Aleutian", 1565263915), 1565296315);
        TZ_CHECK(from_utc("US/Aleutian", 1477675556), 1477643156);
        TZ_CHECK(from_local("US/Aleutian", 1477643156), 1477675556);
    } else {
        std::cerr << "NO TIMEZONE: US/Aleutian" << std::endl;
    }
    if (has_timezone("US/Arizona")) {
        TZ_CHECK(from_utc("US/Arizona", 1434720785), 1434695585);
        TZ_CHECK(from_local("US/Arizona", 1434695585), 1434720785);
        TZ_CHECK(from_utc("US/Arizona", 1553310154), 1553284954);
        TZ_CHECK(from_local("US/Arizona", 1553284954), 1553310154);
        TZ_CHECK(from_utc("US/Arizona", 1595024241), 1594999041);
        TZ_CHECK(from_local("US/Arizona", 1594999041), 1595024241);
        TZ_CHECK(from_utc("US/Arizona", 1482704047), 1482678847);
        TZ_CHECK(from_local("US/Arizona", 1482678847), 1482704047);
        TZ_CHECK(from_utc("US/Arizona", 1589771436), 1589746236);
        TZ_CHECK(from_local("US/Arizona", 1589746236), 1589771436);
    } else {
        std::cerr << "NO TIMEZONE: US/Arizona" << std::endl;
    }
    if (has_timezone("US/Central")) {
        TZ_CHECK(from_utc("US/Central", 1461840866), 1461822866);
        TZ_CHECK(from_local("US/Central", 1461822866), 1461840866);
        TZ_CHECK(from_utc("US/Central", 1474409017), 1474391017);
        TZ_CHECK(from_local("US/Central", 1474391017), 1474409017);
        TZ_CHECK(from_utc("US/Central", 1617730657), 1617712657);
        TZ_CHECK(from_local("US/Central", 1617712657), 1617730657);
        TZ_CHECK(from_utc("US/Central", 1619644181), 1619626181);
        TZ_CHECK(from_local("US/Central", 1619626181), 1619644181);
        TZ_CHECK(from_utc("US/Central", 1519178677), 1519157077);
        TZ_CHECK(from_local("US/Central", 1519157077), 1519178677);
    } else {
        std::cerr << "NO TIMEZONE: US/Central" << std::endl;
    }
    if (has_timezone("US/East-Indiana")) {
        TZ_CHECK(from_utc("US/East-Indiana", 1620175625), 1620161225);
        TZ_CHECK(from_local("US/East-Indiana", 1620161225), 1620175625);
        TZ_CHECK(from_utc("US/East-Indiana", 1618591211), 1618576811);
        TZ_CHECK(from_local("US/East-Indiana", 1618576811), 1618591211);
        TZ_CHECK(from_utc("US/East-Indiana", 1438609251), 1438594851);
        TZ_CHECK(from_local("US/East-Indiana", 1438594851), 1438609251);
        TZ_CHECK(from_utc("US/East-Indiana", 1421681490), 1421663490);
        TZ_CHECK(from_local("US/East-Indiana", 1421663490), 1421681490);
        TZ_CHECK(from_utc("US/East-Indiana", 1471984408), 1471970008);
        TZ_CHECK(from_local("US/East-Indiana", 1471970008), 1471984408);
    } else {
        std::cerr << "NO TIMEZONE: US/East-Indiana" << std::endl;
    }
    if (has_timezone("US/Eastern")) {
        TZ_CHECK(from_utc("US/Eastern", 1489719446), 1489705046);
        TZ_CHECK(from_local("US/Eastern", 1489705046), 1489719446);
        TZ_CHECK(from_utc("US/Eastern", 1411501880), 1411487480);
        TZ_CHECK(from_local("US/Eastern", 1411487480), 1411501880);
        TZ_CHECK(from_utc("US/Eastern", 1604784545), 1604766545);
        TZ_CHECK(from_local("US/Eastern", 1604766545), 1604784545);
        TZ_CHECK(from_utc("US/Eastern", 1524058550), 1524044150);
        TZ_CHECK(from_local("US/Eastern", 1524044150), 1524058550);
        TZ_CHECK(from_utc("US/Eastern", 1467907289), 1467892889);
        TZ_CHECK(from_local("US/Eastern", 1467892889), 1467907289);
    } else {
        std::cerr << "NO TIMEZONE: US/Eastern" << std::endl;
    }
    if (has_timezone("US/Hawaii")) {
        TZ_CHECK(from_utc("US/Hawaii", 1565993171), 1565957171);
        TZ_CHECK(from_local("US/Hawaii", 1565957171), 1565993171);
        TZ_CHECK(from_utc("US/Hawaii", 1487978608), 1487942608);
        TZ_CHECK(from_local("US/Hawaii", 1487942608), 1487978608);
        TZ_CHECK(from_utc("US/Hawaii", 1411516401), 1411480401);
        TZ_CHECK(from_local("US/Hawaii", 1411480401), 1411516401);
        TZ_CHECK(from_utc("US/Hawaii", 1505657183), 1505621183);
        TZ_CHECK(from_local("US/Hawaii", 1505621183), 1505657183);
        TZ_CHECK(from_utc("US/Hawaii", 1439083733), 1439047733);
        TZ_CHECK(from_local("US/Hawaii", 1439047733), 1439083733);
    } else {
        std::cerr << "NO TIMEZONE: US/Hawaii" << std::endl;
    }
    if (has_timezone("US/Indiana-Starke")) {
        TZ_CHECK(from_utc("US/Indiana-Starke", 1520201886), 1520180286);
        TZ_CHECK(from_local("US/Indiana-Starke", 1520180286), 1520201886);
        TZ_CHECK(from_utc("US/Indiana-Starke", 1517711361), 1517689761);
        TZ_CHECK(from_local("US/Indiana-Starke", 1517689761), 1517711361);
        TZ_CHECK(from_utc("US/Indiana-Starke", 1527379598), 1527361598);
        TZ_CHECK(from_local("US/Indiana-Starke", 1527361598), 1527379598);
        TZ_CHECK(from_utc("US/Indiana-Starke", 1537044781), 1537026781);
        TZ_CHECK(from_local("US/Indiana-Starke", 1537026781), 1537044781);
        TZ_CHECK(from_utc("US/Indiana-Starke", 1488475247), 1488453647);
        TZ_CHECK(from_local("US/Indiana-Starke", 1488453647), 1488475247);
    } else {
        std::cerr << "NO TIMEZONE: US/Indiana-Starke" << std::endl;
    }
    if (has_timezone("US/Michigan")) {
        TZ_CHECK(from_utc("US/Michigan", 1613200071), 1613182071);
        TZ_CHECK(from_local("US/Michigan", 1613182071), 1613200071);
        TZ_CHECK(from_utc("US/Michigan", 1501969286), 1501954886);
        TZ_CHECK(from_local("US/Michigan", 1501954886), 1501969286);
        TZ_CHECK(from_utc("US/Michigan", 1617428716), 1617414316);
        TZ_CHECK(from_local("US/Michigan", 1617414316), 1617428716);
        TZ_CHECK(from_utc("US/Michigan", 1521059069), 1521044669);
        TZ_CHECK(from_local("US/Michigan", 1521044669), 1521059069);
        TZ_CHECK(from_utc("US/Michigan", 1482383938), 1482365938);
        TZ_CHECK(from_local("US/Michigan", 1482365938), 1482383938);
    } else {
        std::cerr << "NO TIMEZONE: US/Michigan" << std::endl;
    }
    if (has_timezone("US/Mountain")) {
        TZ_CHECK(from_utc("US/Mountain", 1550905396), 1550880196);
        TZ_CHECK(from_local("US/Mountain", 1550880196), 1550905396);
        TZ_CHECK(from_utc("US/Mountain", 1518956090), 1518930890);
        TZ_CHECK(from_local("US/Mountain", 1518930890), 1518956090);
        TZ_CHECK(from_utc("US/Mountain", 1462156591), 1462134991);
        TZ_CHECK(from_local("US/Mountain", 1462134991), 1462156591);
        TZ_CHECK(from_utc("US/Mountain", 1556121966), 1556100366);
        TZ_CHECK(from_local("US/Mountain", 1556100366), 1556121966);
        TZ_CHECK(from_utc("US/Mountain", 1420523923), 1420498723);
        TZ_CHECK(from_local("US/Mountain", 1420498723), 1420523923);
    } else {
        std::cerr << "NO TIMEZONE: US/Mountain" << std::endl;
    }
    if (has_timezone("US/Pacific")) {
        TZ_CHECK(from_utc("US/Pacific", 1413273306), 1413248106);
        TZ_CHECK(from_local("US/Pacific", 1413248106), 1413273306);
        TZ_CHECK(from_utc("US/Pacific", 1510207035), 1510178235);
        TZ_CHECK(from_local("US/Pacific", 1510178235), 1510207035);
        TZ_CHECK(from_utc("US/Pacific", 1434015673), 1433990473);
        TZ_CHECK(from_local("US/Pacific", 1433990473), 1434015673);
        TZ_CHECK(from_utc("US/Pacific", 1600267912), 1600242712);
        TZ_CHECK(from_local("US/Pacific", 1600242712), 1600267912);
        TZ_CHECK(from_utc("US/Pacific", 1431807092), 1431781892);
        TZ_CHECK(from_local("US/Pacific", 1431781892), 1431807092);
    } else {
        std::cerr << "NO TIMEZONE: US/Pacific" << std::endl;
    }
    if (has_timezone("US/Samoa")) {
        TZ_CHECK(from_utc("US/Samoa", 1590769869), 1590730269);
        TZ_CHECK(from_local("US/Samoa", 1590730269), 1590769869);
        TZ_CHECK(from_utc("US/Samoa", 1513101416), 1513061816);
        TZ_CHECK(from_local("US/Samoa", 1513061816), 1513101416);
        TZ_CHECK(from_utc("US/Samoa", 1598296090), 1598256490);
        TZ_CHECK(from_local("US/Samoa", 1598256490), 1598296090);
        TZ_CHECK(from_utc("US/Samoa", 1414391180), 1414351580);
        TZ_CHECK(from_local("US/Samoa", 1414351580), 1414391180);
        TZ_CHECK(from_utc("US/Samoa", 1600671607), 1600632007);
        TZ_CHECK(from_local("US/Samoa", 1600632007), 1600671607);
    } else {
        std::cerr << "NO TIMEZONE: US/Samoa" << std::endl;
    }
    if (has_timezone("UTC")) {
        TZ_CHECK(from_utc("UTC", 1417803545), 1417803545);
        TZ_CHECK(from_local("UTC", 1417803545), 1417803545);
        TZ_CHECK(from_utc("UTC", 1578733479), 1578733479);
        TZ_CHECK(from_local("UTC", 1578733479), 1578733479);
        TZ_CHECK(from_utc("UTC", 1417405887), 1417405887);
        TZ_CHECK(from_local("UTC", 1417405887), 1417405887);
        TZ_CHECK(from_utc("UTC", 1584715120), 1584715120);
        TZ_CHECK(from_local("UTC", 1584715120), 1584715120);
        TZ_CHECK(from_utc("UTC", 1423460887), 1423460887);
        TZ_CHECK(from_local("UTC", 1423460887), 1423460887);
    } else {
        std::cerr << "NO TIMEZONE: UTC" << std::endl;
    }
    if (has_timezone("Universal")) {
        TZ_CHECK(from_utc("Universal", 1424236054), 1424236054);
        TZ_CHECK(from_local("Universal", 1424236054), 1424236054);
        TZ_CHECK(from_utc("Universal", 1463634737), 1463634737);
        TZ_CHECK(from_local("Universal", 1463634737), 1463634737);
        TZ_CHECK(from_utc("Universal", 1572856667), 1572856667);
        TZ_CHECK(from_local("Universal", 1572856667), 1572856667);
        TZ_CHECK(from_utc("Universal", 1470415690), 1470415690);
        TZ_CHECK(from_local("Universal", 1470415690), 1470415690);
        TZ_CHECK(from_utc("Universal", 1553917175), 1553917175);
        TZ_CHECK(from_local("Universal", 1553917175), 1553917175);
    } else {
        std::cerr << "NO TIMEZONE: Universal" << std::endl;
    }
    if (has_timezone("W-SU")) {
        TZ_CHECK(from_utc("W-SU", 1506029592), 1506040392);
        TZ_CHECK(from_local("W-SU", 1506040392), 1506029592);
        TZ_CHECK(from_utc("W-SU", 1464582275), 1464593075);
        TZ_CHECK(from_local("W-SU", 1464593075), 1464582275);
        TZ_CHECK(from_utc("W-SU", 1418761851), 1418772651);
        TZ_CHECK(from_local("W-SU", 1418772651), 1418761851);
        TZ_CHECK(from_utc("W-SU", 1543534506), 1543545306);
        TZ_CHECK(from_local("W-SU", 1543545306), 1543534506);
        TZ_CHECK(from_utc("W-SU", 1476472004), 1476482804);
        TZ_CHECK(from_local("W-SU", 1476482804), 1476472004);
    } else {
        std::cerr << "NO TIMEZONE: W-SU" << std::endl;
    }
    if (has_timezone("WET")) {
        TZ_CHECK(from_utc("WET", 1447702768), 1447702768);
        TZ_CHECK(from_local("WET", 1447702768), 1447702768);
        TZ_CHECK(from_utc("WET", 1443683075), 1443686675);
        TZ_CHECK(from_local("WET", 1443686675), 1443683075);
        TZ_CHECK(from_utc("WET", 1575235796), 1575235796);
        TZ_CHECK(from_local("WET", 1575235796), 1575235796);
        TZ_CHECK(from_utc("WET", 1562094359), 1562097959);
        TZ_CHECK(from_local("WET", 1562097959), 1562094359);
        TZ_CHECK(from_utc("WET", 1589486827), 1589490427);
        TZ_CHECK(from_local("WET", 1589490427), 1589486827);
    } else {
        std::cerr << "NO TIMEZONE: WET" << std::endl;
    }
    if (has_timezone("Zulu")) {
        TZ_CHECK(from_utc("Zulu", 1420319154), 1420319154);
        TZ_CHECK(from_local("Zulu", 1420319154), 1420319154);
        TZ_CHECK(from_utc("Zulu", 1410549143), 1410549143);
        TZ_CHECK(from_local("Zulu", 1410549143), 1410549143);
        TZ_CHECK(from_utc("Zulu", 1584187742), 1584187742);
        TZ_CHECK(from_local("Zulu", 1584187742), 1584187742);
        TZ_CHECK(from_utc("Zulu", 1585477403), 1585477403);
        TZ_CHECK(from_local("Zulu", 1585477403), 1585477403);
        TZ_CHECK(from_utc("Zulu", 1523609425), 1523609425);
        TZ_CHECK(from_local("Zulu", 1523609425), 1523609425);
    } else {
        std::cerr << "NO TIMEZONE: Zulu" << std::endl;
    }
}
