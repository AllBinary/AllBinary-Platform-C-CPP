
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/DisplaysUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/Dimension.h>

      
#include <java/awt/DisplayMode.h>

      
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/awt/Toolkit.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DisplaysUtil::DisplaysUtil() {
        }
        
    auto DisplaysUtil::getInstance() -> DisplaysUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplaysUtil::instance;
    
}

auto DisplaysUtil::instance_owner() -> DisplaysUtil* { static std::unique_ptr<DisplaysUtil> value(new DisplaysUtil()); return value.get(); }
DisplaysUtil* DisplaysUtil::instance = DisplaysUtil::instance_owner();

    auto DisplaysUtil::getPrimaryScreenSize() -> Rectangle*{

    Dimension* dimension = Toolkit::getDefaultToolkit()->getScreenSize();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Rectangle(PointFactory::getInstance()->ZERO_ZERO, dimension->width, dimension->height);
    
}


    auto DisplaysUtil::getScreenSizesAsRectangleArray() -> std::vector<Rectangle*>{

    GraphicsEnvironment* graphicsEnvironment = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    std::vector<GraphicsDevice*> graphicsDeviceArray = graphicsEnvironment->getScreenDevices();;
    

    GraphicsDevice* graphicsDevice;;
    

    DisplayMode* displayMode;;
    

    Rectangle* rectangle;;
    

    int32_t size = graphicsDeviceArray.size();;
    

    std::vector<Rectangle*> rectangleArray = std::vector<Rectangle*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphicsDevice= graphicsDeviceArray[index];
    
displayMode= graphicsDevice->getDisplayMode();
    
rectangle= new Rectangle(PointFactory::getInstance()->ZERO_ZERO, displayMode->getWidth(), displayMode->getHeight());
    
rectangleArray[index]= rectangle;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangleArray;
    
}




        #endif //ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_CPP
