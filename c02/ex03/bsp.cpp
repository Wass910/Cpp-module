#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed checkAB;
    Fixed checkC;

    Fixed checkBC;
    Fixed checkA;

    Fixed checkCA;
    Fixed checkB;

    checkAB = (point.getPointX() - a.getPointX()) * (b.getPointY() - a.getPointY()) - (point.getPointY() - a.getPointY()) * (b.getPointX() - a.getPointX());
    checkC  = (c.getPointX() - a.getPointX()) * (b.getPointY() - a.getPointY()) - (c.getPointY() - a.getPointY()) * (b.getPointX() - a.getPointX());
    if ((checkAB < 0 && checkC > 0) ||(checkAB > 0 && checkC < 0))
        return false;
        
    checkBC = (point.getPointX() - b.getPointX()) * (c.getPointY() - b.getPointY()) - (point.getPointY() - b.getPointY()) * (c.getPointX() - b.getPointX());
    checkA = (a.getPointX() - b.getPointX()) * (c.getPointY() - b.getPointY()) - (a.getPointY() - b.getPointY()) * (c.getPointX() - b.getPointX());
    if ((checkBC < 0 && checkA > 0) ||(checkBC > 0 && checkA < 0))
        return false;
    
    checkCA = (point.getPointX() - c.getPointX()) * (a.getPointY() - c.getPointY()) - (point.getPointY() - c.getPointY()) * (a.getPointX() - c.getPointX());
    checkB  = (b.getPointX() - c.getPointX()) * (a.getPointY() - c.getPointY()) - (b.getPointY() - c.getPointY()) * (a.getPointX() - c.getPointX());
    if ((checkCA < 0 && checkB > 0) ||(checkCA > 0 && checkB < 0))
        return false;

    return (true);
} 

