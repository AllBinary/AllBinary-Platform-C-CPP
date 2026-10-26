
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
        



            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/life/Life.h>

      
#include <org/allbinary/game/ag/life/LifeVisitorInterface.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LifeLayer: public AllBinaryLayer, public LifeVisitorInterface {

public: LifeLayer() : AllBinaryLayer(StringUtil::getInstance().EMPTY_STRING, Rectangle(PointFactory::getInstance().ZERO_ZERO, 0, 0), ViewPosition::getInstanceD()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void paint(Graphics graphics){
}


    public: void visit(Life lifeInterface){
lifeInterface.add(1);
    
}


};

            

