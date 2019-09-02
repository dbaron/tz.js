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
        {
            auto tz = get_timezone("Africa/Abidjan", 1583075365);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Abidjan", 1594990702);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Abidjan", 1508983092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Abidjan", 1462891210);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Abidjan", 1545380215);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Abidjan" << std::endl;
    }
    if (has_timezone("Africa/Accra")) {
        {
            auto tz = get_timezone("Africa/Accra", 1627624942);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Accra", 1464562169);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Accra", 1598262009);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Accra", 1586670535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Accra", 1442798307);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Accra" << std::endl;
    }
    if (has_timezone("Africa/Addis_Ababa")) {
        {
            auto tz = get_timezone("Africa/Addis_Ababa", 1480268840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Addis_Ababa", 1537573567);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Addis_Ababa", 1443570565);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Addis_Ababa", 1467735003);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Addis_Ababa", 1611895975);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Addis_Ababa" << std::endl;
    }
    if (has_timezone("Africa/Algiers")) {
        {
            auto tz = get_timezone("Africa/Algiers", 1485538398);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Algiers", 1615404565);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Algiers", 1545589616);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Algiers", 1432142167);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Algiers", 1518390081);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Algiers" << std::endl;
    }
    if (has_timezone("Africa/Asmara")) {
        {
            auto tz = get_timezone("Africa/Asmara", 1556522624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmara", 1525112373);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmara", 1608721568);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmara", 1560547526);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmara", 1518281876);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Asmara" << std::endl;
    }
    if (has_timezone("Africa/Asmera")) {
        {
            auto tz = get_timezone("Africa/Asmera", 1568472398);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmera", 1496804125);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmera", 1416142157);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmera", 1536795042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Asmera", 1624833950);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Asmera" << std::endl;
    }
    if (has_timezone("Africa/Bamako")) {
        {
            auto tz = get_timezone("Africa/Bamako", 1615407547);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bamako", 1525514546);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bamako", 1452975435);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bamako", 1529330039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bamako", 1446527255);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bamako" << std::endl;
    }
    if (has_timezone("Africa/Bangui")) {
        {
            auto tz = get_timezone("Africa/Bangui", 1472573714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Bangui", 1427226452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Bangui", 1571828630);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Bangui", 1495225553);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Bangui", 1515205526);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bangui" << std::endl;
    }
    if (has_timezone("Africa/Banjul")) {
        {
            auto tz = get_timezone("Africa/Banjul", 1543581096);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Banjul", 1509376541);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Banjul", 1444481167);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Banjul", 1480671414);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Banjul", 1503519474);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Banjul" << std::endl;
    }
    if (has_timezone("Africa/Bissau")) {
        {
            auto tz = get_timezone("Africa/Bissau", 1466151491);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bissau", 1523619981);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bissau", 1552990506);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bissau", 1554662575);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Bissau", 1447592128);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bissau" << std::endl;
    }
    if (has_timezone("Africa/Blantyre")) {
        {
            auto tz = get_timezone("Africa/Blantyre", 1485075831);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Blantyre", 1611309758);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Blantyre", 1518249652);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Blantyre", 1556735033);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Blantyre", 1502054095);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Blantyre" << std::endl;
    }
    if (has_timezone("Africa/Brazzaville")) {
        {
            auto tz = get_timezone("Africa/Brazzaville", 1584052330);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Brazzaville", 1545579265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Brazzaville", 1596384716);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Brazzaville", 1619140116);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Brazzaville", 1583719332);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Brazzaville" << std::endl;
    }
    if (has_timezone("Africa/Bujumbura")) {
        {
            auto tz = get_timezone("Africa/Bujumbura", 1451535346);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Bujumbura", 1628140075);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Bujumbura", 1621050445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Bujumbura", 1425539368);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Bujumbura", 1485009093);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Bujumbura" << std::endl;
    }
    if (has_timezone("Africa/Cairo")) {
        {
            auto tz = get_timezone("Africa/Cairo", 1477954195);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Cairo", 1540062196);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Cairo", 1562395217);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Cairo", 1425582191);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Cairo", 1599892142);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Cairo" << std::endl;
    }
    if (has_timezone("Africa/Casablanca")) {
        {
            auto tz = get_timezone("Africa/Casablanca", 1518092757);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Casablanca", 1489964143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Casablanca", 1511228061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Casablanca", 1416319665);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Casablanca", 1506445880);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Casablanca" << std::endl;
    }
    if (has_timezone("Africa/Ceuta")) {
        {
            auto tz = get_timezone("Africa/Ceuta", 1557006741);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Ceuta", 1549410616);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ceuta", 1597153732);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Ceuta", 1454010095);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ceuta", 1560875949);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ceuta" << std::endl;
    }
    if (has_timezone("Africa/Conakry")) {
        {
            auto tz = get_timezone("Africa/Conakry", 1469858845);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Conakry", 1503020482);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Conakry", 1612089704);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Conakry", 1441218334);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Conakry", 1535415426);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Conakry" << std::endl;
    }
    if (has_timezone("Africa/Dakar")) {
        {
            auto tz = get_timezone("Africa/Dakar", 1543829132);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Dakar", 1477757623);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Dakar", 1456052367);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Dakar", 1530425790);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Dakar", 1560156930);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Dakar" << std::endl;
    }
    if (has_timezone("Africa/Dar_es_Salaam")) {
        {
            auto tz = get_timezone("Africa/Dar_es_Salaam", 1441895667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Dar_es_Salaam", 1528161000);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Dar_es_Salaam", 1420405342);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Dar_es_Salaam", 1467633544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Dar_es_Salaam", 1412538378);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Dar_es_Salaam" << std::endl;
    }
    if (has_timezone("Africa/Djibouti")) {
        {
            auto tz = get_timezone("Africa/Djibouti", 1435851520);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Djibouti", 1515855817);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Djibouti", 1529082379);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Djibouti", 1556937723);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Djibouti", 1617839841);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Djibouti" << std::endl;
    }
    if (has_timezone("Africa/Douala")) {
        {
            auto tz = get_timezone("Africa/Douala", 1591891337);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Douala", 1535428463);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Douala", 1609734767);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Douala", 1448063569);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Douala", 1447701528);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Douala" << std::endl;
    }
    if (has_timezone("Africa/El_Aaiun")) {
        {
            auto tz = get_timezone("Africa/El_Aaiun", 1585436782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/El_Aaiun", 1424239104);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/El_Aaiun", 1442862295);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/El_Aaiun", 1470854518);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/El_Aaiun", 1464869040);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/El_Aaiun" << std::endl;
    }
    if (has_timezone("Africa/Freetown")) {
        {
            auto tz = get_timezone("Africa/Freetown", 1496276531);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Freetown", 1472380569);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Freetown", 1460059350);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Freetown", 1463355378);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Freetown", 1556795579);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Freetown" << std::endl;
    }
    if (has_timezone("Africa/Gaborone")) {
        {
            auto tz = get_timezone("Africa/Gaborone", 1489780531);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Gaborone", 1549430363);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Gaborone", 1537421799);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Gaborone", 1484487954);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Gaborone", 1555090077);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Gaborone" << std::endl;
    }
    if (has_timezone("Africa/Harare")) {
        {
            auto tz = get_timezone("Africa/Harare", 1575802106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Harare", 1571319667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Harare", 1518073423);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Harare", 1630017080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Harare", 1606337256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Harare" << std::endl;
    }
    if (has_timezone("Africa/Johannesburg")) {
        {
            auto tz = get_timezone("Africa/Johannesburg", 1629176151);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Johannesburg", 1438740537);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Johannesburg", 1589604261);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Johannesburg", 1496008076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Johannesburg", 1543566132);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Johannesburg" << std::endl;
    }
    if (has_timezone("Africa/Juba")) {
        {
            auto tz = get_timezone("Africa/Juba", 1570068859);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Juba", 1605115320);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Juba", 1533394994);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Juba", 1494535648);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Juba", 1565941453);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Juba" << std::endl;
    }
    if (has_timezone("Africa/Kampala")) {
        {
            auto tz = get_timezone("Africa/Kampala", 1423033731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Kampala", 1451145221);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Kampala", 1482706736);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Kampala", 1564296289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Kampala", 1629223700);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kampala" << std::endl;
    }
    if (has_timezone("Africa/Khartoum")) {
        {
            auto tz = get_timezone("Africa/Khartoum", 1592066256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Khartoum", 1507598735);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Khartoum", 1626143141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Khartoum", 1562720422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Khartoum", 1521286215);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Khartoum" << std::endl;
    }
    if (has_timezone("Africa/Kigali")) {
        {
            auto tz = get_timezone("Africa/Kigali", 1496148248);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Kigali", 1562281449);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Kigali", 1481497850);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Kigali", 1431285893);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Kigali", 1428478292);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kigali" << std::endl;
    }
    if (has_timezone("Africa/Kinshasa")) {
        {
            auto tz = get_timezone("Africa/Kinshasa", 1563882767);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Kinshasa", 1410151780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Kinshasa", 1462466189);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Kinshasa", 1552049407);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Kinshasa", 1527147720);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Kinshasa" << std::endl;
    }
    if (has_timezone("Africa/Lagos")) {
        {
            auto tz = get_timezone("Africa/Lagos", 1471362229);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Lagos", 1454858080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Lagos", 1594717476);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Lagos", 1522106520);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Lagos", 1556644684);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lagos" << std::endl;
    }
    if (has_timezone("Africa/Libreville")) {
        {
            auto tz = get_timezone("Africa/Libreville", 1445818371);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Libreville", 1483203031);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Libreville", 1569201256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Libreville", 1480016157);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Libreville", 1577682885);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Libreville" << std::endl;
    }
    if (has_timezone("Africa/Lome")) {
        {
            auto tz = get_timezone("Africa/Lome", 1508059375);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Lome", 1470312147);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Lome", 1428922552);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Lome", 1616306909);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Lome", 1437484321);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lome" << std::endl;
    }
    if (has_timezone("Africa/Luanda")) {
        {
            auto tz = get_timezone("Africa/Luanda", 1433956028);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Luanda", 1561244256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Luanda", 1417396079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Luanda", 1540669174);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Luanda", 1425477289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Luanda" << std::endl;
    }
    if (has_timezone("Africa/Lubumbashi")) {
        {
            auto tz = get_timezone("Africa/Lubumbashi", 1433409393);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lubumbashi", 1624493599);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lubumbashi", 1579637055);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lubumbashi", 1612188438);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lubumbashi", 1444167993);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lubumbashi" << std::endl;
    }
    if (has_timezone("Africa/Lusaka")) {
        {
            auto tz = get_timezone("Africa/Lusaka", 1493206790);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lusaka", 1554137599);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lusaka", 1515469176);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lusaka", 1552202481);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Lusaka", 1559637176);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Lusaka" << std::endl;
    }
    if (has_timezone("Africa/Malabo")) {
        {
            auto tz = get_timezone("Africa/Malabo", 1465618787);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Malabo", 1424713939);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Malabo", 1530166555);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Malabo", 1436608154);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Malabo", 1618251061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Malabo" << std::endl;
    }
    if (has_timezone("Africa/Maputo")) {
        {
            auto tz = get_timezone("Africa/Maputo", 1564516166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maputo", 1581774068);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maputo", 1542170347);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maputo", 1570361551);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maputo", 1514691160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Maputo" << std::endl;
    }
    if (has_timezone("Africa/Maseru")) {
        {
            auto tz = get_timezone("Africa/Maseru", 1569294428);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maseru", 1487862499);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maseru", 1433849037);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maseru", 1479809168);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Maseru", 1421812372);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Maseru" << std::endl;
    }
    if (has_timezone("Africa/Mbabane")) {
        {
            auto tz = get_timezone("Africa/Mbabane", 1612978141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Mbabane", 1608980489);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Mbabane", 1582515612);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Mbabane", 1496701399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Mbabane", 1459954042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Mbabane" << std::endl;
    }
    if (has_timezone("Africa/Mogadishu")) {
        {
            auto tz = get_timezone("Africa/Mogadishu", 1498208936);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Mogadishu", 1430245502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Mogadishu", 1593848584);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Mogadishu", 1562911511);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Mogadishu", 1459203212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Mogadishu" << std::endl;
    }
    if (has_timezone("Africa/Monrovia")) {
        {
            auto tz = get_timezone("Africa/Monrovia", 1600997566);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Monrovia", 1518805423);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Monrovia", 1532740103);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Monrovia", 1421875831);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Monrovia", 1429861756);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Monrovia" << std::endl;
    }
    if (has_timezone("Africa/Nairobi")) {
        {
            auto tz = get_timezone("Africa/Nairobi", 1515116755);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Nairobi", 1617596450);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Nairobi", 1599318374);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Nairobi", 1556749686);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Africa/Nairobi", 1527770109);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Nairobi" << std::endl;
    }
    if (has_timezone("Africa/Ndjamena")) {
        {
            auto tz = get_timezone("Africa/Ndjamena", 1528865197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ndjamena", 1468423441);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ndjamena", 1546437538);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ndjamena", 1594861562);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Ndjamena", 1561623922);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ndjamena" << std::endl;
    }
    if (has_timezone("Africa/Niamey")) {
        {
            auto tz = get_timezone("Africa/Niamey", 1419463222);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Niamey", 1582809604);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Niamey", 1506122431);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Niamey", 1418875572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Niamey", 1529924927);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Niamey" << std::endl;
    }
    if (has_timezone("Africa/Nouakchott")) {
        {
            auto tz = get_timezone("Africa/Nouakchott", 1447978001);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Nouakchott", 1606981232);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Nouakchott", 1477368864);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Nouakchott", 1572016283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Nouakchott", 1508919162);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Nouakchott" << std::endl;
    }
    if (has_timezone("Africa/Ouagadougou")) {
        {
            auto tz = get_timezone("Africa/Ouagadougou", 1577564709);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Ouagadougou", 1544506718);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Ouagadougou", 1491490051);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Ouagadougou", 1521843376);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Ouagadougou", 1488752809);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Ouagadougou" << std::endl;
    }
    if (has_timezone("Africa/Porto-Novo")) {
        {
            auto tz = get_timezone("Africa/Porto-Novo", 1449015404);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Porto-Novo", 1583037264);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Porto-Novo", 1596968533);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Porto-Novo", 1455282910);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Porto-Novo", 1420876180);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Porto-Novo" << std::endl;
    }
    if (has_timezone("Africa/Sao_Tome")) {
        {
            auto tz = get_timezone("Africa/Sao_Tome", 1459878256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Sao_Tome", 1495434872);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Sao_Tome", 1486421669);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Sao_Tome", 1467608715);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Sao_Tome", 1585145390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Sao_Tome" << std::endl;
    }
    if (has_timezone("Africa/Timbuktu")) {
        {
            auto tz = get_timezone("Africa/Timbuktu", 1484910246);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Timbuktu", 1526421233);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Timbuktu", 1496524662);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Timbuktu", 1616813088);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Africa/Timbuktu", 1596614568);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Timbuktu" << std::endl;
    }
    if (has_timezone("Africa/Tripoli")) {
        {
            auto tz = get_timezone("Africa/Tripoli", 1557264297);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Tripoli", 1411984494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Tripoli", 1464222359);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Tripoli", 1522074756);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Tripoli", 1512299353);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Tripoli" << std::endl;
    }
    if (has_timezone("Africa/Tunis")) {
        {
            auto tz = get_timezone("Africa/Tunis", 1481223414);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Tunis", 1426816287);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Tunis", 1544603852);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Tunis", 1613626560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Tunis", 1410494299);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Tunis" << std::endl;
    }
    if (has_timezone("Africa/Windhoek")) {
        {
            auto tz = get_timezone("Africa/Windhoek", 1557811170);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Windhoek", 1613969906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Windhoek", 1460740322);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Africa/Windhoek", 1553808831);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Africa/Windhoek", 1492425940);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Africa/Windhoek" << std::endl;
    }
    if (has_timezone("America/Adak")) {
        {
            auto tz = get_timezone("America/Adak", 1577531111);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("America/Adak", 1526643996);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Adak", 1577785124);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("America/Adak", 1573075973);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("America/Adak", 1527802945);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Adak" << std::endl;
    }
    if (has_timezone("America/Anchorage")) {
        {
            auto tz = get_timezone("America/Anchorage", 1574966366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Anchorage", 1625897041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Anchorage", 1501858096);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Anchorage", 1416589845);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Anchorage", 1563149079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Anchorage" << std::endl;
    }
    if (has_timezone("America/Anguilla")) {
        {
            auto tz = get_timezone("America/Anguilla", 1612815629);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Anguilla", 1481862437);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Anguilla", 1591411351);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Anguilla", 1623564334);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Anguilla", 1599865869);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Anguilla" << std::endl;
    }
    if (has_timezone("America/Antigua")) {
        {
            auto tz = get_timezone("America/Antigua", 1529673603);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Antigua", 1419864409);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Antigua", 1467751265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Antigua", 1437483399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Antigua", 1425986864);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Antigua" << std::endl;
    }
    if (has_timezone("America/Araguaina")) {
        {
            auto tz = get_timezone("America/Araguaina", 1616328869);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Araguaina", 1584556949);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Araguaina", 1449244063);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Araguaina", 1459376416);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Araguaina", 1462167086);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Araguaina" << std::endl;
    }
    if (has_timezone("America/Argentina/Buenos_Aires")) {
        {
            auto tz = get_timezone("America/Argentina/Buenos_Aires", 1478554292);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Buenos_Aires", 1451033926);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Buenos_Aires", 1568975023);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Buenos_Aires", 1477385667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Buenos_Aires", 1555706578);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Buenos_Aires" << std::endl;
    }
    if (has_timezone("America/Argentina/Catamarca")) {
        {
            auto tz = get_timezone("America/Argentina/Catamarca", 1421313532);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Catamarca", 1555334060);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Catamarca", 1618376877);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Catamarca", 1506555813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Catamarca", 1556198899);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Catamarca" << std::endl;
    }
    if (has_timezone("America/Argentina/ComodRivadavia")) {
        {
            auto tz = get_timezone("America/Argentina/ComodRivadavia", 1484172040);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/ComodRivadavia", 1532574221);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/ComodRivadavia", 1494803880);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/ComodRivadavia", 1485119251);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/ComodRivadavia", 1582857679);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/ComodRivadavia" << std::endl;
    }
    if (has_timezone("America/Argentina/Cordoba")) {
        {
            auto tz = get_timezone("America/Argentina/Cordoba", 1432598343);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Cordoba", 1494014079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Cordoba", 1580522310);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Cordoba", 1551712774);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Cordoba", 1588187694);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Cordoba" << std::endl;
    }
    if (has_timezone("America/Argentina/Jujuy")) {
        {
            auto tz = get_timezone("America/Argentina/Jujuy", 1562699887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Jujuy", 1480677598);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Jujuy", 1493371019);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Jujuy", 1419844910);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Jujuy", 1623943713);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Jujuy" << std::endl;
    }
    if (has_timezone("America/Argentina/La_Rioja")) {
        {
            auto tz = get_timezone("America/Argentina/La_Rioja", 1452507482);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/La_Rioja", 1555130197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/La_Rioja", 1624238946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/La_Rioja", 1548401442);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/La_Rioja", 1434434792);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/La_Rioja" << std::endl;
    }
    if (has_timezone("America/Argentina/Mendoza")) {
        {
            auto tz = get_timezone("America/Argentina/Mendoza", 1498308992);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Mendoza", 1580254488);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Mendoza", 1423162117);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Mendoza", 1487067731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Mendoza", 1557153538);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Mendoza" << std::endl;
    }
    if (has_timezone("America/Argentina/Rio_Gallegos")) {
        {
            auto tz = get_timezone("America/Argentina/Rio_Gallegos", 1443927667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Rio_Gallegos", 1438628767);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Rio_Gallegos", 1573948270);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Rio_Gallegos", 1612703261);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Rio_Gallegos", 1431147336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Rio_Gallegos" << std::endl;
    }
    if (has_timezone("America/Argentina/Salta")) {
        {
            auto tz = get_timezone("America/Argentina/Salta", 1597499147);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Salta", 1583711660);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Salta", 1424955257);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Salta", 1520328222);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Salta", 1487998869);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Salta" << std::endl;
    }
    if (has_timezone("America/Argentina/San_Juan")) {
        {
            auto tz = get_timezone("America/Argentina/San_Juan", 1574229602);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Juan", 1567785452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Juan", 1566790877);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Juan", 1617658228);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Juan", 1596033510);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/San_Juan" << std::endl;
    }
    if (has_timezone("America/Argentina/San_Luis")) {
        {
            auto tz = get_timezone("America/Argentina/San_Luis", 1615982709);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Luis", 1492937106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Luis", 1579706201);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Luis", 1602291054);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/San_Luis", 1629769207);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/San_Luis" << std::endl;
    }
    if (has_timezone("America/Argentina/Tucuman")) {
        {
            auto tz = get_timezone("America/Argentina/Tucuman", 1452563793);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Tucuman", 1448671716);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Tucuman", 1439571144);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Tucuman", 1565380303);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Tucuman", 1512413339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Tucuman" << std::endl;
    }
    if (has_timezone("America/Argentina/Ushuaia")) {
        {
            auto tz = get_timezone("America/Argentina/Ushuaia", 1427946624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Ushuaia", 1612838729);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Ushuaia", 1488865661);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Ushuaia", 1415954691);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Argentina/Ushuaia", 1561714047);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Argentina/Ushuaia" << std::endl;
    }
    if (has_timezone("America/Aruba")) {
        {
            auto tz = get_timezone("America/Aruba", 1608954841);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Aruba", 1431220697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Aruba", 1585554492);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Aruba", 1471054488);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Aruba", 1608287045);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Aruba" << std::endl;
    }
    if (has_timezone("America/Asuncion")) {
        {
            auto tz = get_timezone("America/Asuncion", 1524749455);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Asuncion", 1623395970);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Asuncion", 1449819887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Asuncion", 1457132390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Asuncion", 1494243338);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Asuncion" << std::endl;
    }
    if (has_timezone("America/Atikokan")) {
        {
            auto tz = get_timezone("America/Atikokan", 1553577240);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Atikokan", 1575095418);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Atikokan", 1607361989);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Atikokan", 1607498994);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Atikokan", 1560098710);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Atikokan" << std::endl;
    }
    if (has_timezone("America/Atka")) {
        {
            auto tz = get_timezone("America/Atka", 1526377654);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Atka", 1438393938);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Atka", 1441173255);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Atka", 1596688082);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Atka", 1531746544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Atka" << std::endl;
    }
    if (has_timezone("America/Bahia")) {
        {
            auto tz = get_timezone("America/Bahia", 1499898460);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Bahia", 1468825979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Bahia", 1486913987);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Bahia", 1478120217);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Bahia", 1611641581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Bahia" << std::endl;
    }
    if (has_timezone("America/Bahia_Banderas")) {
        {
            auto tz = get_timezone("America/Bahia_Banderas", 1437692887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bahia_Banderas", 1471438673);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bahia_Banderas", 1489164750);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Bahia_Banderas", 1593263914);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bahia_Banderas", 1463948893);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Bahia_Banderas" << std::endl;
    }
    if (has_timezone("America/Barbados")) {
        {
            auto tz = get_timezone("America/Barbados", 1482341367);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Barbados", 1530451406);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Barbados", 1619960225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Barbados", 1485563537);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Barbados", 1564010111);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Barbados" << std::endl;
    }
    if (has_timezone("America/Belem")) {
        {
            auto tz = get_timezone("America/Belem", 1432562665);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Belem", 1514917521);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Belem", 1546257348);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Belem", 1522208307);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Belem", 1622735379);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Belem" << std::endl;
    }
    if (has_timezone("America/Belize")) {
        {
            auto tz = get_timezone("America/Belize", 1448085199);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Belize", 1533186401);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Belize", 1539531552);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Belize", 1427035398);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Belize", 1507635798);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Belize" << std::endl;
    }
    if (has_timezone("America/Blanc-Sablon")) {
        {
            auto tz = get_timezone("America/Blanc-Sablon", 1594544189);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Blanc-Sablon", 1425474727);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Blanc-Sablon", 1578753502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Blanc-Sablon", 1473490942);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Blanc-Sablon", 1542465497);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Blanc-Sablon" << std::endl;
    }
    if (has_timezone("America/Boa_Vista")) {
        {
            auto tz = get_timezone("America/Boa_Vista", 1415818327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Boa_Vista", 1463235433);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Boa_Vista", 1501912490);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Boa_Vista", 1499682574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Boa_Vista", 1575915604);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Boa_Vista" << std::endl;
    }
    if (has_timezone("America/Bogota")) {
        {
            auto tz = get_timezone("America/Bogota", 1558457631);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bogota", 1468611797);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bogota", 1472210782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bogota", 1581239326);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Bogota", 1615907874);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Bogota" << std::endl;
    }
    if (has_timezone("America/Boise")) {
        {
            auto tz = get_timezone("America/Boise", 1542328844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Boise", 1540370735);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Boise", 1453244288);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Boise", 1551677399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Boise", 1562491765);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Boise" << std::endl;
    }
    if (has_timezone("America/Buenos_Aires")) {
        {
            auto tz = get_timezone("America/Buenos_Aires", 1498697204);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Buenos_Aires", 1602934663);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Buenos_Aires", 1486307342);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Buenos_Aires", 1479333018);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Buenos_Aires", 1534692564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Buenos_Aires" << std::endl;
    }
    if (has_timezone("America/Cambridge_Bay")) {
        {
            auto tz = get_timezone("America/Cambridge_Bay", 1413403888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Cambridge_Bay", 1561701066);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Cambridge_Bay", 1413863411);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Cambridge_Bay", 1448629291);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Cambridge_Bay", 1612415395);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cambridge_Bay" << std::endl;
    }
    if (has_timezone("America/Campo_Grande")) {
        {
            auto tz = get_timezone("America/Campo_Grande", 1629049820);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Campo_Grande", 1428863812);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Campo_Grande", 1517106447);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Campo_Grande", 1422463209);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Campo_Grande", 1485671881);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Campo_Grande" << std::endl;
    }
    if (has_timezone("America/Cancun")) {
        {
            auto tz = get_timezone("America/Cancun", 1589232265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cancun", 1420430275);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Cancun", 1593221135);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cancun", 1494621440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cancun", 1526744632);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cancun" << std::endl;
    }
    if (has_timezone("America/Caracas")) {
        {
            auto tz = get_timezone("America/Caracas", 1460413600);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -16200);
        }
        {
            auto tz = get_timezone("America/Caracas", 1511198149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Caracas", 1515082801);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Caracas", 1505958819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Caracas", 1448238196);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -16200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Caracas" << std::endl;
    }
    if (has_timezone("America/Catamarca")) {
        {
            auto tz = get_timezone("America/Catamarca", 1586403944);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Catamarca", 1541037800);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Catamarca", 1426904716);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Catamarca", 1457532962);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Catamarca", 1609753122);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Catamarca" << std::endl;
    }
    if (has_timezone("America/Cayenne")) {
        {
            auto tz = get_timezone("America/Cayenne", 1587117060);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cayenne", 1483588399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cayenne", 1534920283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cayenne", 1494126948);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cayenne", 1549171681);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cayenne" << std::endl;
    }
    if (has_timezone("America/Cayman")) {
        {
            auto tz = get_timezone("America/Cayman", 1479139010);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cayman", 1526024408);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cayman", 1425992803);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cayman", 1512613106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Cayman", 1489637099);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cayman" << std::endl;
    }
    if (has_timezone("America/Chicago")) {
        {
            auto tz = get_timezone("America/Chicago", 1485723627);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Chicago", 1563455184);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Chicago", 1572415475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Chicago", 1417430108);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Chicago", 1582456563);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Chicago" << std::endl;
    }
    if (has_timezone("America/Chihuahua")) {
        {
            auto tz = get_timezone("America/Chihuahua", 1461174991);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Chihuahua", 1546619661);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Chihuahua", 1556868444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Chihuahua", 1488855109);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Chihuahua", 1538630009);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Chihuahua" << std::endl;
    }
    if (has_timezone("America/Coral_Harbour")) {
        {
            auto tz = get_timezone("America/Coral_Harbour", 1576019474);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Coral_Harbour", 1466375312);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Coral_Harbour", 1462317373);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Coral_Harbour", 1615339540);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Coral_Harbour", 1597658605);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Coral_Harbour" << std::endl;
    }
    if (has_timezone("America/Cordoba")) {
        {
            auto tz = get_timezone("America/Cordoba", 1519557213);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cordoba", 1620249665);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cordoba", 1607271422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cordoba", 1458710026);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cordoba", 1415536475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cordoba" << std::endl;
    }
    if (has_timezone("America/Costa_Rica")) {
        {
            auto tz = get_timezone("America/Costa_Rica", 1499615557);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Costa_Rica", 1428088739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Costa_Rica", 1456089630);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Costa_Rica", 1592021013);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Costa_Rica", 1472266261);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Costa_Rica" << std::endl;
    }
    if (has_timezone("America/Creston")) {
        {
            auto tz = get_timezone("America/Creston", 1589114511);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Creston", 1613567810);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Creston", 1629704037);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Creston", 1505367285);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Creston", 1565982434);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Creston" << std::endl;
    }
    if (has_timezone("America/Cuiaba")) {
        {
            auto tz = get_timezone("America/Cuiaba", 1498227163);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Cuiaba", 1504503639);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Cuiaba", 1514120111);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Cuiaba", 1623973050);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Cuiaba", 1529258379);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Cuiaba" << std::endl;
    }
    if (has_timezone("America/Curacao")) {
        {
            auto tz = get_timezone("America/Curacao", 1417630815);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Curacao", 1458375675);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Curacao", 1597175020);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Curacao", 1541417907);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Curacao", 1573026076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Curacao" << std::endl;
    }
    if (has_timezone("America/Danmarkshavn")) {
        {
            auto tz = get_timezone("America/Danmarkshavn", 1516166050);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Danmarkshavn", 1563020641);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Danmarkshavn", 1520076965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Danmarkshavn", 1515098567);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Danmarkshavn", 1577671208);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Danmarkshavn" << std::endl;
    }
    if (has_timezone("America/Dawson")) {
        {
            auto tz = get_timezone("America/Dawson", 1627975221);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson", 1597879664);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson", 1608466193);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Dawson", 1617854428);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson", 1474441840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Dawson" << std::endl;
    }
    if (has_timezone("America/Dawson_Creek")) {
        {
            auto tz = get_timezone("America/Dawson_Creek", 1489917439);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson_Creek", 1512875887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson_Creek", 1544895972);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson_Creek", 1477417850);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Dawson_Creek", 1596766288);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Dawson_Creek" << std::endl;
    }
    if (has_timezone("America/Denver")) {
        {
            auto tz = get_timezone("America/Denver", 1618493101);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Denver", 1517613007);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Denver", 1522924695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Denver", 1498296092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Denver", 1432797262);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Denver" << std::endl;
    }
    if (has_timezone("America/Detroit")) {
        {
            auto tz = get_timezone("America/Detroit", 1540392404);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Detroit", 1598458225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Detroit", 1508396513);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Detroit", 1410474936);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Detroit", 1574473929);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Detroit" << std::endl;
    }
    if (has_timezone("America/Dominica")) {
        {
            auto tz = get_timezone("America/Dominica", 1480187690);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Dominica", 1415628111);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Dominica", 1566712171);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Dominica", 1491549364);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Dominica", 1594011975);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Dominica" << std::endl;
    }
    if (has_timezone("America/Edmonton")) {
        {
            auto tz = get_timezone("America/Edmonton", 1580768983);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Edmonton", 1514651346);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Edmonton", 1610810793);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Edmonton", 1474468542);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Edmonton", 1629621039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Edmonton" << std::endl;
    }
    if (has_timezone("America/Eirunepe")) {
        {
            auto tz = get_timezone("America/Eirunepe", 1421235739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Eirunepe", 1525916522);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Eirunepe", 1602724714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Eirunepe", 1541243474);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Eirunepe", 1431074180);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Eirunepe" << std::endl;
    }
    if (has_timezone("America/El_Salvador")) {
        {
            auto tz = get_timezone("America/El_Salvador", 1458933425);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/El_Salvador", 1610992089);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/El_Salvador", 1491537830);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/El_Salvador", 1552718248);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/El_Salvador", 1541042486);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/El_Salvador" << std::endl;
    }
    if (has_timezone("America/Ensenada")) {
        {
            auto tz = get_timezone("America/Ensenada", 1545652564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Ensenada", 1492276137);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ensenada", 1441212715);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ensenada", 1508245486);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ensenada", 1522799686);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Ensenada" << std::endl;
    }
    if (has_timezone("America/Fort_Nelson")) {
        {
            auto tz = get_timezone("America/Fort_Nelson", 1542745756);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Fort_Nelson", 1468385430);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Fort_Nelson", 1581281007);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Fort_Nelson", 1529381473);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Fort_Nelson", 1578065819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Fort_Nelson" << std::endl;
    }
    if (has_timezone("America/Fort_Wayne")) {
        {
            auto tz = get_timezone("America/Fort_Wayne", 1602176232);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Fort_Wayne", 1623687407);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Fort_Wayne", 1545685705);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Fort_Wayne", 1511409033);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Fort_Wayne", 1449940918);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Fort_Wayne" << std::endl;
    }
    if (has_timezone("America/Fortaleza")) {
        {
            auto tz = get_timezone("America/Fortaleza", 1455825046);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Fortaleza", 1580546232);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Fortaleza", 1518911393);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Fortaleza", 1595545296);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Fortaleza", 1474182225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Fortaleza" << std::endl;
    }
    if (has_timezone("America/Glace_Bay")) {
        {
            auto tz = get_timezone("America/Glace_Bay", 1429348211);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Glace_Bay", 1450012591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Glace_Bay", 1488265720);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Glace_Bay", 1569951707);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Glace_Bay", 1503463218);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Glace_Bay" << std::endl;
    }
    if (has_timezone("America/Godthab")) {
        {
            auto tz = get_timezone("America/Godthab", 1454186266);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Godthab", 1585824968);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Godthab", 1579511205);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Godthab", 1551310627);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Godthab", 1497270106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Godthab" << std::endl;
    }
    if (has_timezone("America/Goose_Bay")) {
        {
            auto tz = get_timezone("America/Goose_Bay", 1616755624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Goose_Bay", 1488865602);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Goose_Bay", 1551989212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Goose_Bay", 1571461386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Goose_Bay", 1512432380);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Goose_Bay" << std::endl;
    }
    if (has_timezone("America/Grand_Turk")) {
        {
            auto tz = get_timezone("America/Grand_Turk", 1604182155);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grand_Turk", 1629102784);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grand_Turk", 1606472311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Grand_Turk", 1527440769);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grand_Turk", 1588126058);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Grand_Turk" << std::endl;
    }
    if (has_timezone("America/Grenada")) {
        {
            auto tz = get_timezone("America/Grenada", 1485031025);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grenada", 1410236011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grenada", 1422926300);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grenada", 1555652719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Grenada", 1522024277);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Grenada" << std::endl;
    }
    if (has_timezone("America/Guadeloupe")) {
        {
            auto tz = get_timezone("America/Guadeloupe", 1566893338);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guadeloupe", 1543332616);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guadeloupe", 1576448152);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guadeloupe", 1467683919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guadeloupe", 1501550962);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Guadeloupe" << std::endl;
    }
    if (has_timezone("America/Guatemala")) {
        {
            auto tz = get_timezone("America/Guatemala", 1456780847);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Guatemala", 1511716173);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Guatemala", 1423019041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Guatemala", 1579507668);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Guatemala", 1460838906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Guatemala" << std::endl;
    }
    if (has_timezone("America/Guayaquil")) {
        {
            auto tz = get_timezone("America/Guayaquil", 1419226034);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Guayaquil", 1447997843);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Guayaquil", 1502880187);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Guayaquil", 1590487540);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Guayaquil", 1526802002);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Guayaquil" << std::endl;
    }
    if (has_timezone("America/Guyana")) {
        {
            auto tz = get_timezone("America/Guyana", 1605560563);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guyana", 1613403558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guyana", 1494868515);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guyana", 1542239667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Guyana", 1431507677);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Guyana" << std::endl;
    }
    if (has_timezone("America/Halifax")) {
        {
            auto tz = get_timezone("America/Halifax", 1624134883);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Halifax", 1527330590);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Halifax", 1599321638);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Halifax", 1514538949);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Halifax", 1470285319);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Halifax" << std::endl;
    }
    if (has_timezone("America/Havana")) {
        {
            auto tz = get_timezone("America/Havana", 1625516859);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Havana", 1509211744);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Havana", 1559138160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Havana", 1612906735);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Havana", 1444849621);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Havana" << std::endl;
    }
    if (has_timezone("America/Hermosillo")) {
        {
            auto tz = get_timezone("America/Hermosillo", 1615547765);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Hermosillo", 1587949039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Hermosillo", 1467515502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Hermosillo", 1598639535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Hermosillo", 1449235569);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Hermosillo" << std::endl;
    }
    if (has_timezone("America/Indiana/Indianapolis")) {
        {
            auto tz = get_timezone("America/Indiana/Indianapolis", 1567363938);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Indianapolis", 1553578517);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Indianapolis", 1525527171);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Indianapolis", 1580803879);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Indianapolis", 1532370010);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Indianapolis" << std::endl;
    }
    if (has_timezone("America/Indiana/Knox")) {
        {
            auto tz = get_timezone("America/Indiana/Knox", 1518984259);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Indiana/Knox", 1500544147);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Knox", 1497005817);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Knox", 1417522699);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Indiana/Knox", 1613126955);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Knox" << std::endl;
    }
    if (has_timezone("America/Indiana/Marengo")) {
        {
            auto tz = get_timezone("America/Indiana/Marengo", 1457656344);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Marengo", 1533730847);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Marengo", 1607488295);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Marengo", 1618414242);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Marengo", 1511165928);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Marengo" << std::endl;
    }
    if (has_timezone("America/Indiana/Petersburg")) {
        {
            auto tz = get_timezone("America/Indiana/Petersburg", 1535049957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Petersburg", 1469864227);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Petersburg", 1468836158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Petersburg", 1527965141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Petersburg", 1497071262);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Petersburg" << std::endl;
    }
    if (has_timezone("America/Indiana/Tell_City")) {
        {
            auto tz = get_timezone("America/Indiana/Tell_City", 1575463690);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Indiana/Tell_City", 1597065327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Tell_City", 1422789754);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Indiana/Tell_City", 1424915601);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Indiana/Tell_City", 1445567920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Tell_City" << std::endl;
    }
    if (has_timezone("America/Indiana/Vevay")) {
        {
            auto tz = get_timezone("America/Indiana/Vevay", 1495794997);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Vevay", 1486660623);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Vevay", 1513564659);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Vevay", 1621069166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Vevay", 1529873234);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Vevay" << std::endl;
    }
    if (has_timezone("America/Indiana/Vincennes")) {
        {
            auto tz = get_timezone("America/Indiana/Vincennes", 1607527702);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Vincennes", 1468807366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Vincennes", 1531452775);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Vincennes", 1571812643);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Vincennes", 1456775366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Vincennes" << std::endl;
    }
    if (has_timezone("America/Indiana/Winamac")) {
        {
            auto tz = get_timezone("America/Indiana/Winamac", 1605290813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Winamac", 1610439594);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Winamac", 1438393455);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indiana/Winamac", 1510690129);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indiana/Winamac", 1521239854);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indiana/Winamac" << std::endl;
    }
    if (has_timezone("America/Indianapolis")) {
        {
            auto tz = get_timezone("America/Indianapolis", 1545854391);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indianapolis", 1588764698);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indianapolis", 1607895339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Indianapolis", 1426361990);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Indianapolis", 1484675012);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Indianapolis" << std::endl;
    }
    if (has_timezone("America/Inuvik")) {
        {
            auto tz = get_timezone("America/Inuvik", 1474445697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Inuvik", 1619171298);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Inuvik", 1496112415);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Inuvik", 1526648984);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Inuvik", 1581561812);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Inuvik" << std::endl;
    }
    if (has_timezone("America/Iqaluit")) {
        {
            auto tz = get_timezone("America/Iqaluit", 1504354053);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Iqaluit", 1511205366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Iqaluit", 1530741456);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Iqaluit", 1491118600);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Iqaluit", 1553818751);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Iqaluit" << std::endl;
    }
    if (has_timezone("America/Jamaica")) {
        {
            auto tz = get_timezone("America/Jamaica", 1550191184);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Jamaica", 1442451254);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Jamaica", 1479440803);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Jamaica", 1544930314);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Jamaica", 1615987821);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Jamaica" << std::endl;
    }
    if (has_timezone("America/Jujuy")) {
        {
            auto tz = get_timezone("America/Jujuy", 1435723020);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Jujuy", 1504282876);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Jujuy", 1606890176);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Jujuy", 1610334320);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Jujuy", 1589815499);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Jujuy" << std::endl;
    }
    if (has_timezone("America/Juneau")) {
        {
            auto tz = get_timezone("America/Juneau", 1467422270);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Juneau", 1443006062);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Juneau", 1490559836);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Juneau", 1538313963);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Juneau", 1515259930);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Juneau" << std::endl;
    }
    if (has_timezone("America/Kentucky/Louisville")) {
        {
            auto tz = get_timezone("America/Kentucky/Louisville", 1591569788);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kentucky/Louisville", 1477851939);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kentucky/Louisville", 1479197141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Kentucky/Louisville", 1422555582);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Kentucky/Louisville", 1622807011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Kentucky/Louisville" << std::endl;
    }
    if (has_timezone("America/Kentucky/Monticello")) {
        {
            auto tz = get_timezone("America/Kentucky/Monticello", 1515686171);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Kentucky/Monticello", 1499312467);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kentucky/Monticello", 1606148254);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Kentucky/Monticello", 1524044578);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kentucky/Monticello", 1624285075);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Kentucky/Monticello" << std::endl;
    }
    if (has_timezone("America/Knox_IN")) {
        {
            auto tz = get_timezone("America/Knox_IN", 1560826543);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Knox_IN", 1429525979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Knox_IN", 1554243354);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Knox_IN", 1449420543);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Knox_IN", 1549017075);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Knox_IN" << std::endl;
    }
    if (has_timezone("America/Kralendijk")) {
        {
            auto tz = get_timezone("America/Kralendijk", 1566045286);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kralendijk", 1628159276);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kralendijk", 1610924370);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kralendijk", 1455959478);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Kralendijk", 1450624892);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Kralendijk" << std::endl;
    }
    if (has_timezone("America/La_Paz")) {
        {
            auto tz = get_timezone("America/La_Paz", 1428465521);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/La_Paz", 1419958802);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/La_Paz", 1581910331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/La_Paz", 1561783479);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/La_Paz", 1490299674);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/La_Paz" << std::endl;
    }
    if (has_timezone("America/Lima")) {
        {
            auto tz = get_timezone("America/Lima", 1600098135);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Lima", 1431023933);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Lima", 1450255375);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Lima", 1621932784);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Lima", 1528489142);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Lima" << std::endl;
    }
    if (has_timezone("America/Los_Angeles")) {
        {
            auto tz = get_timezone("America/Los_Angeles", 1575357248);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Los_Angeles", 1585962715);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Los_Angeles", 1452327289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Los_Angeles", 1523857908);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Los_Angeles", 1455350074);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Los_Angeles" << std::endl;
    }
    if (has_timezone("America/Louisville")) {
        {
            auto tz = get_timezone("America/Louisville", 1542594727);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Louisville", 1609125369);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Louisville", 1426087796);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Louisville", 1576907214);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Louisville", 1521514718);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Louisville" << std::endl;
    }
    if (has_timezone("America/Lower_Princes")) {
        {
            auto tz = get_timezone("America/Lower_Princes", 1530901061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Lower_Princes", 1431530079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Lower_Princes", 1492304193);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Lower_Princes", 1545907725);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Lower_Princes", 1530263344);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Lower_Princes" << std::endl;
    }
    if (has_timezone("America/Maceio")) {
        {
            auto tz = get_timezone("America/Maceio", 1544415465);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Maceio", 1424657955);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Maceio", 1593220095);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Maceio", 1479884742);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Maceio", 1481191788);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Maceio" << std::endl;
    }
    if (has_timezone("America/Managua")) {
        {
            auto tz = get_timezone("America/Managua", 1532635427);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Managua", 1434005134);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Managua", 1534388908);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Managua", 1586754811);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Managua", 1621421182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Managua" << std::endl;
    }
    if (has_timezone("America/Manaus")) {
        {
            auto tz = get_timezone("America/Manaus", 1478442580);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Manaus", 1414518509);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Manaus", 1514154881);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Manaus", 1514615825);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Manaus", 1447034839);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Manaus" << std::endl;
    }
    if (has_timezone("America/Marigot")) {
        {
            auto tz = get_timezone("America/Marigot", 1580968898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Marigot", 1553883244);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Marigot", 1505528839);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Marigot", 1614126442);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Marigot", 1502930032);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Marigot" << std::endl;
    }
    if (has_timezone("America/Martinique")) {
        {
            auto tz = get_timezone("America/Martinique", 1437535427);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Martinique", 1503969643);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Martinique", 1601152486);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Martinique", 1412121702);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Martinique", 1463045528);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Martinique" << std::endl;
    }
    if (has_timezone("America/Matamoros")) {
        {
            auto tz = get_timezone("America/Matamoros", 1493023326);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Matamoros", 1505622509);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Matamoros", 1441391629);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Matamoros", 1593990534);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Matamoros", 1476342094);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Matamoros" << std::endl;
    }
    if (has_timezone("America/Mazatlan")) {
        {
            auto tz = get_timezone("America/Mazatlan", 1574969938);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Mazatlan", 1604746950);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Mazatlan", 1464380539);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Mazatlan", 1543176564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Mazatlan", 1520393755);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Mazatlan" << std::endl;
    }
    if (has_timezone("America/Mendoza")) {
        {
            auto tz = get_timezone("America/Mendoza", 1460731305);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Mendoza", 1492834502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Mendoza", 1613075736);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Mendoza", 1495713372);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Mendoza", 1501417076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Mendoza" << std::endl;
    }
    if (has_timezone("America/Menominee")) {
        {
            auto tz = get_timezone("America/Menominee", 1572284882);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Menominee", 1438154151);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Menominee", 1469744844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Menominee", 1558492377);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Menominee", 1454316973);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Menominee" << std::endl;
    }
    if (has_timezone("America/Merida")) {
        {
            auto tz = get_timezone("America/Merida", 1489558774);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Merida", 1540048113);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Merida", 1599079404);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Merida", 1477436394);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Merida", 1411782855);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Merida" << std::endl;
    }
    if (has_timezone("America/Metlakatla")) {
        {
            auto tz = get_timezone("America/Metlakatla", 1570585461);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Metlakatla", 1413220339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Metlakatla", 1437840918);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Metlakatla", 1548181654);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Metlakatla", 1629874802);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Metlakatla" << std::endl;
    }
    if (has_timezone("America/Mexico_City")) {
        {
            auto tz = get_timezone("America/Mexico_City", 1510368240);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Mexico_City", 1608807287);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Mexico_City", 1550673924);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Mexico_City", 1615432129);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Mexico_City", 1443773373);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Mexico_City" << std::endl;
    }
    if (has_timezone("America/Miquelon")) {
        {
            auto tz = get_timezone("America/Miquelon", 1501299203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Miquelon", 1478534673);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Miquelon", 1518880018);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Miquelon", 1540682587);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Miquelon", 1599161001);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Miquelon" << std::endl;
    }
    if (has_timezone("America/Moncton")) {
        {
            auto tz = get_timezone("America/Moncton", 1562128263);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Moncton", 1492202081);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Moncton", 1538478502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Moncton", 1623860421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Moncton", 1564679915);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Moncton" << std::endl;
    }
    if (has_timezone("America/Monterrey")) {
        {
            auto tz = get_timezone("America/Monterrey", 1415361028);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Monterrey", 1568446371);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Monterrey", 1443203271);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Monterrey", 1598888626);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Monterrey", 1519398717);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Monterrey" << std::endl;
    }
    if (has_timezone("America/Montevideo")) {
        {
            auto tz = get_timezone("America/Montevideo", 1531496066);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Montevideo", 1422134535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Montevideo", 1481528977);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Montevideo", 1419088015);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Montevideo", 1433759235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Montevideo" << std::endl;
    }
    if (has_timezone("America/Montreal")) {
        {
            auto tz = get_timezone("America/Montreal", 1612814592);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Montreal", 1598057080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montreal", 1471161825);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montreal", 1441285132);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montreal", 1607713886);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Montreal" << std::endl;
    }
    if (has_timezone("America/Montserrat")) {
        {
            auto tz = get_timezone("America/Montserrat", 1491618965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montserrat", 1520810562);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montserrat", 1473324690);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montserrat", 1488284087);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Montserrat", 1463583457);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Montserrat" << std::endl;
    }
    if (has_timezone("America/Nassau")) {
        {
            auto tz = get_timezone("America/Nassau", 1462710310);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nassau", 1530132580);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nassau", 1580549718);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Nassau", 1596131042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nassau", 1526476850);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Nassau" << std::endl;
    }
    if (has_timezone("America/New_York")) {
        {
            auto tz = get_timezone("America/New_York", 1588165634);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/New_York", 1562872311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/New_York", 1442355204);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/New_York", 1612129697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/New_York", 1541548852);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/New_York" << std::endl;
    }
    if (has_timezone("America/Nipigon")) {
        {
            auto tz = get_timezone("America/Nipigon", 1461045303);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nipigon", 1613934120);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Nipigon", 1440435509);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nipigon", 1570474044);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Nipigon", 1481736752);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Nipigon" << std::endl;
    }
    if (has_timezone("America/Nome")) {
        {
            auto tz = get_timezone("America/Nome", 1428366475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Nome", 1425169423);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Nome", 1445999386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Nome", 1489803666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Nome", 1536776492);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Nome" << std::endl;
    }
    if (has_timezone("America/Noronha")) {
        {
            auto tz = get_timezone("America/Noronha", 1615133524);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Noronha", 1526713562);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Noronha", 1428805781);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Noronha", 1416119006);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Noronha", 1490416802);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Noronha" << std::endl;
    }
    if (has_timezone("America/North_Dakota/Beulah")) {
        {
            auto tz = get_timezone("America/North_Dakota/Beulah", 1462521530);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Beulah", 1591494142);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Beulah", 1581046995);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Beulah", 1608983508);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Beulah", 1492454416);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/Beulah" << std::endl;
    }
    if (has_timezone("America/North_Dakota/Center")) {
        {
            auto tz = get_timezone("America/North_Dakota/Center", 1413461315);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Center", 1422360198);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Center", 1418273760);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Center", 1499913381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/Center", 1491290520);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/Center" << std::endl;
    }
    if (has_timezone("America/North_Dakota/New_Salem")) {
        {
            auto tz = get_timezone("America/North_Dakota/New_Salem", 1557745235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/New_Salem", 1551306872);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/North_Dakota/New_Salem", 1599280066);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/New_Salem", 1562444053);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/North_Dakota/New_Salem", 1556419258);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/North_Dakota/New_Salem" << std::endl;
    }
    if (has_timezone("America/Ojinaga")) {
        {
            auto tz = get_timezone("America/Ojinaga", 1514836793);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ojinaga", 1475630338);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Ojinaga", 1447801138);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ojinaga", 1450949065);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Ojinaga", 1509072757);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Ojinaga" << std::endl;
    }
    if (has_timezone("America/Panama")) {
        {
            auto tz = get_timezone("America/Panama", 1525958609);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Panama", 1541899914);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Panama", 1547500854);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Panama", 1573678534);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Panama", 1567818945);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Panama" << std::endl;
    }
    if (has_timezone("America/Pangnirtung")) {
        {
            auto tz = get_timezone("America/Pangnirtung", 1611850469);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Pangnirtung", 1510265492);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Pangnirtung", 1472047235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Pangnirtung", 1560034368);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Pangnirtung", 1553877599);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Pangnirtung" << std::endl;
    }
    if (has_timezone("America/Paramaribo")) {
        {
            auto tz = get_timezone("America/Paramaribo", 1601406810);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Paramaribo", 1598176806);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Paramaribo", 1459187738);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Paramaribo", 1426609840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Paramaribo", 1536129967);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Paramaribo" << std::endl;
    }
    if (has_timezone("America/Phoenix")) {
        {
            auto tz = get_timezone("America/Phoenix", 1426402169);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Phoenix", 1576033279);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Phoenix", 1572343581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Phoenix", 1562681564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Phoenix", 1578085666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Phoenix" << std::endl;
    }
    if (has_timezone("America/Port-au-Prince")) {
        {
            auto tz = get_timezone("America/Port-au-Prince", 1456173771);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Port-au-Prince", 1499801396);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port-au-Prince", 1443909688);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port-au-Prince", 1557300946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port-au-Prince", 1473708611);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Port-au-Prince" << std::endl;
    }
    if (has_timezone("America/Port_of_Spain")) {
        {
            auto tz = get_timezone("America/Port_of_Spain", 1448373486);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port_of_Spain", 1473799734);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port_of_Spain", 1486890761);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port_of_Spain", 1432563640);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Port_of_Spain", 1576516181);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Port_of_Spain" << std::endl;
    }
    if (has_timezone("America/Porto_Acre")) {
        {
            auto tz = get_timezone("America/Porto_Acre", 1625434064);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Porto_Acre", 1594645211);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Porto_Acre", 1527640753);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Porto_Acre", 1437455640);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Porto_Acre", 1472090992);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Porto_Acre" << std::endl;
    }
    if (has_timezone("America/Porto_Velho")) {
        {
            auto tz = get_timezone("America/Porto_Velho", 1529914811);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Porto_Velho", 1445577222);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Porto_Velho", 1508823586);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Porto_Velho", 1572318308);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Porto_Velho", 1605027516);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Porto_Velho" << std::endl;
    }
    if (has_timezone("America/Puerto_Rico")) {
        {
            auto tz = get_timezone("America/Puerto_Rico", 1583135273);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Puerto_Rico", 1527785845);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Puerto_Rico", 1586335888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Puerto_Rico", 1627369482);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Puerto_Rico", 1592424641);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Puerto_Rico" << std::endl;
    }
    if (has_timezone("America/Punta_Arenas")) {
        {
            auto tz = get_timezone("America/Punta_Arenas", 1575150490);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Punta_Arenas", 1410053864);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Punta_Arenas", 1473175846);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Punta_Arenas", 1522824976);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Punta_Arenas", 1581493347);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Punta_Arenas" << std::endl;
    }
    if (has_timezone("America/Rainy_River")) {
        {
            auto tz = get_timezone("America/Rainy_River", 1628667105);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rainy_River", 1567827579);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rainy_River", 1604303952);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Rainy_River", 1592382700);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rainy_River", 1547063110);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Rainy_River" << std::endl;
    }
    if (has_timezone("America/Rankin_Inlet")) {
        {
            auto tz = get_timezone("America/Rankin_Inlet", 1494724772);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rankin_Inlet", 1524982930);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rankin_Inlet", 1559645022);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rankin_Inlet", 1416808254);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Rankin_Inlet", 1498944896);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Rankin_Inlet" << std::endl;
    }
    if (has_timezone("America/Recife")) {
        {
            auto tz = get_timezone("America/Recife", 1586387231);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Recife", 1516854276);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Recife", 1584921028);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Recife", 1573415561);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Recife", 1620139588);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Recife" << std::endl;
    }
    if (has_timezone("America/Regina")) {
        {
            auto tz = get_timezone("America/Regina", 1608422946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Regina", 1474496624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Regina", 1573836655);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Regina", 1583176019);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Regina", 1421003491);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Regina" << std::endl;
    }
    if (has_timezone("America/Resolute")) {
        {
            auto tz = get_timezone("America/Resolute", 1498002547);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Resolute", 1518753171);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Resolute", 1530092958);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Resolute", 1572811928);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Resolute", 1568350283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Resolute" << std::endl;
    }
    if (has_timezone("America/Rio_Branco")) {
        {
            auto tz = get_timezone("America/Rio_Branco", 1502732189);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rio_Branco", 1471684936);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rio_Branco", 1540785090);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rio_Branco", 1556627182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Rio_Branco", 1452229677);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Rio_Branco" << std::endl;
    }
    if (has_timezone("America/Rosario")) {
        {
            auto tz = get_timezone("America/Rosario", 1584288271);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Rosario", 1513014835);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Rosario", 1527191804);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Rosario", 1556957189);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Rosario", 1516960873);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Rosario" << std::endl;
    }
    if (has_timezone("America/Santa_Isabel")) {
        {
            auto tz = get_timezone("America/Santa_Isabel", 1568011582);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Santa_Isabel", 1605889624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Santa_Isabel", 1510078622);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Santa_Isabel", 1477844220);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Santa_Isabel", 1604129894);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Santa_Isabel" << std::endl;
    }
    if (has_timezone("America/Santarem")) {
        {
            auto tz = get_timezone("America/Santarem", 1509515888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santarem", 1614688422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santarem", 1531939476);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santarem", 1481913840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santarem", 1617205426);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Santarem" << std::endl;
    }
    if (has_timezone("America/Santiago")) {
        {
            auto tz = get_timezone("America/Santiago", 1624649327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santiago", 1426336399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santiago", 1519634920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Santiago", 1599125737);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santiago", 1496807318);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Santiago" << std::endl;
    }
    if (has_timezone("America/Santo_Domingo")) {
        {
            auto tz = get_timezone("America/Santo_Domingo", 1523547957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santo_Domingo", 1440198601);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santo_Domingo", 1591726628);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santo_Domingo", 1602050294);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Santo_Domingo", 1629829768);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Santo_Domingo" << std::endl;
    }
    if (has_timezone("America/Sao_Paulo")) {
        {
            auto tz = get_timezone("America/Sao_Paulo", 1503758646);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Sao_Paulo", 1593176182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Sao_Paulo", 1626475470);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Sao_Paulo", 1455999699);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("America/Sao_Paulo", 1569167544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Sao_Paulo" << std::endl;
    }
    if (has_timezone("America/Scoresbysund")) {
        {
            auto tz = get_timezone("America/Scoresbysund", 1543914597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("America/Scoresbysund", 1618395821);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Scoresbysund", 1526937508);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Scoresbysund", 1603556497);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("America/Scoresbysund", 1499660221);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Scoresbysund" << std::endl;
    }
    if (has_timezone("America/Shiprock")) {
        {
            auto tz = get_timezone("America/Shiprock", 1430095714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Shiprock", 1506819942);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Shiprock", 1552604787);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Shiprock", 1470318025);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Shiprock", 1568786440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Shiprock" << std::endl;
    }
    if (has_timezone("America/Sitka")) {
        {
            auto tz = get_timezone("America/Sitka", 1589810399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Sitka", 1491949906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Sitka", 1582835946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Sitka", 1494526443);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Sitka", 1428717438);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Sitka" << std::endl;
    }
    if (has_timezone("America/St_Barthelemy")) {
        {
            auto tz = get_timezone("America/St_Barthelemy", 1463595993);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Barthelemy", 1492003092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Barthelemy", 1577067001);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Barthelemy", 1583872474);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Barthelemy", 1624044182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Barthelemy" << std::endl;
    }
    if (has_timezone("America/St_Johns")) {
        {
            auto tz = get_timezone("America/St_Johns", 1559281916);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -9000);
        }
        {
            auto tz = get_timezone("America/St_Johns", 1413982391);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -9000);
        }
        {
            auto tz = get_timezone("America/St_Johns", 1544573250);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -12600);
        }
        {
            auto tz = get_timezone("America/St_Johns", 1545015156);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -12600);
        }
        {
            auto tz = get_timezone("America/St_Johns", 1575137351);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -12600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Johns" << std::endl;
    }
    if (has_timezone("America/St_Kitts")) {
        {
            auto tz = get_timezone("America/St_Kitts", 1584757173);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Kitts", 1618620027);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Kitts", 1412093843);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Kitts", 1461167225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Kitts", 1620227592);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Kitts" << std::endl;
    }
    if (has_timezone("America/St_Lucia")) {
        {
            auto tz = get_timezone("America/St_Lucia", 1483749242);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Lucia", 1412288012);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Lucia", 1622870730);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Lucia", 1440305721);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Lucia", 1468224166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Lucia" << std::endl;
    }
    if (has_timezone("America/St_Thomas")) {
        {
            auto tz = get_timezone("America/St_Thomas", 1418958430);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Thomas", 1569287803);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Thomas", 1511754339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Thomas", 1465346966);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Thomas", 1449232547);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Thomas" << std::endl;
    }
    if (has_timezone("America/St_Vincent")) {
        {
            auto tz = get_timezone("America/St_Vincent", 1426108568);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Vincent", 1585795197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Vincent", 1490393729);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Vincent", 1509949466);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/St_Vincent", 1611991119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/St_Vincent" << std::endl;
    }
    if (has_timezone("America/Swift_Current")) {
        {
            auto tz = get_timezone("America/Swift_Current", 1412780091);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Swift_Current", 1429294165);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Swift_Current", 1413179128);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Swift_Current", 1423400251);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Swift_Current", 1512712891);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Swift_Current" << std::endl;
    }
    if (has_timezone("America/Tegucigalpa")) {
        {
            auto tz = get_timezone("America/Tegucigalpa", 1544968001);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Tegucigalpa", 1563037079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Tegucigalpa", 1440853833);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Tegucigalpa", 1598388106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Tegucigalpa", 1593892639);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Tegucigalpa" << std::endl;
    }
    if (has_timezone("America/Thule")) {
        {
            auto tz = get_timezone("America/Thule", 1429863643);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Thule", 1420161917);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Thule", 1495950640);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Thule", 1596205407);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("America/Thule", 1600333348);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Thule" << std::endl;
    }
    if (has_timezone("America/Thunder_Bay")) {
        {
            auto tz = get_timezone("America/Thunder_Bay", 1473403483);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Thunder_Bay", 1423527222);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Thunder_Bay", 1444816462);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Thunder_Bay", 1496376393);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Thunder_Bay", 1500151761);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Thunder_Bay" << std::endl;
    }
    if (has_timezone("America/Tijuana")) {
        {
            auto tz = get_timezone("America/Tijuana", 1599364712);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Tijuana", 1538223815);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Tijuana", 1540795343);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Tijuana", 1558070206);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Tijuana", 1526696325);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Tijuana" << std::endl;
    }
    if (has_timezone("America/Toronto")) {
        {
            auto tz = get_timezone("America/Toronto", 1579235120);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Toronto", 1546160278);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Toronto", 1473703151);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Toronto", 1430113214);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Toronto", 1453575133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Toronto" << std::endl;
    }
    if (has_timezone("America/Tortola")) {
        {
            auto tz = get_timezone("America/Tortola", 1430862982);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Tortola", 1540653350);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Tortola", 1625656884);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Tortola", 1605091697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Tortola", 1600495458);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Tortola" << std::endl;
    }
    if (has_timezone("America/Vancouver")) {
        {
            auto tz = get_timezone("America/Vancouver", 1469772955);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Vancouver", 1438280878);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Vancouver", 1532683384);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Vancouver", 1535711605);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Vancouver", 1442691548);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Vancouver" << std::endl;
    }
    if (has_timezone("America/Virgin")) {
        {
            auto tz = get_timezone("America/Virgin", 1426951405);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Virgin", 1424519608);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Virgin", 1475650828);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Virgin", 1414201386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("America/Virgin", 1488023629);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Virgin" << std::endl;
    }
    if (has_timezone("America/Whitehorse")) {
        {
            auto tz = get_timezone("America/Whitehorse", 1609518665);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Whitehorse", 1445931080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Whitehorse", 1549747764);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Whitehorse", 1503705197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("America/Whitehorse", 1437145879);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Whitehorse" << std::endl;
    }
    if (has_timezone("America/Winnipeg")) {
        {
            auto tz = get_timezone("America/Winnipeg", 1483383915);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Winnipeg", 1410355479);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Winnipeg", 1506650706);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Winnipeg", 1445295182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("America/Winnipeg", 1426716649);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Winnipeg" << std::endl;
    }
    if (has_timezone("America/Yakutat")) {
        {
            auto tz = get_timezone("America/Yakutat", 1607953150);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Yakutat", 1614872968);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("America/Yakutat", 1463537424);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Yakutat", 1505426070);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("America/Yakutat", 1561111788);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Yakutat" << std::endl;
    }
    if (has_timezone("America/Yellowknife")) {
        {
            auto tz = get_timezone("America/Yellowknife", 1539155772);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Yellowknife", 1505760060);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Yellowknife", 1601969564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Yellowknife", 1428859412);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("America/Yellowknife", 1538625681);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: America/Yellowknife" << std::endl;
    }
    if (has_timezone("Antarctica/Casey")) {
        {
            auto tz = get_timezone("Antarctica/Casey", 1613845017);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Antarctica/Casey", 1498852357);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Casey", 1535164923);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Antarctica/Casey", 1492405320);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Casey", 1418215092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Casey" << std::endl;
    }
    if (has_timezone("Antarctica/Davis")) {
        {
            auto tz = get_timezone("Antarctica/Davis", 1501018359);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Antarctica/Davis", 1587128709);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Antarctica/Davis", 1421783628);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Antarctica/Davis", 1535768884);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Antarctica/Davis", 1528853944);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Davis" << std::endl;
    }
    if (has_timezone("Antarctica/DumontDUrville")) {
        {
            auto tz = get_timezone("Antarctica/DumontDUrville", 1578090140);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Antarctica/DumontDUrville", 1568535480);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Antarctica/DumontDUrville", 1411990184);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Antarctica/DumontDUrville", 1594027090);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Antarctica/DumontDUrville", 1611585480);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/DumontDUrville" << std::endl;
    }
    if (has_timezone("Antarctica/Macquarie")) {
        {
            auto tz = get_timezone("Antarctica/Macquarie", 1541969544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Macquarie", 1585146453);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Macquarie", 1544445019);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Macquarie", 1498602494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Antarctica/Macquarie", 1590700639);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Macquarie" << std::endl;
    }
    if (has_timezone("Antarctica/Mawson")) {
        {
            auto tz = get_timezone("Antarctica/Mawson", 1600719899);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Antarctica/Mawson", 1590929402);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Antarctica/Mawson", 1595438268);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Antarctica/Mawson", 1552526419);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Antarctica/Mawson", 1486290992);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Mawson" << std::endl;
    }
    if (has_timezone("Antarctica/McMurdo")) {
        {
            auto tz = get_timezone("Antarctica/McMurdo", 1540450837);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/McMurdo", 1462339324);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Antarctica/McMurdo", 1543899023);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/McMurdo", 1444820813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/McMurdo", 1410332328);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/McMurdo" << std::endl;
    }
    if (has_timezone("Antarctica/Palmer")) {
        {
            auto tz = get_timezone("Antarctica/Palmer", 1496657569);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Palmer", 1590881530);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Palmer", 1573732229);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Palmer", 1439750047);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Palmer", 1481791787);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Palmer" << std::endl;
    }
    if (has_timezone("Antarctica/Rothera")) {
        {
            auto tz = get_timezone("Antarctica/Rothera", 1470199787);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Rothera", 1434531345);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Rothera", 1541162714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Rothera", 1526397979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Antarctica/Rothera", 1585661946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Rothera" << std::endl;
    }
    if (has_timezone("Antarctica/South_Pole")) {
        {
            auto tz = get_timezone("Antarctica/South_Pole", 1516185524);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/South_Pole", 1460946922);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Antarctica/South_Pole", 1447321651);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/South_Pole", 1453346993);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Antarctica/South_Pole", 1464515604);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/South_Pole" << std::endl;
    }
    if (has_timezone("Antarctica/Syowa")) {
        {
            auto tz = get_timezone("Antarctica/Syowa", 1548987663);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Antarctica/Syowa", 1409995314);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Antarctica/Syowa", 1471317938);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Antarctica/Syowa", 1490069688);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Antarctica/Syowa", 1613699055);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Syowa" << std::endl;
    }
    if (has_timezone("Antarctica/Troll")) {
        {
            auto tz = get_timezone("Antarctica/Troll", 1467429537);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Antarctica/Troll", 1590139050);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Antarctica/Troll", 1423240281);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Antarctica/Troll", 1502871888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Antarctica/Troll", 1459745890);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Troll" << std::endl;
    }
    if (has_timezone("Antarctica/Vostok")) {
        {
            auto tz = get_timezone("Antarctica/Vostok", 1538504140);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Antarctica/Vostok", 1540746563);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Antarctica/Vostok", 1503543685);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Antarctica/Vostok", 1508437575);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Antarctica/Vostok", 1621096035);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Antarctica/Vostok" << std::endl;
    }
    if (has_timezone("Arctic/Longyearbyen")) {
        {
            auto tz = get_timezone("Arctic/Longyearbyen", 1578915827);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Arctic/Longyearbyen", 1417830594);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Arctic/Longyearbyen", 1463978993);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Arctic/Longyearbyen", 1460241713);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Arctic/Longyearbyen", 1543681958);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Arctic/Longyearbyen" << std::endl;
    }
    if (has_timezone("Asia/Aden")) {
        {
            auto tz = get_timezone("Asia/Aden", 1431705638);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Aden", 1526096490);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Aden", 1511498103);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Aden", 1615512539);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Aden", 1574402110);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aden" << std::endl;
    }
    if (has_timezone("Asia/Almaty")) {
        {
            auto tz = get_timezone("Asia/Almaty", 1470317316);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Almaty", 1608520205);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Almaty", 1447882878);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Almaty", 1498058675);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Almaty", 1587408106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Almaty" << std::endl;
    }
    if (has_timezone("Asia/Amman")) {
        {
            auto tz = get_timezone("Asia/Amman", 1623211832);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Amman", 1600092776);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Amman", 1425365062);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Amman", 1536553064);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Amman", 1520766380);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Amman" << std::endl;
    }
    if (has_timezone("Asia/Anadyr")) {
        {
            auto tz = get_timezone("Asia/Anadyr", 1423777815);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Anadyr", 1429123575);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Anadyr", 1438097457);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Anadyr", 1464211728);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Anadyr", 1463817348);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Anadyr" << std::endl;
    }
    if (has_timezone("Asia/Aqtau")) {
        {
            auto tz = get_timezone("Asia/Aqtau", 1541423187);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtau", 1625780802);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtau", 1518227703);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtau", 1410475891);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtau", 1550114269);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aqtau" << std::endl;
    }
    if (has_timezone("Asia/Aqtobe")) {
        {
            auto tz = get_timezone("Asia/Aqtobe", 1453480668);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtobe", 1555031714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtobe", 1589975006);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtobe", 1537117010);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Aqtobe", 1436321431);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Aqtobe" << std::endl;
    }
    if (has_timezone("Asia/Ashgabat")) {
        {
            auto tz = get_timezone("Asia/Ashgabat", 1546719788);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashgabat", 1496289009);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashgabat", 1537595120);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashgabat", 1503354376);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashgabat", 1456852326);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ashgabat" << std::endl;
    }
    if (has_timezone("Asia/Ashkhabad")) {
        {
            auto tz = get_timezone("Asia/Ashkhabad", 1602189234);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashkhabad", 1415035106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashkhabad", 1622930965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashkhabad", 1593164881);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Ashkhabad", 1624638157);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ashkhabad" << std::endl;
    }
    if (has_timezone("Asia/Atyrau")) {
        {
            auto tz = get_timezone("Asia/Atyrau", 1537806695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Atyrau", 1461032174);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Atyrau", 1538986936);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Atyrau", 1462607061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Atyrau", 1450376344);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Atyrau" << std::endl;
    }
    if (has_timezone("Asia/Baghdad")) {
        {
            auto tz = get_timezone("Asia/Baghdad", 1490009038);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Baghdad", 1612014954);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Baghdad", 1476476047);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Baghdad", 1614687768);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Baghdad", 1473541894);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Baghdad" << std::endl;
    }
    if (has_timezone("Asia/Bahrain")) {
        {
            auto tz = get_timezone("Asia/Bahrain", 1414156832);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Bahrain", 1465473244);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Bahrain", 1490755853);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Bahrain", 1423679424);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Bahrain", 1627873953);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bahrain" << std::endl;
    }
    if (has_timezone("Asia/Baku")) {
        {
            auto tz = get_timezone("Asia/Baku", 1533682381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Baku", 1496613386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Baku", 1542599931);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Baku", 1494172572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Baku", 1531560270);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Baku" << std::endl;
    }
    if (has_timezone("Asia/Bangkok")) {
        {
            auto tz = get_timezone("Asia/Bangkok", 1570836715);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Bangkok", 1551709247);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Bangkok", 1466549795);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Bangkok", 1614846979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Bangkok", 1607164422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bangkok" << std::endl;
    }
    if (has_timezone("Asia/Barnaul")) {
        {
            auto tz = get_timezone("Asia/Barnaul", 1590606461);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Barnaul", 1440282255);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Barnaul", 1625834846);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Barnaul", 1515764207);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Barnaul", 1480857456);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Barnaul" << std::endl;
    }
    if (has_timezone("Asia/Beirut")) {
        {
            auto tz = get_timezone("Asia/Beirut", 1493046994);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Beirut", 1418294497);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Beirut", 1489213070);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Beirut", 1522980463);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Beirut", 1570829379);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Beirut" << std::endl;
    }
    if (has_timezone("Asia/Bishkek")) {
        {
            auto tz = get_timezone("Asia/Bishkek", 1452305561);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Bishkek", 1531285480);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Bishkek", 1473752223);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Bishkek", 1551061445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Bishkek", 1464871700);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Bishkek" << std::endl;
    }
    if (has_timezone("Asia/Brunei")) {
        {
            auto tz = get_timezone("Asia/Brunei", 1442221306);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Brunei", 1530105426);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Brunei", 1506085007);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Brunei", 1544214079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Brunei", 1433754595);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Brunei" << std::endl;
    }
    if (has_timezone("Asia/Calcutta")) {
        {
            auto tz = get_timezone("Asia/Calcutta", 1534622908);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Calcutta", 1525487475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Calcutta", 1503547637);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Calcutta", 1496860653);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Calcutta", 1534653682);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Calcutta" << std::endl;
    }
    if (has_timezone("Asia/Chita")) {
        {
            auto tz = get_timezone("Asia/Chita", 1457911882);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chita", 1437716840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chita", 1486211998);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Chita", 1630442653);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Chita", 1627438214);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chita" << std::endl;
    }
    if (has_timezone("Asia/Choibalsan")) {
        {
            auto tz = get_timezone("Asia/Choibalsan", 1568567904);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Choibalsan", 1414145445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Choibalsan", 1569961203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Choibalsan", 1585484325);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Choibalsan", 1444380493);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Choibalsan" << std::endl;
    }
    if (has_timezone("Asia/Chongqing")) {
        {
            auto tz = get_timezone("Asia/Chongqing", 1500090508);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chongqing", 1478893484);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chongqing", 1488366244);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chongqing", 1598110177);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chongqing", 1444995549);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chongqing" << std::endl;
    }
    if (has_timezone("Asia/Chungking")) {
        {
            auto tz = get_timezone("Asia/Chungking", 1594662630);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chungking", 1515465660);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chungking", 1546908114);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chungking", 1597062570);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Chungking", 1524407913);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Chungking" << std::endl;
    }
    if (has_timezone("Asia/Colombo")) {
        {
            auto tz = get_timezone("Asia/Colombo", 1592268572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Colombo", 1575235458);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Colombo", 1532856893);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Colombo", 1600774587);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Colombo", 1437729181);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Colombo" << std::endl;
    }
    if (has_timezone("Asia/Dacca")) {
        {
            auto tz = get_timezone("Asia/Dacca", 1598011731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dacca", 1595084430);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dacca", 1580752352);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dacca", 1475410574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dacca", 1553482104);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dacca" << std::endl;
    }
    if (has_timezone("Asia/Damascus")) {
        {
            auto tz = get_timezone("Asia/Damascus", 1606125332);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Damascus", 1621614984);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Damascus", 1613319525);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Damascus", 1617866595);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Damascus", 1611700835);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Damascus" << std::endl;
    }
    if (has_timezone("Asia/Dhaka")) {
        {
            auto tz = get_timezone("Asia/Dhaka", 1412422628);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dhaka", 1412475660);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dhaka", 1431957223);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dhaka", 1442680488);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Dhaka", 1481913811);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dhaka" << std::endl;
    }
    if (has_timezone("Asia/Dili")) {
        {
            auto tz = get_timezone("Asia/Dili", 1524605099);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Dili", 1622650366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Dili", 1586535273);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Dili", 1612839331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Dili", 1487598524);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dili" << std::endl;
    }
    if (has_timezone("Asia/Dubai")) {
        {
            auto tz = get_timezone("Asia/Dubai", 1508599730);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Dubai", 1563304290);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Dubai", 1447610831);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Dubai", 1521581870);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Dubai", 1513975945);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dubai" << std::endl;
    }
    if (has_timezone("Asia/Dushanbe")) {
        {
            auto tz = get_timezone("Asia/Dushanbe", 1618561816);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Dushanbe", 1584902295);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Dushanbe", 1533721533);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Dushanbe", 1505613790);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Dushanbe", 1615267495);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Dushanbe" << std::endl;
    }
    if (has_timezone("Asia/Famagusta")) {
        {
            auto tz = get_timezone("Asia/Famagusta", 1510236053);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Famagusta", 1520282020);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Famagusta", 1626197107);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Famagusta", 1571146231);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Famagusta", 1469658351);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Famagusta" << std::endl;
    }
    if (has_timezone("Asia/Gaza")) {
        {
            auto tz = get_timezone("Asia/Gaza", 1608569844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Gaza", 1496530461);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Gaza", 1479253424);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Gaza", 1496992792);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Gaza", 1505415372);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Gaza" << std::endl;
    }
    if (has_timezone("Asia/Harbin")) {
        {
            auto tz = get_timezone("Asia/Harbin", 1442012243);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Harbin", 1490805777);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Harbin", 1443720970);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Harbin", 1412886090);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Harbin", 1411319719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Harbin" << std::endl;
    }
    if (has_timezone("Asia/Hebron")) {
        {
            auto tz = get_timezone("Asia/Hebron", 1462945723);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Hebron", 1459974158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Hebron", 1454557113);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Hebron", 1565820713);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Hebron", 1617686949);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hebron" << std::endl;
    }
    if (has_timezone("Asia/Ho_Chi_Minh")) {
        {
            auto tz = get_timezone("Asia/Ho_Chi_Minh", 1521180339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Ho_Chi_Minh", 1448075734);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Ho_Chi_Minh", 1546754345);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Ho_Chi_Minh", 1623017140);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Ho_Chi_Minh", 1577380882);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ho_Chi_Minh" << std::endl;
    }
    if (has_timezone("Asia/Hong_Kong")) {
        {
            auto tz = get_timezone("Asia/Hong_Kong", 1425000530);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Hong_Kong", 1622562766);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Hong_Kong", 1549372182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Hong_Kong", 1586495116);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Hong_Kong", 1495909494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hong_Kong" << std::endl;
    }
    if (has_timezone("Asia/Hovd")) {
        {
            auto tz = get_timezone("Asia/Hovd", 1536114750);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Hovd", 1502678597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Hovd", 1573380867);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Hovd", 1462805373);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Hovd", 1470751666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Hovd" << std::endl;
    }
    if (has_timezone("Asia/Irkutsk")) {
        {
            auto tz = get_timezone("Asia/Irkutsk", 1433185263);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Irkutsk", 1461136328);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Irkutsk", 1626581086);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Irkutsk", 1452331437);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Irkutsk", 1436499903);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Irkutsk" << std::endl;
    }
    if (has_timezone("Asia/Istanbul")) {
        {
            auto tz = get_timezone("Asia/Istanbul", 1607891588);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Istanbul", 1443483641);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Istanbul", 1488673770);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Istanbul", 1435872861);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Istanbul", 1441358588);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Istanbul" << std::endl;
    }
    if (has_timezone("Asia/Jakarta")) {
        {
            auto tz = get_timezone("Asia/Jakarta", 1461452224);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Jakarta", 1571424317);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Jakarta", 1626852469);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Jakarta", 1456300018);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Jakarta", 1581994149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jakarta" << std::endl;
    }
    if (has_timezone("Asia/Jayapura")) {
        {
            auto tz = get_timezone("Asia/Jayapura", 1442865453);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Jayapura", 1556093265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Jayapura", 1514507160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Jayapura", 1410490104);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Jayapura", 1579271397);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jayapura" << std::endl;
    }
    if (has_timezone("Asia/Jerusalem")) {
        {
            auto tz = get_timezone("Asia/Jerusalem", 1501116390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Jerusalem", 1455758032);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Jerusalem", 1591586855);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Jerusalem", 1571127714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Jerusalem", 1430216724);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Jerusalem" << std::endl;
    }
    if (has_timezone("Asia/Kabul")) {
        {
            auto tz = get_timezone("Asia/Kabul", 1577834684);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Kabul", 1579047265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Kabul", 1576908130);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Kabul", 1464137862);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Kabul", 1518237046);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kabul" << std::endl;
    }
    if (has_timezone("Asia/Kamchatka")) {
        {
            auto tz = get_timezone("Asia/Kamchatka", 1598835492);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Kamchatka", 1414974614);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Kamchatka", 1551113185);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Kamchatka", 1451873290);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Asia/Kamchatka", 1515515873);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kamchatka" << std::endl;
    }
    if (has_timezone("Asia/Karachi")) {
        {
            auto tz = get_timezone("Asia/Karachi", 1412466975);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Karachi", 1526132770);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Karachi", 1536931381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Karachi", 1556216811);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Karachi", 1552690485);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Karachi" << std::endl;
    }
    if (has_timezone("Asia/Kashgar")) {
        {
            auto tz = get_timezone("Asia/Kashgar", 1464012756);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Kashgar", 1547965822);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Kashgar", 1427460306);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Kashgar", 1451799621);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Kashgar", 1487509712);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kashgar" << std::endl;
    }
    if (has_timezone("Asia/Kathmandu")) {
        {
            auto tz = get_timezone("Asia/Kathmandu", 1474085121);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Kathmandu", 1621760125);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Kathmandu", 1521058888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Kathmandu", 1600058041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Kathmandu", 1551889963);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kathmandu" << std::endl;
    }
    if (has_timezone("Asia/Katmandu")) {
        {
            auto tz = get_timezone("Asia/Katmandu", 1492736645);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Katmandu", 1432543521);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Katmandu", 1494071793);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Katmandu", 1543216795);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
        {
            auto tz = get_timezone("Asia/Katmandu", 1485497112);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 20700);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Katmandu" << std::endl;
    }
    if (has_timezone("Asia/Khandyga")) {
        {
            auto tz = get_timezone("Asia/Khandyga", 1546779957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Khandyga", 1477360305);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Khandyga", 1480355782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Khandyga", 1432461802);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Khandyga", 1614611829);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Khandyga" << std::endl;
    }
    if (has_timezone("Asia/Kolkata")) {
        {
            auto tz = get_timezone("Asia/Kolkata", 1605718828);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Kolkata", 1587616957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Kolkata", 1593934417);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Kolkata", 1607443133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
        {
            auto tz = get_timezone("Asia/Kolkata", 1412380006);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 19800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kolkata" << std::endl;
    }
    if (has_timezone("Asia/Krasnoyarsk")) {
        {
            auto tz = get_timezone("Asia/Krasnoyarsk", 1562531608);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Krasnoyarsk", 1560438233);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Krasnoyarsk", 1490931979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Krasnoyarsk", 1496570154);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Krasnoyarsk", 1547706591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Krasnoyarsk" << std::endl;
    }
    if (has_timezone("Asia/Kuala_Lumpur")) {
        {
            auto tz = get_timezone("Asia/Kuala_Lumpur", 1516133208);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuala_Lumpur", 1422958629);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuala_Lumpur", 1600243203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuala_Lumpur", 1630097512);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuala_Lumpur", 1538019819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuala_Lumpur" << std::endl;
    }
    if (has_timezone("Asia/Kuching")) {
        {
            auto tz = get_timezone("Asia/Kuching", 1413114928);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuching", 1431119844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuching", 1492327213);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuching", 1461747465);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Kuching", 1569081142);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuching" << std::endl;
    }
    if (has_timezone("Asia/Kuwait")) {
        {
            auto tz = get_timezone("Asia/Kuwait", 1623135784);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Kuwait", 1549627354);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Kuwait", 1434620266);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Kuwait", 1598930497);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Kuwait", 1432266479);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Kuwait" << std::endl;
    }
    if (has_timezone("Asia/Macao")) {
        {
            auto tz = get_timezone("Asia/Macao", 1562154384);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macao", 1412997038);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macao", 1598548875);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macao", 1431879739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macao", 1507948239);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Macao" << std::endl;
    }
    if (has_timezone("Asia/Macau")) {
        {
            auto tz = get_timezone("Asia/Macau", 1585753293);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macau", 1516632039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macau", 1573819786);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macau", 1416242305);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Macau", 1455670954);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Macau" << std::endl;
    }
    if (has_timezone("Asia/Magadan")) {
        {
            auto tz = get_timezone("Asia/Magadan", 1439721597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Magadan", 1574824353);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Magadan", 1585355282);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Magadan", 1558862806);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Magadan", 1429053163);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Magadan" << std::endl;
    }
    if (has_timezone("Asia/Makassar")) {
        {
            auto tz = get_timezone("Asia/Makassar", 1597900142);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Makassar", 1418034383);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Makassar", 1551482440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Makassar", 1439624261);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Makassar", 1494896011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Makassar" << std::endl;
    }
    if (has_timezone("Asia/Manila")) {
        {
            auto tz = get_timezone("Asia/Manila", 1430342517);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Manila", 1630035933);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Manila", 1414477182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Manila", 1574939544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Manila", 1567761357);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Manila" << std::endl;
    }
    if (has_timezone("Asia/Muscat")) {
        {
            auto tz = get_timezone("Asia/Muscat", 1466981019);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Muscat", 1575901300);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Muscat", 1441735024);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Muscat", 1557961824);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Muscat", 1459486048);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Muscat" << std::endl;
    }
    if (has_timezone("Asia/Nicosia")) {
        {
            auto tz = get_timezone("Asia/Nicosia", 1548057084);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Nicosia", 1430550942);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Nicosia", 1445538381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Nicosia", 1502688954);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Nicosia", 1445495072);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Nicosia" << std::endl;
    }
    if (has_timezone("Asia/Novokuznetsk")) {
        {
            auto tz = get_timezone("Asia/Novokuznetsk", 1571371757);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novokuznetsk", 1585250868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novokuznetsk", 1458575752);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novokuznetsk", 1450951535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novokuznetsk", 1466507278);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Novokuznetsk" << std::endl;
    }
    if (has_timezone("Asia/Novosibirsk")) {
        {
            auto tz = get_timezone("Asia/Novosibirsk", 1481729164);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novosibirsk", 1618385093);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novosibirsk", 1472339171);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novosibirsk", 1561490472);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Novosibirsk", 1455578794);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Novosibirsk" << std::endl;
    }
    if (has_timezone("Asia/Omsk")) {
        {
            auto tz = get_timezone("Asia/Omsk", 1591879240);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Omsk", 1600617375);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Omsk", 1598824211);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Omsk", 1616105791);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Omsk", 1439129123);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Omsk" << std::endl;
    }
    if (has_timezone("Asia/Oral")) {
        {
            auto tz = get_timezone("Asia/Oral", 1562407767);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Oral", 1594876901);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Oral", 1505904124);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Oral", 1419533960);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Oral", 1617409908);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Oral" << std::endl;
    }
    if (has_timezone("Asia/Phnom_Penh")) {
        {
            auto tz = get_timezone("Asia/Phnom_Penh", 1574633933);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Phnom_Penh", 1410705771);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Phnom_Penh", 1427013227);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Phnom_Penh", 1505822574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Phnom_Penh", 1595320369);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Phnom_Penh" << std::endl;
    }
    if (has_timezone("Asia/Pontianak")) {
        {
            auto tz = get_timezone("Asia/Pontianak", 1564252799);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Pontianak", 1606791871);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Pontianak", 1416525807);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Pontianak", 1567886486);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Pontianak", 1433539012);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Pontianak" << std::endl;
    }
    if (has_timezone("Asia/Pyongyang")) {
        {
            auto tz = get_timezone("Asia/Pyongyang", 1541325435);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Pyongyang", 1447125492);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 30600);
        }
        {
            auto tz = get_timezone("Asia/Pyongyang", 1545397578);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Pyongyang", 1411668819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Pyongyang", 1478668362);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 30600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Pyongyang" << std::endl;
    }
    if (has_timezone("Asia/Qatar")) {
        {
            auto tz = get_timezone("Asia/Qatar", 1534839028);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Qatar", 1461245608);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Qatar", 1517429672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Qatar", 1507361114);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Qatar", 1438379352);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Qatar" << std::endl;
    }
    if (has_timezone("Asia/Qyzylorda")) {
        {
            auto tz = get_timezone("Asia/Qyzylorda", 1561397858);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Qyzylorda", 1518595747);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Qyzylorda", 1521675470);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Qyzylorda", 1519448159);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Qyzylorda", 1601249531);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Qyzylorda" << std::endl;
    }
    if (has_timezone("Asia/Rangoon")) {
        {
            auto tz = get_timezone("Asia/Rangoon", 1443244551);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Rangoon", 1579758822);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Rangoon", 1502208327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Rangoon", 1425880443);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Rangoon", 1527324593);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Rangoon" << std::endl;
    }
    if (has_timezone("Asia/Riyadh")) {
        {
            auto tz = get_timezone("Asia/Riyadh", 1495907734);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Riyadh", 1615382034);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Riyadh", 1432049437);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Riyadh", 1556861709);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Riyadh", 1630069680);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Riyadh" << std::endl;
    }
    if (has_timezone("Asia/Saigon")) {
        {
            auto tz = get_timezone("Asia/Saigon", 1472848666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Saigon", 1490222244);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Saigon", 1490292445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Saigon", 1534325796);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Saigon", 1620168923);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Saigon" << std::endl;
    }
    if (has_timezone("Asia/Sakhalin")) {
        {
            auto tz = get_timezone("Asia/Sakhalin", 1498471906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Sakhalin", 1498693349);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Sakhalin", 1466236716);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Sakhalin", 1619974801);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Sakhalin", 1451868475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Sakhalin" << std::endl;
    }
    if (has_timezone("Asia/Samarkand")) {
        {
            auto tz = get_timezone("Asia/Samarkand", 1428449946);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Samarkand", 1515945900);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Samarkand", 1507726398);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Samarkand", 1532567773);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Samarkand", 1536028968);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Samarkand" << std::endl;
    }
    if (has_timezone("Asia/Seoul")) {
        {
            auto tz = get_timezone("Asia/Seoul", 1581940873);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Seoul", 1500828696);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Seoul", 1489558772);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Seoul", 1421295151);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Seoul", 1549224723);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Seoul" << std::endl;
    }
    if (has_timezone("Asia/Shanghai")) {
        {
            auto tz = get_timezone("Asia/Shanghai", 1599211337);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Shanghai", 1555887719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Shanghai", 1440381495);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Shanghai", 1542918248);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Shanghai", 1494320563);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Shanghai" << std::endl;
    }
    if (has_timezone("Asia/Singapore")) {
        {
            auto tz = get_timezone("Asia/Singapore", 1557970043);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Singapore", 1564495093);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Singapore", 1500979887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Singapore", 1437321678);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Singapore", 1610741572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Singapore" << std::endl;
    }
    if (has_timezone("Asia/Srednekolymsk")) {
        {
            auto tz = get_timezone("Asia/Srednekolymsk", 1601020353);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Srednekolymsk", 1573365523);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Srednekolymsk", 1531633622);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Srednekolymsk", 1483396160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Asia/Srednekolymsk", 1541965812);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Srednekolymsk" << std::endl;
    }
    if (has_timezone("Asia/Taipei")) {
        {
            auto tz = get_timezone("Asia/Taipei", 1439157871);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Taipei", 1494049313);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Taipei", 1547535298);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Taipei", 1450817560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Taipei", 1496255799);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Taipei" << std::endl;
    }
    if (has_timezone("Asia/Tashkent")) {
        {
            auto tz = get_timezone("Asia/Tashkent", 1456129059);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Tashkent", 1563032573);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Tashkent", 1629048672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Tashkent", 1505632951);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Tashkent", 1596440180);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tashkent" << std::endl;
    }
    if (has_timezone("Asia/Tbilisi")) {
        {
            auto tz = get_timezone("Asia/Tbilisi", 1489471283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Tbilisi", 1609924299);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Tbilisi", 1567163408);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Tbilisi", 1468375021);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Tbilisi", 1526873597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tbilisi" << std::endl;
    }
    if (has_timezone("Asia/Tehran")) {
        {
            auto tz = get_timezone("Asia/Tehran", 1452110133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 12600);
        }
        {
            auto tz = get_timezone("Asia/Tehran", 1452258305);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 12600);
        }
        {
            auto tz = get_timezone("Asia/Tehran", 1597062096);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Tehran", 1532081368);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Asia/Tehran", 1594446185);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tehran" << std::endl;
    }
    if (has_timezone("Asia/Tel_Aviv")) {
        {
            auto tz = get_timezone("Asia/Tel_Aviv", 1528379828);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Tel_Aviv", 1412682054);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Tel_Aviv", 1497771634);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Asia/Tel_Aviv", 1484732293);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Asia/Tel_Aviv", 1411756908);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tel_Aviv" << std::endl;
    }
    if (has_timezone("Asia/Thimbu")) {
        {
            auto tz = get_timezone("Asia/Thimbu", 1444680149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimbu", 1561699029);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimbu", 1626430659);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimbu", 1584145932);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimbu", 1466465583);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Thimbu" << std::endl;
    }
    if (has_timezone("Asia/Thimphu")) {
        {
            auto tz = get_timezone("Asia/Thimphu", 1466928572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimphu", 1556029456);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimphu", 1479751550);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimphu", 1436946433);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Thimphu", 1534041491);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Thimphu" << std::endl;
    }
    if (has_timezone("Asia/Tokyo")) {
        {
            auto tz = get_timezone("Asia/Tokyo", 1617249483);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Tokyo", 1567954746);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Tokyo", 1435619841);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Tokyo", 1604132020);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Tokyo", 1520176158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tokyo" << std::endl;
    }
    if (has_timezone("Asia/Tomsk")) {
        {
            auto tz = get_timezone("Asia/Tomsk", 1415189261);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Tomsk", 1433968708);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Tomsk", 1427352104);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Tomsk", 1584436247);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Tomsk", 1431304553);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Tomsk" << std::endl;
    }
    if (has_timezone("Asia/Ujung_Pandang")) {
        {
            auto tz = get_timezone("Asia/Ujung_Pandang", 1445238425);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ujung_Pandang", 1600382868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ujung_Pandang", 1510950080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ujung_Pandang", 1535089307);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ujung_Pandang", 1557046167);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ujung_Pandang" << std::endl;
    }
    if (has_timezone("Asia/Ulaanbaatar")) {
        {
            auto tz = get_timezone("Asia/Ulaanbaatar", 1482585143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulaanbaatar", 1601211628);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulaanbaatar", 1489003598);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulaanbaatar", 1606781560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulaanbaatar", 1418415917);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ulaanbaatar" << std::endl;
    }
    if (has_timezone("Asia/Ulan_Bator")) {
        {
            auto tz = get_timezone("Asia/Ulan_Bator", 1512115962);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulan_Bator", 1534633638);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulan_Bator", 1424815488);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Asia/Ulan_Bator", 1473639782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Ulan_Bator", 1498011311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ulan_Bator" << std::endl;
    }
    if (has_timezone("Asia/Urumqi")) {
        {
            auto tz = get_timezone("Asia/Urumqi", 1470141940);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Urumqi", 1566433895);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Urumqi", 1592538934);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Urumqi", 1554776667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Asia/Urumqi", 1442319782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Urumqi" << std::endl;
    }
    if (has_timezone("Asia/Ust-Nera")) {
        {
            auto tz = get_timezone("Asia/Ust-Nera", 1480958307);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Ust-Nera", 1518292937);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Ust-Nera", 1581102233);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Ust-Nera", 1444627092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Ust-Nera", 1428383615);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Ust-Nera" << std::endl;
    }
    if (has_timezone("Asia/Vientiane")) {
        {
            auto tz = get_timezone("Asia/Vientiane", 1547868501);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Vientiane", 1602739247);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Vientiane", 1586949119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Vientiane", 1426250729);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Asia/Vientiane", 1542067290);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Vientiane" << std::endl;
    }
    if (has_timezone("Asia/Vladivostok")) {
        {
            auto tz = get_timezone("Asia/Vladivostok", 1548797404);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Vladivostok", 1512071114);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Vladivostok", 1559612873);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Vladivostok", 1463146648);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Vladivostok", 1522254940);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Vladivostok" << std::endl;
    }
    if (has_timezone("Asia/Yakutsk")) {
        {
            auto tz = get_timezone("Asia/Yakutsk", 1412991043);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Yakutsk", 1513224593);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Yakutsk", 1520798374);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Asia/Yakutsk", 1413472780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Asia/Yakutsk", 1617991502);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yakutsk" << std::endl;
    }
    if (has_timezone("Asia/Yangon")) {
        {
            auto tz = get_timezone("Asia/Yangon", 1565674436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Yangon", 1444222970);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Yangon", 1518691672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Yangon", 1629259403);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Asia/Yangon", 1466192919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yangon" << std::endl;
    }
    if (has_timezone("Asia/Yekaterinburg")) {
        {
            auto tz = get_timezone("Asia/Yekaterinburg", 1444865736);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Yekaterinburg", 1435950531);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Yekaterinburg", 1610098395);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Yekaterinburg", 1528027369);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Asia/Yekaterinburg", 1430022581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yekaterinburg" << std::endl;
    }
    if (has_timezone("Asia/Yerevan")) {
        {
            auto tz = get_timezone("Asia/Yerevan", 1439785032);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Yerevan", 1510841147);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Yerevan", 1612874377);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Yerevan", 1497038845);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Asia/Yerevan", 1617283073);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Asia/Yerevan" << std::endl;
    }
    if (has_timezone("Atlantic/Azores")) {
        {
            auto tz = get_timezone("Atlantic/Azores", 1526658739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Azores", 1545212098);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Azores", 1517245835);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Azores", 1588397537);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Azores", 1436310547);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Azores" << std::endl;
    }
    if (has_timezone("Atlantic/Bermuda")) {
        {
            auto tz = get_timezone("Atlantic/Bermuda", 1570718420);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Atlantic/Bermuda", 1510736199);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Atlantic/Bermuda", 1542044898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Atlantic/Bermuda", 1447660277);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Atlantic/Bermuda", 1572587780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Bermuda" << std::endl;
    }
    if (has_timezone("Atlantic/Canary")) {
        {
            auto tz = get_timezone("Atlantic/Canary", 1508029957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Canary", 1490447399);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Canary", 1466994375);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Canary", 1525444058);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Canary", 1449526960);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Canary" << std::endl;
    }
    if (has_timezone("Atlantic/Cape_Verde")) {
        {
            auto tz = get_timezone("Atlantic/Cape_Verde", 1466957199);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Cape_Verde", 1558154394);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Cape_Verde", 1500233392);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Cape_Verde", 1415253831);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Atlantic/Cape_Verde", 1510029553);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Cape_Verde" << std::endl;
    }
    if (has_timezone("Atlantic/Faeroe")) {
        {
            auto tz = get_timezone("Atlantic/Faeroe", 1423591277);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Faeroe", 1607824498);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Faeroe", 1592436615);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Faeroe", 1429931637);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Faeroe", 1591013979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Faeroe" << std::endl;
    }
    if (has_timezone("Atlantic/Faroe")) {
        {
            auto tz = get_timezone("Atlantic/Faroe", 1517367061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Faroe", 1425426984);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Faroe", 1620248348);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Faroe", 1551996346);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Faroe", 1558304366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Faroe" << std::endl;
    }
    if (has_timezone("Atlantic/Jan_Mayen")) {
        {
            auto tz = get_timezone("Atlantic/Jan_Mayen", 1566230744);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Atlantic/Jan_Mayen", 1535686266);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Atlantic/Jan_Mayen", 1577023371);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Jan_Mayen", 1463556269);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Atlantic/Jan_Mayen", 1604783868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Jan_Mayen" << std::endl;
    }
    if (has_timezone("Atlantic/Madeira")) {
        {
            auto tz = get_timezone("Atlantic/Madeira", 1576063585);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Madeira", 1431733894);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Atlantic/Madeira", 1604623898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Madeira", 1512116510);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Madeira", 1627431834);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Madeira" << std::endl;
    }
    if (has_timezone("Atlantic/Reykjavik")) {
        {
            auto tz = get_timezone("Atlantic/Reykjavik", 1583316745);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Reykjavik", 1596535657);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Reykjavik", 1585852390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Reykjavik", 1457239462);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/Reykjavik", 1419319020);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Reykjavik" << std::endl;
    }
    if (has_timezone("Atlantic/South_Georgia")) {
        {
            auto tz = get_timezone("Atlantic/South_Georgia", 1416796377);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Atlantic/South_Georgia", 1488414336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Atlantic/South_Georgia", 1511565655);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Atlantic/South_Georgia", 1538412447);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Atlantic/South_Georgia", 1595797266);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/South_Georgia" << std::endl;
    }
    if (has_timezone("Atlantic/St_Helena")) {
        {
            auto tz = get_timezone("Atlantic/St_Helena", 1592927905);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/St_Helena", 1579657837);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/St_Helena", 1572379031);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/St_Helena", 1561397395);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Atlantic/St_Helena", 1576368740);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/St_Helena" << std::endl;
    }
    if (has_timezone("Atlantic/Stanley")) {
        {
            auto tz = get_timezone("Atlantic/Stanley", 1479687235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Atlantic/Stanley", 1598040119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Atlantic/Stanley", 1417604108);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Atlantic/Stanley", 1463146545);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Atlantic/Stanley", 1586309869);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Atlantic/Stanley" << std::endl;
    }
    if (has_timezone("Australia/ACT")) {
        {
            auto tz = get_timezone("Australia/ACT", 1589563005);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/ACT", 1438851535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/ACT", 1604203444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/ACT", 1600156146);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/ACT", 1434049192);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/ACT" << std::endl;
    }
    if (has_timezone("Australia/Adelaide")) {
        {
            auto tz = get_timezone("Australia/Adelaide", 1597134990);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Adelaide", 1591841974);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Adelaide", 1547033242);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/Adelaide", 1575496716);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/Adelaide", 1559391725);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Adelaide" << std::endl;
    }
    if (has_timezone("Australia/Brisbane")) {
        {
            auto tz = get_timezone("Australia/Brisbane", 1587953352);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Brisbane", 1577153862);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Brisbane", 1532299220);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Brisbane", 1422356894);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Brisbane", 1469012402);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Brisbane" << std::endl;
    }
    if (has_timezone("Australia/Broken_Hill")) {
        {
            auto tz = get_timezone("Australia/Broken_Hill", 1617194112);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/Broken_Hill", 1587184195);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Broken_Hill", 1503204687);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Broken_Hill", 1470472329);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Broken_Hill", 1527393698);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Broken_Hill" << std::endl;
    }
    if (has_timezone("Australia/Canberra")) {
        {
            auto tz = get_timezone("Australia/Canberra", 1449681513);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Canberra", 1585069717);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Canberra", 1433983805);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Canberra", 1623397645);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Canberra", 1488075331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Canberra" << std::endl;
    }
    if (has_timezone("Australia/Currie")) {
        {
            auto tz = get_timezone("Australia/Currie", 1515836442);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Currie", 1477668049);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Currie", 1609474235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Currie", 1500365004);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Currie", 1588169021);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Currie" << std::endl;
    }
    if (has_timezone("Australia/Darwin")) {
        {
            auto tz = get_timezone("Australia/Darwin", 1452120254);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Darwin", 1527763966);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Darwin", 1410843739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Darwin", 1483701158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Darwin", 1540627982);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Darwin" << std::endl;
    }
    if (has_timezone("Australia/Eucla")) {
        {
            auto tz = get_timezone("Australia/Eucla", 1594474223);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 31500);
        }
        {
            auto tz = get_timezone("Australia/Eucla", 1608029370);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 31500);
        }
        {
            auto tz = get_timezone("Australia/Eucla", 1574925108);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 31500);
        }
        {
            auto tz = get_timezone("Australia/Eucla", 1574806460);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 31500);
        }
        {
            auto tz = get_timezone("Australia/Eucla", 1602455921);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 31500);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Eucla" << std::endl;
    }
    if (has_timezone("Australia/Hobart")) {
        {
            auto tz = get_timezone("Australia/Hobart", 1524918702);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Hobart", 1593217011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Hobart", 1499085868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Hobart", 1539169715);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Hobart", 1601139304);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Hobart" << std::endl;
    }
    if (has_timezone("Australia/LHI")) {
        {
            auto tz = get_timezone("Australia/LHI", 1412048694);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/LHI", 1505068762);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/LHI", 1507685726);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/LHI", 1518902558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/LHI", 1462161948);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/LHI" << std::endl;
    }
    if (has_timezone("Australia/Lindeman")) {
        {
            auto tz = get_timezone("Australia/Lindeman", 1557146614);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Lindeman", 1413365271);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Lindeman", 1531899175);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Lindeman", 1565469884);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Lindeman", 1562473835);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Lindeman" << std::endl;
    }
    if (has_timezone("Australia/Lord_Howe")) {
        {
            auto tz = get_timezone("Australia/Lord_Howe", 1573137166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Lord_Howe", 1490385326);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Lord_Howe", 1486792897);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Lord_Howe", 1626099335);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/Lord_Howe", 1492872957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Lord_Howe" << std::endl;
    }
    if (has_timezone("Australia/Melbourne")) {
        {
            auto tz = get_timezone("Australia/Melbourne", 1536978047);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Melbourne", 1597943495);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Melbourne", 1538394474);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Melbourne", 1624990933);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Melbourne", 1500667150);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Melbourne" << std::endl;
    }
    if (has_timezone("Australia/NSW")) {
        {
            auto tz = get_timezone("Australia/NSW", 1494014327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/NSW", 1538758201);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/NSW", 1597384591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/NSW", 1563556433);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/NSW", 1595202616);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/NSW" << std::endl;
    }
    if (has_timezone("Australia/North")) {
        {
            auto tz = get_timezone("Australia/North", 1618752920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/North", 1571196229);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/North", 1620151712);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/North", 1567565709);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/North", 1541103361);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/North" << std::endl;
    }
    if (has_timezone("Australia/Perth")) {
        {
            auto tz = get_timezone("Australia/Perth", 1440207796);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/Perth", 1603883435);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/Perth", 1629107116);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/Perth", 1501478041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/Perth", 1413534980);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Perth" << std::endl;
    }
    if (has_timezone("Australia/Queensland")) {
        {
            auto tz = get_timezone("Australia/Queensland", 1567728460);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Queensland", 1451368166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Queensland", 1481961346);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Queensland", 1491994181);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Queensland", 1528919168);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Queensland" << std::endl;
    }
    if (has_timezone("Australia/South")) {
        {
            auto tz = get_timezone("Australia/South", 1532400115);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/South", 1523522424);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/South", 1576301915);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/South", 1603890611);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/South", 1551106759);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/South" << std::endl;
    }
    if (has_timezone("Australia/Sydney")) {
        {
            auto tz = get_timezone("Australia/Sydney", 1516826136);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Sydney", 1615826214);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Sydney", 1556626705);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Sydney", 1606340185);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Sydney", 1588325318);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Sydney" << std::endl;
    }
    if (has_timezone("Australia/Tasmania")) {
        {
            auto tz = get_timezone("Australia/Tasmania", 1463402625);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Tasmania", 1535446349);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Tasmania", 1489798388);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Australia/Tasmania", 1623090734);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Tasmania", 1448595310);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Tasmania" << std::endl;
    }
    if (has_timezone("Australia/Victoria")) {
        {
            auto tz = get_timezone("Australia/Victoria", 1530399631);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Victoria", 1566033061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Victoria", 1537296458);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Victoria", 1556873561);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Australia/Victoria", 1614489912);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Victoria" << std::endl;
    }
    if (has_timezone("Australia/West")) {
        {
            auto tz = get_timezone("Australia/West", 1530008571);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/West", 1470361823);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/West", 1571301546);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/West", 1598899344);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Australia/West", 1620391525);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/West" << std::endl;
    }
    if (has_timezone("Australia/Yancowinna")) {
        {
            auto tz = get_timezone("Australia/Yancowinna", 1437231055);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Yancowinna", 1437738965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Yancowinna", 1498594235);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 34200);
        }
        {
            auto tz = get_timezone("Australia/Yancowinna", 1552883121);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
        {
            auto tz = get_timezone("Australia/Yancowinna", 1425462014);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 37800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Australia/Yancowinna" << std::endl;
    }
    if (has_timezone("Brazil/Acre")) {
        {
            auto tz = get_timezone("Brazil/Acre", 1462595335);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Brazil/Acre", 1543955672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Brazil/Acre", 1470888258);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Brazil/Acre", 1420639032);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Brazil/Acre", 1514999526);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Brazil/Acre" << std::endl;
    }
    if (has_timezone("Brazil/DeNoronha")) {
        {
            auto tz = get_timezone("Brazil/DeNoronha", 1534702392);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/DeNoronha", 1424140591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/DeNoronha", 1471685250);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/DeNoronha", 1495489470);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/DeNoronha", 1469224420);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Brazil/DeNoronha" << std::endl;
    }
    if (has_timezone("Brazil/East")) {
        {
            auto tz = get_timezone("Brazil/East", 1480277821);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/East", 1524370022);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Brazil/East", 1417512335);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/East", 1545243564);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Brazil/East", 1449614071);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Brazil/East" << std::endl;
    }
    if (has_timezone("Brazil/West")) {
        {
            auto tz = get_timezone("Brazil/West", 1545732717);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Brazil/West", 1630420485);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Brazil/West", 1458353378);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Brazil/West", 1617280102);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Brazil/West", 1546941119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Brazil/West" << std::endl;
    }
    if (has_timezone("CET")) {
        {
            auto tz = get_timezone("CET", 1438969550);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("CET", 1506104692);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("CET", 1521672025);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("CET", 1418752888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("CET", 1439428299);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: CET" << std::endl;
    }
    if (has_timezone("CST6CDT")) {
        {
            auto tz = get_timezone("CST6CDT", 1454010381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("CST6CDT", 1549959322);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("CST6CDT", 1534381223);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("CST6CDT", 1577871813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("CST6CDT", 1561331204);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: CST6CDT" << std::endl;
    }
    if (has_timezone("Canada/Atlantic")) {
        {
            auto tz = get_timezone("Canada/Atlantic", 1596748911);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Canada/Atlantic", 1478434018);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Canada/Atlantic", 1503527772);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Canada/Atlantic", 1516188427);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Canada/Atlantic", 1476456311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Atlantic" << std::endl;
    }
    if (has_timezone("Canada/Central")) {
        {
            auto tz = get_timezone("Canada/Central", 1529498316);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Canada/Central", 1458603937);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Canada/Central", 1450241403);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Central", 1464794536);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Canada/Central", 1482850539);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Central" << std::endl;
    }
    if (has_timezone("Canada/Eastern")) {
        {
            auto tz = get_timezone("Canada/Eastern", 1583219752);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Canada/Eastern", 1410813236);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Canada/Eastern", 1578785717);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Canada/Eastern", 1526889572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Canada/Eastern", 1498702730);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Eastern" << std::endl;
    }
    if (has_timezone("Canada/Mountain")) {
        {
            auto tz = get_timezone("Canada/Mountain", 1565305078);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Mountain", 1585568534);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Mountain", 1623813494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Mountain", 1422642969);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Mountain", 1545907102);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Mountain" << std::endl;
    }
    if (has_timezone("Canada/Newfoundland")) {
        {
            auto tz = get_timezone("Canada/Newfoundland", 1611430167);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -12600);
        }
        {
            auto tz = get_timezone("Canada/Newfoundland", 1525174133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -9000);
        }
        {
            auto tz = get_timezone("Canada/Newfoundland", 1616012110);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -9000);
        }
        {
            auto tz = get_timezone("Canada/Newfoundland", 1438796918);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -9000);
        }
        {
            auto tz = get_timezone("Canada/Newfoundland", 1420627521);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -12600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Newfoundland" << std::endl;
    }
    if (has_timezone("Canada/Pacific")) {
        {
            auto tz = get_timezone("Canada/Pacific", 1596148995);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Pacific", 1582922318);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Canada/Pacific", 1429273617);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Pacific", 1411844618);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Pacific", 1497463724);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Pacific" << std::endl;
    }
    if (has_timezone("Canada/Saskatchewan")) {
        {
            auto tz = get_timezone("Canada/Saskatchewan", 1434054143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Saskatchewan", 1581797289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Saskatchewan", 1425259976);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Saskatchewan", 1466909566);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Canada/Saskatchewan", 1412498012);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Saskatchewan" << std::endl;
    }
    if (has_timezone("Canada/Yukon")) {
        {
            auto tz = get_timezone("Canada/Yukon", 1623486127);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Yukon", 1619665451);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Yukon", 1576025738);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Canada/Yukon", 1462529411);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Canada/Yukon", 1522876476);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Canada/Yukon" << std::endl;
    }
    if (has_timezone("Chile/Continental")) {
        {
            auto tz = get_timezone("Chile/Continental", 1475347329);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Chile/Continental", 1457844133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Chile/Continental", 1578562247);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Chile/Continental", 1430186277);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Chile/Continental", 1459325657);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Chile/Continental" << std::endl;
    }
    if (has_timezone("Chile/EasterIsland")) {
        {
            auto tz = get_timezone("Chile/EasterIsland", 1527068169);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Chile/EasterIsland", 1598288998);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Chile/EasterIsland", 1511655666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Chile/EasterIsland", 1627685131);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Chile/EasterIsland", 1420776503);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Chile/EasterIsland" << std::endl;
    }
    if (has_timezone("Cuba")) {
        {
            auto tz = get_timezone("Cuba", 1459396695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Cuba", 1550104073);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Cuba", 1506747164);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Cuba", 1575156203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Cuba", 1486425355);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Cuba" << std::endl;
    }
    if (has_timezone("EET")) {
        {
            auto tz = get_timezone("EET", 1494630191);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("EET", 1606373667);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("EET", 1587347471);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("EET", 1480188672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("EET", 1580767397);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: EET" << std::endl;
    }
    if (has_timezone("EST")) {
        {
            auto tz = get_timezone("EST", 1413586145);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("EST", 1427481456);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("EST", 1499409558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("EST", 1462753265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("EST", 1595226269);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: EST" << std::endl;
    }
    if (has_timezone("EST5EDT")) {
        {
            auto tz = get_timezone("EST5EDT", 1558552143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("EST5EDT", 1556752132);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("EST5EDT", 1533965000);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("EST5EDT", 1580648495);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("EST5EDT", 1551979713);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: EST5EDT" << std::endl;
    }
    if (has_timezone("Egypt")) {
        {
            auto tz = get_timezone("Egypt", 1625533149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Egypt", 1551647937);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Egypt", 1549263051);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Egypt", 1436817401);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Egypt", 1508696747);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Egypt" << std::endl;
    }
    if (has_timezone("Eire")) {
        {
            auto tz = get_timezone("Eire", 1563702844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Eire", 1598789996);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Eire", 1532975377);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Eire", 1567293202);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Eire", 1497857372);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Eire" << std::endl;
    }
    if (has_timezone("Etc/GMT")) {
        {
            auto tz = get_timezone("Etc/GMT", 1582597858);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT", 1529347286);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT", 1517976994);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT", 1565666934);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT", 1448271574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT" << std::endl;
    }
    if (has_timezone("Etc/GMT+0")) {
        {
            auto tz = get_timezone("Etc/GMT+0", 1471270541);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT+0", 1521519456);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT+0", 1501004256);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT+0", 1624568919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT+0", 1559690543);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+0" << std::endl;
    }
    if (has_timezone("Etc/GMT+1")) {
        {
            auto tz = get_timezone("Etc/GMT+1", 1470669607);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Etc/GMT+1", 1525323385);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Etc/GMT+1", 1451610164);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Etc/GMT+1", 1413956422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
        {
            auto tz = get_timezone("Etc/GMT+1", 1422100741);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+1" << std::endl;
    }
    if (has_timezone("Etc/GMT+10")) {
        {
            auto tz = get_timezone("Etc/GMT+10", 1623706900);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Etc/GMT+10", 1580492040);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Etc/GMT+10", 1564284387);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Etc/GMT+10", 1516153700);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Etc/GMT+10", 1616570421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+10" << std::endl;
    }
    if (has_timezone("Etc/GMT+11")) {
        {
            auto tz = get_timezone("Etc/GMT+11", 1565374512);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Etc/GMT+11", 1497158898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Etc/GMT+11", 1488449876);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Etc/GMT+11", 1493489201);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Etc/GMT+11", 1474314429);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+11" << std::endl;
    }
    if (has_timezone("Etc/GMT+12")) {
        {
            auto tz = get_timezone("Etc/GMT+12", 1555621760);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -43200);
        }
        {
            auto tz = get_timezone("Etc/GMT+12", 1612207466);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -43200);
        }
        {
            auto tz = get_timezone("Etc/GMT+12", 1597115928);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -43200);
        }
        {
            auto tz = get_timezone("Etc/GMT+12", 1431519494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -43200);
        }
        {
            auto tz = get_timezone("Etc/GMT+12", 1578161687);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+12" << std::endl;
    }
    if (has_timezone("Etc/GMT+2")) {
        {
            auto tz = get_timezone("Etc/GMT+2", 1528663714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Etc/GMT+2", 1627565637);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Etc/GMT+2", 1508485080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Etc/GMT+2", 1442460866);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
        {
            auto tz = get_timezone("Etc/GMT+2", 1508959920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+2" << std::endl;
    }
    if (has_timezone("Etc/GMT+3")) {
        {
            auto tz = get_timezone("Etc/GMT+3", 1539121525);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Etc/GMT+3", 1452105107);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Etc/GMT+3", 1552799325);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Etc/GMT+3", 1573026813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
        {
            auto tz = get_timezone("Etc/GMT+3", 1580746542);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+3" << std::endl;
    }
    if (has_timezone("Etc/GMT+4")) {
        {
            auto tz = get_timezone("Etc/GMT+4", 1426496401);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Etc/GMT+4", 1526335588);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Etc/GMT+4", 1620108155);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Etc/GMT+4", 1475277616);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("Etc/GMT+4", 1619937468);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+4" << std::endl;
    }
    if (has_timezone("Etc/GMT+5")) {
        {
            auto tz = get_timezone("Etc/GMT+5", 1590117565);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Etc/GMT+5", 1488493901);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Etc/GMT+5", 1499910336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Etc/GMT+5", 1583476648);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Etc/GMT+5", 1558432121);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+5" << std::endl;
    }
    if (has_timezone("Etc/GMT+6")) {
        {
            auto tz = get_timezone("Etc/GMT+6", 1629190856);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Etc/GMT+6", 1588770858);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Etc/GMT+6", 1543707901);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Etc/GMT+6", 1494970581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Etc/GMT+6", 1478303527);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+6" << std::endl;
    }
    if (has_timezone("Etc/GMT+7")) {
        {
            auto tz = get_timezone("Etc/GMT+7", 1480723600);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Etc/GMT+7", 1449124341);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Etc/GMT+7", 1542338117);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Etc/GMT+7", 1545341380);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Etc/GMT+7", 1562907584);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+7" << std::endl;
    }
    if (has_timezone("Etc/GMT+8")) {
        {
            auto tz = get_timezone("Etc/GMT+8", 1459928435);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Etc/GMT+8", 1533190212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Etc/GMT+8", 1529385366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Etc/GMT+8", 1420116973);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Etc/GMT+8", 1464630201);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+8" << std::endl;
    }
    if (has_timezone("Etc/GMT+9")) {
        {
            auto tz = get_timezone("Etc/GMT+9", 1521471041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Etc/GMT+9", 1472271834);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Etc/GMT+9", 1625059748);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Etc/GMT+9", 1529802755);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Etc/GMT+9", 1618181294);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT+9" << std::endl;
    }
    if (has_timezone("Etc/GMT-0")) {
        {
            auto tz = get_timezone("Etc/GMT-0", 1478181587);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT-0", 1588721613);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT-0", 1544027080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT-0", 1545532042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT-0", 1574702243);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-0" << std::endl;
    }
    if (has_timezone("Etc/GMT-1")) {
        {
            auto tz = get_timezone("Etc/GMT-1", 1482713306);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Etc/GMT-1", 1487641257);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Etc/GMT-1", 1499927383);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Etc/GMT-1", 1566644557);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Etc/GMT-1", 1484382919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-1" << std::endl;
    }
    if (has_timezone("Etc/GMT-10")) {
        {
            auto tz = get_timezone("Etc/GMT-10", 1548936033);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Etc/GMT-10", 1443177212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Etc/GMT-10", 1486269613);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Etc/GMT-10", 1460357609);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Etc/GMT-10", 1492876056);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-10" << std::endl;
    }
    if (has_timezone("Etc/GMT-11")) {
        {
            auto tz = get_timezone("Etc/GMT-11", 1536555446);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Etc/GMT-11", 1625069103);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Etc/GMT-11", 1422653143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Etc/GMT-11", 1590645246);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Etc/GMT-11", 1630448858);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-11" << std::endl;
    }
    if (has_timezone("Etc/GMT-12")) {
        {
            auto tz = get_timezone("Etc/GMT-12", 1597045079);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Etc/GMT-12", 1502093859);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Etc/GMT-12", 1562692542);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Etc/GMT-12", 1610783016);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Etc/GMT-12", 1583090160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-12" << std::endl;
    }
    if (has_timezone("Etc/GMT-13")) {
        {
            auto tz = get_timezone("Etc/GMT-13", 1530719495);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Etc/GMT-13", 1603740708);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Etc/GMT-13", 1486096531);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Etc/GMT-13", 1537440678);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Etc/GMT-13", 1469827453);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-13" << std::endl;
    }
    if (has_timezone("Etc/GMT-14")) {
        {
            auto tz = get_timezone("Etc/GMT-14", 1518348695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Etc/GMT-14", 1528967343);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Etc/GMT-14", 1460722814);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Etc/GMT-14", 1625291893);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Etc/GMT-14", 1460147484);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-14" << std::endl;
    }
    if (has_timezone("Etc/GMT-2")) {
        {
            auto tz = get_timezone("Etc/GMT-2", 1412731254);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Etc/GMT-2", 1565810244);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Etc/GMT-2", 1600641744);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Etc/GMT-2", 1502765056);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Etc/GMT-2", 1580460357);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-2" << std::endl;
    }
    if (has_timezone("Etc/GMT-3")) {
        {
            auto tz = get_timezone("Etc/GMT-3", 1441339678);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Etc/GMT-3", 1511285108);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Etc/GMT-3", 1616199686);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Etc/GMT-3", 1528383857);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Etc/GMT-3", 1476773440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-3" << std::endl;
    }
    if (has_timezone("Etc/GMT-4")) {
        {
            auto tz = get_timezone("Etc/GMT-4", 1574966427);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Etc/GMT-4", 1528344504);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Etc/GMT-4", 1597065189);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Etc/GMT-4", 1415654455);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Etc/GMT-4", 1437390459);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-4" << std::endl;
    }
    if (has_timezone("Etc/GMT-5")) {
        {
            auto tz = get_timezone("Etc/GMT-5", 1432453536);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Etc/GMT-5", 1418314957);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Etc/GMT-5", 1492311954);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Etc/GMT-5", 1476215985);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Etc/GMT-5", 1515334471);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-5" << std::endl;
    }
    if (has_timezone("Etc/GMT-6")) {
        {
            auto tz = get_timezone("Etc/GMT-6", 1523722738);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Etc/GMT-6", 1444411066);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Etc/GMT-6", 1616568377);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Etc/GMT-6", 1615525438);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Etc/GMT-6", 1566631758);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-6" << std::endl;
    }
    if (has_timezone("Etc/GMT-7")) {
        {
            auto tz = get_timezone("Etc/GMT-7", 1435681541);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Etc/GMT-7", 1618817386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Etc/GMT-7", 1484191175);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Etc/GMT-7", 1445644906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Etc/GMT-7", 1428169576);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-7" << std::endl;
    }
    if (has_timezone("Etc/GMT-8")) {
        {
            auto tz = get_timezone("Etc/GMT-8", 1412454814);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Etc/GMT-8", 1444219868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Etc/GMT-8", 1555486773);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Etc/GMT-8", 1450176076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Etc/GMT-8", 1486326576);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-8" << std::endl;
    }
    if (has_timezone("Etc/GMT-9")) {
        {
            auto tz = get_timezone("Etc/GMT-9", 1589494819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Etc/GMT-9", 1532765146);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Etc/GMT-9", 1464482127);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Etc/GMT-9", 1511325275);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Etc/GMT-9", 1513400416);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT-9" << std::endl;
    }
    if (has_timezone("Etc/GMT0")) {
        {
            auto tz = get_timezone("Etc/GMT0", 1617039073);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT0", 1531524440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT0", 1628276213);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT0", 1598663119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/GMT0", 1567064747);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/GMT0" << std::endl;
    }
    if (has_timezone("Etc/Greenwich")) {
        {
            auto tz = get_timezone("Etc/Greenwich", 1516668919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Greenwich", 1580460025);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Greenwich", 1623923559);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Greenwich", 1595190812);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Greenwich", 1441949742);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/Greenwich" << std::endl;
    }
    if (has_timezone("Etc/UCT")) {
        {
            auto tz = get_timezone("Etc/UCT", 1627456624);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UCT", 1609645389);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UCT", 1580088106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UCT", 1538728558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UCT", 1610108744);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/UCT" << std::endl;
    }
    if (has_timezone("Etc/UTC")) {
        {
            auto tz = get_timezone("Etc/UTC", 1592848445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UTC", 1451296614);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UTC", 1613612135);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UTC", 1571044413);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/UTC", 1547319730);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/UTC" << std::endl;
    }
    if (has_timezone("Etc/Universal")) {
        {
            auto tz = get_timezone("Etc/Universal", 1601973116);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Universal", 1583074833);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Universal", 1511711963);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Universal", 1460038007);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Universal", 1512899315);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/Universal" << std::endl;
    }
    if (has_timezone("Etc/Zulu")) {
        {
            auto tz = get_timezone("Etc/Zulu", 1569513328);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Zulu", 1474787407);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Zulu", 1606007258);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Zulu", 1429017574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Etc/Zulu", 1426839849);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Etc/Zulu" << std::endl;
    }
    if (has_timezone("Europe/Amsterdam")) {
        {
            auto tz = get_timezone("Europe/Amsterdam", 1620012200);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Amsterdam", 1583334232);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Amsterdam", 1617557579);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Amsterdam", 1437808930);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Amsterdam", 1591418240);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Amsterdam" << std::endl;
    }
    if (has_timezone("Europe/Andorra")) {
        {
            auto tz = get_timezone("Europe/Andorra", 1448398124);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Andorra", 1594376846);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Andorra", 1435674140);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Andorra", 1514344694);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Andorra", 1500670870);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Andorra" << std::endl;
    }
    if (has_timezone("Europe/Astrakhan")) {
        {
            auto tz = get_timezone("Europe/Astrakhan", 1558949331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Astrakhan", 1498483627);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Astrakhan", 1443882160);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Astrakhan", 1507990861);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Astrakhan", 1409835422);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Astrakhan" << std::endl;
    }
    if (has_timezone("Europe/Athens")) {
        {
            auto tz = get_timezone("Europe/Athens", 1570137612);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Athens", 1430038673);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Athens", 1615028830);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Athens", 1497804358);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Athens", 1442789621);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Athens" << std::endl;
    }
    if (has_timezone("Europe/Belfast")) {
        {
            auto tz = get_timezone("Europe/Belfast", 1513442163);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Belfast", 1588239293);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Belfast", 1485562638);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Belfast", 1575826680);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Belfast", 1449454558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Belfast" << std::endl;
    }
    if (has_timezone("Europe/Belgrade")) {
        {
            auto tz = get_timezone("Europe/Belgrade", 1542956661);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Belgrade", 1601692852);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Belgrade", 1544786269);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Belgrade", 1566081271);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Belgrade", 1538343323);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Belgrade" << std::endl;
    }
    if (has_timezone("Europe/Berlin")) {
        {
            auto tz = get_timezone("Europe/Berlin", 1525478413);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Berlin", 1559386891);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Berlin", 1524340348);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Berlin", 1615911334);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Berlin", 1477312120);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Berlin" << std::endl;
    }
    if (has_timezone("Europe/Bratislava")) {
        {
            auto tz = get_timezone("Europe/Bratislava", 1601145725);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Bratislava", 1557815615);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Bratislava", 1484706340);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Bratislava", 1521773644);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Bratislava", 1520060733);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Bratislava" << std::endl;
    }
    if (has_timezone("Europe/Brussels")) {
        {
            auto tz = get_timezone("Europe/Brussels", 1463470664);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Brussels", 1480850570);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Brussels", 1565143484);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Brussels", 1600238487);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Brussels", 1622933515);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Brussels" << std::endl;
    }
    if (has_timezone("Europe/Bucharest")) {
        {
            auto tz = get_timezone("Europe/Bucharest", 1608031316);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Bucharest", 1595152078);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Bucharest", 1502588396);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Bucharest", 1562848840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Bucharest", 1542720267);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Bucharest" << std::endl;
    }
    if (has_timezone("Europe/Budapest")) {
        {
            auto tz = get_timezone("Europe/Budapest", 1492491005);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Budapest", 1611999288);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Budapest", 1470386265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Budapest", 1550586801);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Budapest", 1447861081);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Budapest" << std::endl;
    }
    if (has_timezone("Europe/Busingen")) {
        {
            auto tz = get_timezone("Europe/Busingen", 1612363081);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Busingen", 1524014293);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Busingen", 1505741664);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Busingen", 1441241234);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Busingen", 1544269974);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Busingen" << std::endl;
    }
    if (has_timezone("Europe/Chisinau")) {
        {
            auto tz = get_timezone("Europe/Chisinau", 1580770557);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Chisinau", 1467798895);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Chisinau", 1601775556);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Chisinau", 1606952774);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Chisinau", 1611316511);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Chisinau" << std::endl;
    }
    if (has_timezone("Europe/Copenhagen")) {
        {
            auto tz = get_timezone("Europe/Copenhagen", 1529672842);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Copenhagen", 1411119593);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Copenhagen", 1612265911);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Copenhagen", 1522876054);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Copenhagen", 1490434914);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Copenhagen" << std::endl;
    }
    if (has_timezone("Europe/Dublin")) {
        {
            auto tz = get_timezone("Europe/Dublin", 1610615016);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Dublin", 1413495890);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Dublin", 1509300232);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Dublin", 1476209587);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Dublin", 1502302371);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Dublin" << std::endl;
    }
    if (has_timezone("Europe/Gibraltar")) {
        {
            auto tz = get_timezone("Europe/Gibraltar", 1580792396);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Gibraltar", 1566981584);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Gibraltar", 1536476512);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Gibraltar", 1524874485);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Gibraltar", 1565840712);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Gibraltar" << std::endl;
    }
    if (has_timezone("Europe/Guernsey")) {
        {
            auto tz = get_timezone("Europe/Guernsey", 1490297068);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Guernsey", 1532775007);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Guernsey", 1608031804);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Guernsey", 1519445580);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Guernsey", 1558981060);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Guernsey" << std::endl;
    }
    if (has_timezone("Europe/Helsinki")) {
        {
            auto tz = get_timezone("Europe/Helsinki", 1420246012);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Helsinki", 1506147945);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Helsinki", 1564896765);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Helsinki", 1622591604);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Helsinki", 1526104919);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Helsinki" << std::endl;
    }
    if (has_timezone("Europe/Isle_of_Man")) {
        {
            auto tz = get_timezone("Europe/Isle_of_Man", 1609676270);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Isle_of_Man", 1614775263);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Isle_of_Man", 1551263188);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Isle_of_Man", 1565681126);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Isle_of_Man", 1466894288);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Isle_of_Man" << std::endl;
    }
    if (has_timezone("Europe/Istanbul")) {
        {
            auto tz = get_timezone("Europe/Istanbul", 1496074269);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Istanbul", 1590956320);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Istanbul", 1620035695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Istanbul", 1555167496);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Istanbul", 1575389896);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Istanbul" << std::endl;
    }
    if (has_timezone("Europe/Jersey")) {
        {
            auto tz = get_timezone("Europe/Jersey", 1616847623);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Jersey", 1473481852);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Jersey", 1440357432);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Jersey", 1488634204);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Jersey", 1464125446);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Jersey" << std::endl;
    }
    if (has_timezone("Europe/Kaliningrad")) {
        {
            auto tz = get_timezone("Europe/Kaliningrad", 1625788525);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Kaliningrad", 1433594960);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Kaliningrad", 1627040920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Kaliningrad", 1551056040);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Kaliningrad", 1585576866);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kaliningrad" << std::endl;
    }
    if (has_timezone("Europe/Kiev")) {
        {
            auto tz = get_timezone("Europe/Kiev", 1410746912);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kiev", 1524688972);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kiev", 1502761443);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kiev", 1575025225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Kiev", 1539683819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kiev" << std::endl;
    }
    if (has_timezone("Europe/Kirov")) {
        {
            auto tz = get_timezone("Europe/Kirov", 1592437968);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kirov", 1431164989);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kirov", 1534314308);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kirov", 1557179538);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Kirov", 1610185602);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Kirov" << std::endl;
    }
    if (has_timezone("Europe/Lisbon")) {
        {
            auto tz = get_timezone("Europe/Lisbon", 1418138472);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Lisbon", 1486630397);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Lisbon", 1619675857);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Lisbon", 1614487175);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/Lisbon", 1444095047);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Lisbon" << std::endl;
    }
    if (has_timezone("Europe/Ljubljana")) {
        {
            auto tz = get_timezone("Europe/Ljubljana", 1479943419);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Ljubljana", 1625176220);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Ljubljana", 1601725423);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Ljubljana", 1585304714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Ljubljana", 1451987386);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Ljubljana" << std::endl;
    }
    if (has_timezone("Europe/London")) {
        {
            auto tz = get_timezone("Europe/London", 1572309554);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/London", 1537837468);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/London", 1456349766);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/London", 1614015491);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Europe/London", 1578512097);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/London" << std::endl;
    }
    if (has_timezone("Europe/Luxembourg")) {
        {
            auto tz = get_timezone("Europe/Luxembourg", 1518780340);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Luxembourg", 1589645948);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Luxembourg", 1583076444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Luxembourg", 1618489646);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Luxembourg", 1568841780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Luxembourg" << std::endl;
    }
    if (has_timezone("Europe/Madrid")) {
        {
            auto tz = get_timezone("Europe/Madrid", 1544307124);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Madrid", 1534016239);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Madrid", 1547852225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Madrid", 1449034771);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Madrid", 1519370197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Madrid" << std::endl;
    }
    if (has_timezone("Europe/Malta")) {
        {
            auto tz = get_timezone("Europe/Malta", 1423620768);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Malta", 1576154774);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Malta", 1586999544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Malta", 1617600891);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Malta", 1484975765);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Malta" << std::endl;
    }
    if (has_timezone("Europe/Mariehamn")) {
        {
            auto tz = get_timezone("Europe/Mariehamn", 1613544848);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Mariehamn", 1468264481);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Mariehamn", 1521012237);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Mariehamn", 1421339560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Mariehamn", 1609219109);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Mariehamn" << std::endl;
    }
    if (has_timezone("Europe/Minsk")) {
        {
            auto tz = get_timezone("Europe/Minsk", 1526570850);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Minsk", 1459816115);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Minsk", 1463959315);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Minsk", 1522961114);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Minsk", 1588182679);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Minsk" << std::endl;
    }
    if (has_timezone("Europe/Monaco")) {
        {
            auto tz = get_timezone("Europe/Monaco", 1433957279);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Monaco", 1528708851);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Monaco", 1573185979);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Monaco", 1418462343);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Monaco", 1492418847);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Monaco" << std::endl;
    }
    if (has_timezone("Europe/Moscow")) {
        {
            auto tz = get_timezone("Europe/Moscow", 1470706932);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Moscow", 1527430906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Moscow", 1605935552);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Moscow", 1486986154);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Moscow", 1426393899);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Moscow" << std::endl;
    }
    if (has_timezone("Europe/Nicosia")) {
        {
            auto tz = get_timezone("Europe/Nicosia", 1433060410);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Nicosia", 1509146400);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Nicosia", 1517463176);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Nicosia", 1476272445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Nicosia", 1561211545);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Nicosia" << std::endl;
    }
    if (has_timezone("Europe/Oslo")) {
        {
            auto tz = get_timezone("Europe/Oslo", 1482529806);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Oslo", 1596529443);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Oslo", 1607422039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Oslo", 1425173798);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Oslo", 1454547973);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Oslo" << std::endl;
    }
    if (has_timezone("Europe/Paris")) {
        {
            auto tz = get_timezone("Europe/Paris", 1520683530);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Paris", 1446604002);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Paris", 1525143097);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Paris", 1607489532);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Paris", 1436112943);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Paris" << std::endl;
    }
    if (has_timezone("Europe/Podgorica")) {
        {
            auto tz = get_timezone("Europe/Podgorica", 1604391106);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Podgorica", 1466683765);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Podgorica", 1614520840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Podgorica", 1417151574);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Podgorica", 1603410683);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Podgorica" << std::endl;
    }
    if (has_timezone("Europe/Prague")) {
        {
            auto tz = get_timezone("Europe/Prague", 1469922713);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Prague", 1473265768);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Prague", 1511521710);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Prague", 1535744666);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Prague", 1583666664);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Prague" << std::endl;
    }
    if (has_timezone("Europe/Riga")) {
        {
            auto tz = get_timezone("Europe/Riga", 1519313533);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Riga", 1517542857);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Riga", 1617207781);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Riga", 1432687937);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Riga", 1453024618);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Riga" << std::endl;
    }
    if (has_timezone("Europe/Rome")) {
        {
            auto tz = get_timezone("Europe/Rome", 1422778466);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Rome", 1564555041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Rome", 1603996583);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Rome", 1428481872);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Rome", 1410149596);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Rome" << std::endl;
    }
    if (has_timezone("Europe/Samara")) {
        {
            auto tz = get_timezone("Europe/Samara", 1420126296);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Samara", 1619721820);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Samara", 1605726784);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Samara", 1609935233);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Samara", 1628950617);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Samara" << std::endl;
    }
    if (has_timezone("Europe/San_Marino")) {
        {
            auto tz = get_timezone("Europe/San_Marino", 1491749381);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/San_Marino", 1498379697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/San_Marino", 1499985263);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/San_Marino", 1547071731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/San_Marino", 1418195581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/San_Marino" << std::endl;
    }
    if (has_timezone("Europe/Sarajevo")) {
        {
            auto tz = get_timezone("Europe/Sarajevo", 1543337239);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Sarajevo", 1626148661);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Sarajevo", 1607519388);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Sarajevo", 1466938599);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Sarajevo", 1515465151);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Sarajevo" << std::endl;
    }
    if (has_timezone("Europe/Saratov")) {
        {
            auto tz = get_timezone("Europe/Saratov", 1440285471);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Saratov", 1467151525);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Saratov", 1454789719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Saratov", 1486654545);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Saratov", 1445273390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Saratov" << std::endl;
    }
    if (has_timezone("Europe/Simferopol")) {
        {
            auto tz = get_timezone("Europe/Simferopol", 1467446356);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Simferopol", 1600651061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Simferopol", 1628684371);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Simferopol", 1480480972);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Simferopol", 1476131455);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Simferopol" << std::endl;
    }
    if (has_timezone("Europe/Skopje")) {
        {
            auto tz = get_timezone("Europe/Skopje", 1537495459);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Skopje", 1453663440);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Skopje", 1455403481);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Skopje", 1447514212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Skopje", 1415048448);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Skopje" << std::endl;
    }
    if (has_timezone("Europe/Sofia")) {
        {
            auto tz = get_timezone("Europe/Sofia", 1566643041);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Sofia", 1501321406);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Sofia", 1452696162);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Sofia", 1516796743);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Sofia", 1446523655);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Sofia" << std::endl;
    }
    if (has_timezone("Europe/Stockholm")) {
        {
            auto tz = get_timezone("Europe/Stockholm", 1602933621);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Stockholm", 1540033158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Stockholm", 1411006994);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Stockholm", 1586970267);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Stockholm", 1596614481);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Stockholm" << std::endl;
    }
    if (has_timezone("Europe/Tallinn")) {
        {
            auto tz = get_timezone("Europe/Tallinn", 1479482436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tallinn", 1538803266);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Tallinn", 1623814539);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Tallinn", 1578794824);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tallinn", 1544633863);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tallinn" << std::endl;
    }
    if (has_timezone("Europe/Tirane")) {
        {
            auto tz = get_timezone("Europe/Tirane", 1442190385);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tirane", 1479272934);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Tirane", 1598874286);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tirane", 1607093388);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Tirane", 1587573046);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tirane" << std::endl;
    }
    if (has_timezone("Europe/Tiraspol")) {
        {
            auto tz = get_timezone("Europe/Tiraspol", 1521544419);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tiraspol", 1516438759);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tiraspol", 1543075961);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tiraspol", 1450531341);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Tiraspol", 1487893253);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Tiraspol" << std::endl;
    }
    if (has_timezone("Europe/Ulyanovsk")) {
        {
            auto tz = get_timezone("Europe/Ulyanovsk", 1558504583);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Ulyanovsk", 1508013881);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Ulyanovsk", 1608652998);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Ulyanovsk", 1573548452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Ulyanovsk", 1450957210);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Ulyanovsk" << std::endl;
    }
    if (has_timezone("Europe/Uzhgorod")) {
        {
            auto tz = get_timezone("Europe/Uzhgorod", 1468006115);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Uzhgorod", 1587787728);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Uzhgorod", 1447336518);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Uzhgorod", 1415957120);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Uzhgorod", 1469029868);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Uzhgorod" << std::endl;
    }
    if (has_timezone("Europe/Vaduz")) {
        {
            auto tz = get_timezone("Europe/Vaduz", 1488160512);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Vaduz", 1467989787);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vaduz", 1466593100);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vaduz", 1461954460);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vaduz", 1504408315);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vaduz" << std::endl;
    }
    if (has_timezone("Europe/Vatican")) {
        {
            auto tz = get_timezone("Europe/Vatican", 1550524441);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Vatican", 1453133344);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Vatican", 1448352149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Vatican", 1506275963);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vatican", 1456602484);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vatican" << std::endl;
    }
    if (has_timezone("Europe/Vienna")) {
        {
            auto tz = get_timezone("Europe/Vienna", 1591958421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vienna", 1507572796);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vienna", 1477344042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vienna", 1588521819);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vienna", 1530115569);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vienna" << std::endl;
    }
    if (has_timezone("Europe/Vilnius")) {
        {
            auto tz = get_timezone("Europe/Vilnius", 1575869849);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vilnius", 1428619413);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Vilnius", 1564673011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Vilnius", 1511277578);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Vilnius", 1513614321);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Vilnius" << std::endl;
    }
    if (has_timezone("Europe/Volgograd")) {
        {
            auto tz = get_timezone("Europe/Volgograd", 1606217078);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Europe/Volgograd", 1540489639);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Volgograd", 1466990965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Volgograd", 1479611813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Volgograd", 1473148618);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Volgograd" << std::endl;
    }
    if (has_timezone("Europe/Warsaw")) {
        {
            auto tz = get_timezone("Europe/Warsaw", 1463813898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Warsaw", 1541674243);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Warsaw", 1528712454);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Warsaw", 1582576272);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Warsaw", 1495882700);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Warsaw" << std::endl;
    }
    if (has_timezone("Europe/Zagreb")) {
        {
            auto tz = get_timezone("Europe/Zagreb", 1556457915);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Zagreb", 1505572076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Zagreb", 1610480671);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Zagreb", 1560294540);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Zagreb", 1418317093);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zagreb" << std::endl;
    }
    if (has_timezone("Europe/Zaporozhye")) {
        {
            auto tz = get_timezone("Europe/Zaporozhye", 1624628222);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Zaporozhye", 1460068534);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Zaporozhye", 1551112699);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Zaporozhye", 1587843317);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Europe/Zaporozhye", 1573579339);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zaporozhye" << std::endl;
    }
    if (has_timezone("Europe/Zurich")) {
        {
            auto tz = get_timezone("Europe/Zurich", 1606343512);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Zurich", 1565269265);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Europe/Zurich", 1456620910);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Zurich", 1451124473);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Europe/Zurich", 1455412676);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Europe/Zurich" << std::endl;
    }
    if (has_timezone("GB")) {
        {
            auto tz = get_timezone("GB", 1511723193);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GB", 1597451241);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB", 1628813312);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB", 1508499138);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB", 1610825097);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: GB" << std::endl;
    }
    if (has_timezone("GB-Eire")) {
        {
            auto tz = get_timezone("GB-Eire", 1508467135);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB-Eire", 1466502233);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB-Eire", 1454271453);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GB-Eire", 1593016984);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("GB-Eire", 1594446336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: GB-Eire" << std::endl;
    }
    if (has_timezone("GMT")) {
        {
            auto tz = get_timezone("GMT", 1429851750);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT", 1546186434);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT", 1537860421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT", 1547791693);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT", 1538811338);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: GMT" << std::endl;
    }
    if (has_timezone("GMT+0")) {
        {
            auto tz = get_timezone("GMT+0", 1579595928);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT+0", 1413730326);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT+0", 1520143077);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT+0", 1410551182);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT+0", 1471739299);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: GMT+0" << std::endl;
    }
    if (has_timezone("GMT-0")) {
        {
            auto tz = get_timezone("GMT-0", 1446314557);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT-0", 1474466231);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT-0", 1544645301);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT-0", 1586303322);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT-0", 1598943002);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: GMT-0" << std::endl;
    }
    if (has_timezone("GMT0")) {
        {
            auto tz = get_timezone("GMT0", 1578165583);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT0", 1624265854);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT0", 1557595327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT0", 1587773093);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("GMT0", 1535913513);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: GMT0" << std::endl;
    }
    if (has_timezone("Greenwich")) {
        {
            auto tz = get_timezone("Greenwich", 1536180125);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Greenwich", 1464735604);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Greenwich", 1552669236);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Greenwich", 1524266027);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Greenwich", 1528034143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Greenwich" << std::endl;
    }
    if (has_timezone("HST")) {
        {
            auto tz = get_timezone("HST", 1464148366);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("HST", 1526338695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("HST", 1575830279);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("HST", 1572590014);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("HST", 1589543654);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: HST" << std::endl;
    }
    if (has_timezone("Hongkong")) {
        {
            auto tz = get_timezone("Hongkong", 1605692582);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Hongkong", 1472139139);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Hongkong", 1518639236);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Hongkong", 1416632892);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Hongkong", 1565881752);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Hongkong" << std::endl;
    }
    if (has_timezone("Iceland")) {
        {
            auto tz = get_timezone("Iceland", 1572069648);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Iceland", 1428997121);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Iceland", 1414906571);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Iceland", 1574988520);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Iceland", 1596392494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Iceland" << std::endl;
    }
    if (has_timezone("Indian/Antananarivo")) {
        {
            auto tz = get_timezone("Indian/Antananarivo", 1567643444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Antananarivo", 1516886639);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Antananarivo", 1612030833);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Antananarivo", 1535593077);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Antananarivo", 1444530591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Antananarivo" << std::endl;
    }
    if (has_timezone("Indian/Chagos")) {
        {
            auto tz = get_timezone("Indian/Chagos", 1530390436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Indian/Chagos", 1607984051);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Indian/Chagos", 1434672807);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Indian/Chagos", 1559583303);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
        {
            auto tz = get_timezone("Indian/Chagos", 1551353323);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Chagos" << std::endl;
    }
    if (has_timezone("Indian/Christmas")) {
        {
            auto tz = get_timezone("Indian/Christmas", 1592729445);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Indian/Christmas", 1607734676);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Indian/Christmas", 1541766680);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Indian/Christmas", 1622150930);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
        {
            auto tz = get_timezone("Indian/Christmas", 1488693108);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Christmas" << std::endl;
    }
    if (has_timezone("Indian/Cocos")) {
        {
            auto tz = get_timezone("Indian/Cocos", 1626554287);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Indian/Cocos", 1489070674);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Indian/Cocos", 1549026214);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Indian/Cocos", 1532512289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
        {
            auto tz = get_timezone("Indian/Cocos", 1560585566);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 23400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Cocos" << std::endl;
    }
    if (has_timezone("Indian/Comoro")) {
        {
            auto tz = get_timezone("Indian/Comoro", 1603959241);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Comoro", 1608322763);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Comoro", 1451718334);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Comoro", 1483976972);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Comoro", 1437145230);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Comoro" << std::endl;
    }
    if (has_timezone("Indian/Kerguelen")) {
        {
            auto tz = get_timezone("Indian/Kerguelen", 1536152656);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Kerguelen", 1581882331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Kerguelen", 1419018740);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Kerguelen", 1538895427);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Kerguelen", 1528295239);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Kerguelen" << std::endl;
    }
    if (has_timezone("Indian/Mahe")) {
        {
            auto tz = get_timezone("Indian/Mahe", 1597151452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mahe", 1475613251);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mahe", 1592256057);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mahe", 1536764286);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mahe", 1589906593);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mahe" << std::endl;
    }
    if (has_timezone("Indian/Maldives")) {
        {
            auto tz = get_timezone("Indian/Maldives", 1414536695);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Maldives", 1527262628);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Maldives", 1436849336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Maldives", 1458909347);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
        {
            auto tz = get_timezone("Indian/Maldives", 1625254434);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Maldives" << std::endl;
    }
    if (has_timezone("Indian/Mauritius")) {
        {
            auto tz = get_timezone("Indian/Mauritius", 1599650488);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mauritius", 1443703289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mauritius", 1530227503);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mauritius", 1487784858);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Mauritius", 1586348835);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mauritius" << std::endl;
    }
    if (has_timezone("Indian/Mayotte")) {
        {
            auto tz = get_timezone("Indian/Mayotte", 1529840249);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Mayotte", 1570398978);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Mayotte", 1619830471);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Mayotte", 1449055014);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Indian/Mayotte", 1464808603);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Mayotte" << std::endl;
    }
    if (has_timezone("Indian/Reunion")) {
        {
            auto tz = get_timezone("Indian/Reunion", 1582212051);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Reunion", 1535354717);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Reunion", 1600947991);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Reunion", 1445623993);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
        {
            auto tz = get_timezone("Indian/Reunion", 1619658376);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 14400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Indian/Reunion" << std::endl;
    }
    if (has_timezone("Iran")) {
        {
            auto tz = get_timezone("Iran", 1457777340);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 12600);
        }
        {
            auto tz = get_timezone("Iran", 1568517246);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Iran", 1539664543);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 12600);
        }
        {
            auto tz = get_timezone("Iran", 1493317173);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
        {
            auto tz = get_timezone("Iran", 1467020008);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 16200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Iran" << std::endl;
    }
    if (has_timezone("Israel")) {
        {
            auto tz = get_timezone("Israel", 1561274489);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Israel", 1568528080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Israel", 1511906421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Israel", 1547815219);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Israel", 1623751803);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Israel" << std::endl;
    }
    if (has_timezone("Jamaica")) {
        {
            auto tz = get_timezone("Jamaica", 1577399036);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Jamaica", 1604733922);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Jamaica", 1468673103);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Jamaica", 1603721013);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Jamaica", 1424598452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Jamaica" << std::endl;
    }
    if (has_timezone("Japan")) {
        {
            auto tz = get_timezone("Japan", 1469733672);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Japan", 1522420038);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Japan", 1423921155);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Japan", 1439484888);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Japan", 1480383724);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Japan" << std::endl;
    }
    if (has_timezone("Kwajalein")) {
        {
            auto tz = get_timezone("Kwajalein", 1526068298);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Kwajalein", 1467367253);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Kwajalein", 1537493892);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Kwajalein", 1571242554);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Kwajalein", 1574032480);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Kwajalein" << std::endl;
    }
    if (has_timezone("Libya")) {
        {
            auto tz = get_timezone("Libya", 1513473006);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Libya", 1475632283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Libya", 1547219203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Libya", 1531652202);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Libya", 1534071780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Libya" << std::endl;
    }
    if (has_timezone("MET")) {
        {
            auto tz = get_timezone("MET", 1512996027);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("MET", 1569048556);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("MET", 1601199738);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("MET", 1455087390);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("MET", 1623247325);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: MET" << std::endl;
    }
    if (has_timezone("MST")) {
        {
            auto tz = get_timezone("MST", 1558059327);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("MST", 1455413015);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("MST", 1531141444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("MST", 1441402808);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("MST", 1572092252);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: MST" << std::endl;
    }
    if (has_timezone("MST7MDT")) {
        {
            auto tz = get_timezone("MST7MDT", 1511529682);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("MST7MDT", 1539632828);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("MST7MDT", 1507602699);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("MST7MDT", 1426639933);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("MST7MDT", 1562744932);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: MST7MDT" << std::endl;
    }
    if (has_timezone("Mexico/BajaNorte")) {
        {
            auto tz = get_timezone("Mexico/BajaNorte", 1498926844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaNorte", 1548477687);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Mexico/BajaNorte", 1471672206);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaNorte", 1578908024);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Mexico/BajaNorte", 1503822351);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Mexico/BajaNorte" << std::endl;
    }
    if (has_timezone("Mexico/BajaSur")) {
        {
            auto tz = get_timezone("Mexico/BajaSur", 1517662432);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaSur", 1517039745);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaSur", 1518561448);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaSur", 1514953521);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Mexico/BajaSur", 1503701660);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Mexico/BajaSur" << std::endl;
    }
    if (has_timezone("Mexico/General")) {
        {
            auto tz = get_timezone("Mexico/General", 1465147223);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Mexico/General", 1473430312);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Mexico/General", 1416817945);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Mexico/General", 1451487535);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Mexico/General", 1520941760);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Mexico/General" << std::endl;
    }
    if (has_timezone("NZ")) {
        {
            auto tz = get_timezone("NZ", 1593105230);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("NZ", 1561209719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("NZ", 1628349133);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("NZ", 1534574331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("NZ", 1488733176);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: NZ" << std::endl;
    }
    if (has_timezone("NZ-CHAT")) {
        {
            auto tz = get_timezone("NZ-CHAT", 1440704511);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 45900);
        }
        {
            auto tz = get_timezone("NZ-CHAT", 1622189305);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 45900);
        }
        {
            auto tz = get_timezone("NZ-CHAT", 1573822581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 49500);
        }
        {
            auto tz = get_timezone("NZ-CHAT", 1471154600);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 45900);
        }
        {
            auto tz = get_timezone("NZ-CHAT", 1574969625);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 49500);
        }
    } else {
        std::cerr << "NO TIMEZONE: NZ-CHAT" << std::endl;
    }
    if (has_timezone("Navajo")) {
        {
            auto tz = get_timezone("Navajo", 1564519995);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Navajo", 1606209067);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("Navajo", 1444333212);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Navajo", 1443600723);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Navajo", 1568682289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Navajo" << std::endl;
    }
    if (has_timezone("PRC")) {
        {
            auto tz = get_timezone("PRC", 1437363539);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("PRC", 1560311174);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("PRC", 1494980752);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("PRC", 1482798268);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("PRC", 1626683060);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: PRC" << std::endl;
    }
    if (has_timezone("PST8PDT")) {
        {
            auto tz = get_timezone("PST8PDT", 1524414122);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("PST8PDT", 1416817341);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("PST8PDT", 1605916090);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("PST8PDT", 1494947511);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("PST8PDT", 1585411816);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: PST8PDT" << std::endl;
    }
    if (has_timezone("Pacific/Apia")) {
        {
            auto tz = get_timezone("Pacific/Apia", 1531423920);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Apia", 1551670101);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Apia", 1496642902);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Apia", 1549862932);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Apia", 1493349632);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Apia" << std::endl;
    }
    if (has_timezone("Pacific/Auckland")) {
        {
            auto tz = get_timezone("Pacific/Auckland", 1585101276);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Auckland", 1431581276);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Auckland", 1589157748);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Auckland", 1590312953);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Auckland", 1536871186);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Auckland" << std::endl;
    }
    if (has_timezone("Pacific/Bougainville")) {
        {
            auto tz = get_timezone("Pacific/Bougainville", 1428703203);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Bougainville", 1525620663);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Bougainville", 1540913684);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Bougainville", 1532376309);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Bougainville", 1439200965);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Bougainville" << std::endl;
    }
    if (has_timezone("Pacific/Chatham")) {
        {
            auto tz = get_timezone("Pacific/Chatham", 1512718699);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 49500);
        }
        {
            auto tz = get_timezone("Pacific/Chatham", 1613997897);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 49500);
        }
        {
            auto tz = get_timezone("Pacific/Chatham", 1487278806);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 49500);
        }
        {
            auto tz = get_timezone("Pacific/Chatham", 1441729803);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 45900);
        }
        {
            auto tz = get_timezone("Pacific/Chatham", 1442853092);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 45900);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Chatham" << std::endl;
    }
    if (has_timezone("Pacific/Chuuk")) {
        {
            auto tz = get_timezone("Pacific/Chuuk", 1559356333);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Chuuk", 1521579061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Chuuk", 1568948369);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Chuuk", 1441771081);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Chuuk", 1557938140);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Chuuk" << std::endl;
    }
    if (has_timezone("Pacific/Easter")) {
        {
            auto tz = get_timezone("Pacific/Easter", 1419398731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Pacific/Easter", 1558496475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Pacific/Easter", 1436177158);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Pacific/Easter", 1424739101);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("Pacific/Easter", 1517722206);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Easter" << std::endl;
    }
    if (has_timezone("Pacific/Efate")) {
        {
            auto tz = get_timezone("Pacific/Efate", 1620329704);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Efate", 1602984817);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Efate", 1414007952);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Efate", 1580978423);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Efate", 1540725128);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Efate" << std::endl;
    }
    if (has_timezone("Pacific/Enderbury")) {
        {
            auto tz = get_timezone("Pacific/Enderbury", 1591979115);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Enderbury", 1586573024);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Enderbury", 1573233851);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Enderbury", 1535982731);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Enderbury", 1609072286);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Enderbury" << std::endl;
    }
    if (has_timezone("Pacific/Fakaofo")) {
        {
            auto tz = get_timezone("Pacific/Fakaofo", 1472463152);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Fakaofo", 1461532909);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Fakaofo", 1619441784);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Fakaofo", 1528059764);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Fakaofo", 1578972157);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Fakaofo" << std::endl;
    }
    if (has_timezone("Pacific/Fiji")) {
        {
            auto tz = get_timezone("Pacific/Fiji", 1595669347);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Fiji", 1435885141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Fiji", 1443495608);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Fiji", 1532495575);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Fiji", 1490753201);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Fiji" << std::endl;
    }
    if (has_timezone("Pacific/Funafuti")) {
        {
            auto tz = get_timezone("Pacific/Funafuti", 1482267674);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Funafuti", 1462769180);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Funafuti", 1528550458);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Funafuti", 1580675794);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Funafuti", 1414799560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Funafuti" << std::endl;
    }
    if (has_timezone("Pacific/Galapagos")) {
        {
            auto tz = get_timezone("Pacific/Galapagos", 1477050055);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Pacific/Galapagos", 1497169983);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Pacific/Galapagos", 1549394494);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Pacific/Galapagos", 1430460722);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("Pacific/Galapagos", 1469668560);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Galapagos" << std::endl;
    }
    if (has_timezone("Pacific/Gambier")) {
        {
            auto tz = get_timezone("Pacific/Gambier", 1569507119);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Pacific/Gambier", 1501467605);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Pacific/Gambier", 1412036154);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Pacific/Gambier", 1519583728);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("Pacific/Gambier", 1438120331);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Gambier" << std::endl;
    }
    if (has_timezone("Pacific/Guadalcanal")) {
        {
            auto tz = get_timezone("Pacific/Guadalcanal", 1570188757);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Guadalcanal", 1607078724);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Guadalcanal", 1508362349);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Guadalcanal", 1479757141);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Guadalcanal", 1523324515);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Guadalcanal" << std::endl;
    }
    if (has_timezone("Pacific/Guam")) {
        {
            auto tz = get_timezone("Pacific/Guam", 1580260290);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Guam", 1446259655);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Guam", 1523120024);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Guam", 1576796862);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Guam", 1463391481);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Guam" << std::endl;
    }
    if (has_timezone("Pacific/Honolulu")) {
        {
            auto tz = get_timezone("Pacific/Honolulu", 1447245329);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Honolulu", 1609112238);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Honolulu", 1508238609);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Honolulu", 1503890677);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Honolulu", 1547253082);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Honolulu" << std::endl;
    }
    if (has_timezone("Pacific/Johnston")) {
        {
            auto tz = get_timezone("Pacific/Johnston", 1481026052);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Johnston", 1592230906);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Johnston", 1438824648);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Johnston", 1546999490);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Johnston", 1629745551);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Johnston" << std::endl;
    }
    if (has_timezone("Pacific/Kiritimati")) {
        {
            auto tz = get_timezone("Pacific/Kiritimati", 1506989558);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Kiritimati", 1413376509);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Kiritimati", 1523885209);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Kiritimati", 1587126923);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
        {
            auto tz = get_timezone("Pacific/Kiritimati", 1561967034);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 50400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kiritimati" << std::endl;
    }
    if (has_timezone("Pacific/Kosrae")) {
        {
            auto tz = get_timezone("Pacific/Kosrae", 1529989838);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Kosrae", 1615603839);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Kosrae", 1623887383);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Kosrae", 1424236703);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Kosrae", 1502036925);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kosrae" << std::endl;
    }
    if (has_timezone("Pacific/Kwajalein")) {
        {
            auto tz = get_timezone("Pacific/Kwajalein", 1484561649);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Kwajalein", 1556137086);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Kwajalein", 1454512591);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Kwajalein", 1592438964);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Kwajalein", 1602360186);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Kwajalein" << std::endl;
    }
    if (has_timezone("Pacific/Majuro")) {
        {
            auto tz = get_timezone("Pacific/Majuro", 1621721597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Majuro", 1418237392);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Majuro", 1416769814);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Majuro", 1485368730);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Majuro", 1598375436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Majuro" << std::endl;
    }
    if (has_timezone("Pacific/Marquesas")) {
        {
            auto tz = get_timezone("Pacific/Marquesas", 1447104099);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -34200);
        }
        {
            auto tz = get_timezone("Pacific/Marquesas", 1504247178);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -34200);
        }
        {
            auto tz = get_timezone("Pacific/Marquesas", 1592302887);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -34200);
        }
        {
            auto tz = get_timezone("Pacific/Marquesas", 1610498343);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -34200);
        }
        {
            auto tz = get_timezone("Pacific/Marquesas", 1524574042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -34200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Marquesas" << std::endl;
    }
    if (has_timezone("Pacific/Midway")) {
        {
            auto tz = get_timezone("Pacific/Midway", 1620500828);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Midway", 1568101146);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Midway", 1429364146);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Midway", 1550823213);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Midway", 1488574982);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Midway" << std::endl;
    }
    if (has_timezone("Pacific/Nauru")) {
        {
            auto tz = get_timezone("Pacific/Nauru", 1433595311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Nauru", 1462301739);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Nauru", 1495029389);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Nauru", 1474829084);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Nauru", 1482216728);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Nauru" << std::endl;
    }
    if (has_timezone("Pacific/Niue")) {
        {
            auto tz = get_timezone("Pacific/Niue", 1526011544);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Niue", 1431162436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Niue", 1493656581);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Niue", 1622298703);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Niue", 1435920918);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Niue" << std::endl;
    }
    if (has_timezone("Pacific/Norfolk")) {
        {
            auto tz = get_timezone("Pacific/Norfolk", 1567506501);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Norfolk", 1454729464);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Norfolk", 1626866646);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Norfolk", 1438072675);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 41400);
        }
        {
            auto tz = get_timezone("Pacific/Norfolk", 1423727917);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 41400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Norfolk" << std::endl;
    }
    if (has_timezone("Pacific/Noumea")) {
        {
            auto tz = get_timezone("Pacific/Noumea", 1628287530);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Noumea", 1465535980);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Noumea", 1431214082);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Noumea", 1502881325);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Noumea", 1502281035);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Noumea" << std::endl;
    }
    if (has_timezone("Pacific/Pago_Pago")) {
        {
            auto tz = get_timezone("Pacific/Pago_Pago", 1485286878);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Pago_Pago", 1502553154);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Pago_Pago", 1509598190);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Pago_Pago", 1496161714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Pago_Pago", 1448725663);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pago_Pago" << std::endl;
    }
    if (has_timezone("Pacific/Palau")) {
        {
            auto tz = get_timezone("Pacific/Palau", 1593659089);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Pacific/Palau", 1507559197);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Pacific/Palau", 1423198549);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Pacific/Palau", 1540266633);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("Pacific/Palau", 1624400146);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Palau" << std::endl;
    }
    if (has_timezone("Pacific/Pitcairn")) {
        {
            auto tz = get_timezone("Pacific/Pitcairn", 1430530813);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Pacific/Pitcairn", 1531114378);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Pacific/Pitcairn", 1483608789);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Pacific/Pitcairn", 1512103528);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("Pacific/Pitcairn", 1585394075);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pitcairn" << std::endl;
    }
    if (has_timezone("Pacific/Pohnpei")) {
        {
            auto tz = get_timezone("Pacific/Pohnpei", 1623057840);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Pohnpei", 1511015262);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Pohnpei", 1462756891);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Pohnpei", 1456520273);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Pohnpei", 1561246749);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Pohnpei" << std::endl;
    }
    if (has_timezone("Pacific/Ponape")) {
        {
            auto tz = get_timezone("Pacific/Ponape", 1551896655);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Ponape", 1587963225);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Ponape", 1536195834);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Ponape", 1532663824);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
        {
            auto tz = get_timezone("Pacific/Ponape", 1439548910);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Ponape" << std::endl;
    }
    if (has_timezone("Pacific/Port_Moresby")) {
        {
            auto tz = get_timezone("Pacific/Port_Moresby", 1508618463);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Port_Moresby", 1485423240);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Port_Moresby", 1450308231);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Port_Moresby", 1504448273);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Port_Moresby", 1591795614);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Port_Moresby" << std::endl;
    }
    if (has_timezone("Pacific/Rarotonga")) {
        {
            auto tz = get_timezone("Pacific/Rarotonga", 1627434260);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Rarotonga", 1487659913);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Rarotonga", 1422379021);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Rarotonga", 1428044037);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Rarotonga", 1535327039);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Rarotonga" << std::endl;
    }
    if (has_timezone("Pacific/Saipan")) {
        {
            auto tz = get_timezone("Pacific/Saipan", 1411436116);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Saipan", 1414299242);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Saipan", 1500363080);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Saipan", 1603034378);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Saipan", 1536471927);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Saipan" << std::endl;
    }
    if (has_timezone("Pacific/Samoa")) {
        {
            auto tz = get_timezone("Pacific/Samoa", 1602134444);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Samoa", 1423876385);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Samoa", 1607715035);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Samoa", 1475827942);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("Pacific/Samoa", 1487364589);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Samoa" << std::endl;
    }
    if (has_timezone("Pacific/Tahiti")) {
        {
            auto tz = get_timezone("Pacific/Tahiti", 1411744678);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Tahiti", 1609171694);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Tahiti", 1522446760);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Tahiti", 1538158198);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("Pacific/Tahiti", 1449858166);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tahiti" << std::endl;
    }
    if (has_timezone("Pacific/Tarawa")) {
        {
            auto tz = get_timezone("Pacific/Tarawa", 1414602205);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Tarawa", 1496604824);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Tarawa", 1508387561);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Tarawa", 1470521306);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Tarawa", 1481483409);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tarawa" << std::endl;
    }
    if (has_timezone("Pacific/Tongatapu")) {
        {
            auto tz = get_timezone("Pacific/Tongatapu", 1622922027);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Tongatapu", 1448937421);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Tongatapu", 1460179206);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Tongatapu", 1451862322);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
        {
            auto tz = get_timezone("Pacific/Tongatapu", 1560895500);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 46800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Tongatapu" << std::endl;
    }
    if (has_timezone("Pacific/Truk")) {
        {
            auto tz = get_timezone("Pacific/Truk", 1619439582);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Truk", 1533448974);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Truk", 1483765705);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Truk", 1487940295);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Truk", 1538576549);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Truk" << std::endl;
    }
    if (has_timezone("Pacific/Wake")) {
        {
            auto tz = get_timezone("Pacific/Wake", 1616595403);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wake", 1468829001);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wake", 1610120111);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wake", 1606833027);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wake", 1440026634);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Wake" << std::endl;
    }
    if (has_timezone("Pacific/Wallis")) {
        {
            auto tz = get_timezone("Pacific/Wallis", 1597941018);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wallis", 1455084781);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wallis", 1541624259);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wallis", 1449967913);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
        {
            auto tz = get_timezone("Pacific/Wallis", 1418424874);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 43200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Wallis" << std::endl;
    }
    if (has_timezone("Pacific/Yap")) {
        {
            auto tz = get_timezone("Pacific/Yap", 1605600726);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Yap", 1509618572);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Yap", 1515593680);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Yap", 1438353714);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
        {
            auto tz = get_timezone("Pacific/Yap", 1576382838);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: Pacific/Yap" << std::endl;
    }
    if (has_timezone("Poland")) {
        {
            auto tz = get_timezone("Poland", 1450412333);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Poland", 1458260646);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Poland", 1557897228);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Poland", 1438035466);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Poland", 1409945851);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
    } else {
        std::cerr << "NO TIMEZONE: Poland" << std::endl;
    }
    if (has_timezone("Portugal")) {
        {
            auto tz = get_timezone("Portugal", 1418673720);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Portugal", 1486576188);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Portugal", 1410398896);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("Portugal", 1454029137);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Portugal", 1458978452);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Portugal" << std::endl;
    }
    if (has_timezone("ROC")) {
        {
            auto tz = get_timezone("ROC", 1582719886);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("ROC", 1569481288);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("ROC", 1625800728);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("ROC", 1462053958);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("ROC", 1502603098);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: ROC" << std::endl;
    }
    if (has_timezone("ROK")) {
        {
            auto tz = get_timezone("ROK", 1460422173);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("ROK", 1591481823);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("ROK", 1547051799);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("ROK", 1430823270);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
        {
            auto tz = get_timezone("ROK", 1578824619);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 32400);
        }
    } else {
        std::cerr << "NO TIMEZONE: ROK" << std::endl;
    }
    if (has_timezone("Singapore")) {
        {
            auto tz = get_timezone("Singapore", 1627340030);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Singapore", 1541350553);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Singapore", 1532799609);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Singapore", 1559971062);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
        {
            auto tz = get_timezone("Singapore", 1553344796);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Singapore" << std::endl;
    }
    if (has_timezone("Turkey")) {
        {
            auto tz = get_timezone("Turkey", 1419153822);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Turkey", 1471032061);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Turkey", 1463239403);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("Turkey", 1417185989);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 7200);
        }
        {
            auto tz = get_timezone("Turkey", 1629068355);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: Turkey" << std::endl;
    }
    if (has_timezone("UCT")) {
        {
            auto tz = get_timezone("UCT", 1579354220);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UCT", 1590981436);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UCT", 1553899798);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UCT", 1582514138);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UCT", 1476608947);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: UCT" << std::endl;
    }
    if (has_timezone("US/Alaska")) {
        {
            auto tz = get_timezone("US/Alaska", 1573903789);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("US/Alaska", 1546332657);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("US/Alaska", 1523029296);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("US/Alaska", 1618558754);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("US/Alaska", 1595414124);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Alaska" << std::endl;
    }
    if (has_timezone("US/Aleutian")) {
        {
            auto tz = get_timezone("US/Aleutian", 1476307356);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("US/Aleutian", 1620002689);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("US/Aleutian", 1416140955);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("US/Aleutian", 1599044554);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -32400);
        }
        {
            auto tz = get_timezone("US/Aleutian", 1546017722);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Aleutian" << std::endl;
    }
    if (has_timezone("US/Arizona")) {
        {
            auto tz = get_timezone("US/Arizona", 1473104425);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Arizona", 1419338293);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Arizona", 1612374510);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Arizona", 1470771844);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Arizona", 1448832848);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Arizona" << std::endl;
    }
    if (has_timezone("US/Central")) {
        {
            auto tz = get_timezone("US/Central", 1417594429);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Central", 1546204229);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Central", 1471436351);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/Central", 1580130597);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Central", 1513885719);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Central" << std::endl;
    }
    if (has_timezone("US/East-Indiana")) {
        {
            auto tz = get_timezone("US/East-Indiana", 1543995536);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/East-Indiana", 1453613300);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/East-Indiana", 1411072857);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/East-Indiana", 1585496237);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/East-Indiana", 1451946224);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/East-Indiana" << std::endl;
    }
    if (has_timezone("US/Eastern")) {
        {
            auto tz = get_timezone("US/Eastern", 1539050209);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Eastern", 1593099967);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Eastern", 1531038528);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Eastern", 1587806208);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Eastern", 1421068323);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Eastern" << std::endl;
    }
    if (has_timezone("US/Hawaii")) {
        {
            auto tz = get_timezone("US/Hawaii", 1500155299);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("US/Hawaii", 1535623306);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("US/Hawaii", 1520452898);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("US/Hawaii", 1624305793);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
        {
            auto tz = get_timezone("US/Hawaii", 1582956712);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -36000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Hawaii" << std::endl;
    }
    if (has_timezone("US/Indiana-Starke")) {
        {
            auto tz = get_timezone("US/Indiana-Starke", 1594275893);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/Indiana-Starke", 1451088002);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Indiana-Starke", 1549962924);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Indiana-Starke", 1560036283);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/Indiana-Starke", 1500304068);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Indiana-Starke" << std::endl;
    }
    if (has_timezone("US/Michigan")) {
        {
            auto tz = get_timezone("US/Michigan", 1501673123);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Michigan", 1481767939);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
        {
            auto tz = get_timezone("US/Michigan", 1504609143);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Michigan", 1504590824);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -14400);
        }
        {
            auto tz = get_timezone("US/Michigan", 1415181498);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -18000);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Michigan" << std::endl;
    }
    if (has_timezone("US/Mountain")) {
        {
            auto tz = get_timezone("US/Mountain", 1412994561);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Mountain", 1523412011);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Mountain", 1524820113);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Mountain", 1522935770);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
        {
            auto tz = get_timezone("US/Mountain", 1508040783);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -21600);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Mountain" << std::endl;
    }
    if (has_timezone("US/Pacific")) {
        {
            auto tz = get_timezone("US/Pacific", 1507465779);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Pacific", 1545236537);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -28800);
        }
        {
            auto tz = get_timezone("US/Pacific", 1532686782);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Pacific", 1588444851);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
        {
            auto tz = get_timezone("US/Pacific", 1602510019);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -25200);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Pacific" << std::endl;
    }
    if (has_timezone("US/Samoa")) {
        {
            auto tz = get_timezone("US/Samoa", 1461168643);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("US/Samoa", 1573883962);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("US/Samoa", 1431660360);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("US/Samoa", 1424537697);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
        {
            auto tz = get_timezone("US/Samoa", 1554277821);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, -39600);
        }
    } else {
        std::cerr << "NO TIMEZONE: US/Samoa" << std::endl;
    }
    if (has_timezone("UTC")) {
        {
            auto tz = get_timezone("UTC", 1480801809);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UTC", 1428236780);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UTC", 1477708249);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UTC", 1531064149);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("UTC", 1604900289);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: UTC" << std::endl;
    }
    if (has_timezone("Universal")) {
        {
            auto tz = get_timezone("Universal", 1438169636);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Universal", 1471001311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Universal", 1419883042);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Universal", 1610424051);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Universal", 1614573360);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Universal" << std::endl;
    }
    if (has_timezone("W-SU")) {
        {
            auto tz = get_timezone("W-SU", 1500680076);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("W-SU", 1567202694);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("W-SU", 1480141291);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("W-SU", 1614677311);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
        {
            auto tz = get_timezone("W-SU", 1469018978);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 10800);
        }
    } else {
        std::cerr << "NO TIMEZONE: W-SU" << std::endl;
    }
    if (has_timezone("WET")) {
        {
            auto tz = get_timezone("WET", 1434678938);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("WET", 1466234878);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("WET", 1531291213);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("WET", 1598971955);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
        {
            auto tz = get_timezone("WET", 1571583742);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 3600);
        }
    } else {
        std::cerr << "NO TIMEZONE: WET" << std::endl;
    }
    if (has_timezone("Zulu")) {
        {
            auto tz = get_timezone("Zulu", 1548384073);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Zulu", 1515094059);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Zulu", 1453863314);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Zulu", 1509904475);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
        {
            auto tz = get_timezone("Zulu", 1607582336);
            TZ_CHECK(tz.empty(), false);
            TZ_CHECK(tz.offset, 0);
        }
    } else {
        std::cerr << "NO TIMEZONE: Zulu" << std::endl;
    }
}
