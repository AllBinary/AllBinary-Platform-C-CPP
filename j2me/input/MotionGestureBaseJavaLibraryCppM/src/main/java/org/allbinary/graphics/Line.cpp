
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_LINE_CPP
        #define ORG_ALLBINARY_GRAPHICS_LINE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/Line.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"


Line::Line(GPoint* p1, GPoint* p2){
this->p1= PointFactory::getInstance()->ZERO_ZERO;
    
this->p2= this->p1;
    
this->setP1(p1);
    
this->setP2(p2);
    
}


    auto Line::getGradient() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getDeltaY() /this->getDeltaX();
    
}


    auto Line::update() -> void{
this->deltaX= this->getP1()->getX() -this->getP2()->getX();
    
this->deltaY= this->getP1()->getY() -this->getP2()->getY();
    
}


    auto Line::getDeltaX() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->deltaX;
    
}


    auto Line::getDeltaY() -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->deltaY;
    
}


    auto Line::getP1() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->p1;
    
}


    auto Line::getP2() -> GPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->p2;
    
}


    auto Line::setP1(GPoint* p1) -> void{
this->p1= p1;
    
this->update();
    
}


    auto Line::setP2(GPoint* p2) -> void{
this->p2= p2;
    
this->update();
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_LINE_CPP
