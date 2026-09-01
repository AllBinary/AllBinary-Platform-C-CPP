
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
        



            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
#include <java/awt/Dimension.h>

      
#include <java/awt/DisplayMode.h>

      
#include <java/awt/GraphicsDevice.h>

      
#include <java/awt/GraphicsEnvironment.h>

      
#include <java/awt/Toolkit.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplaysUtil
            : public Object
         {

    public: static DisplaysUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisplaysUtil::instance();
    
}


    private: static DisplaysUtil instance() { return DisplaysUtil(); }

    public: Rectangle getPrimaryScreenSize(){

    Dimension dimension = Toolkit::getDefaultToolkit().getScreenSize();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Rectangle(PointFactory::getInstance().ZERO_ZERO, dimension.width, dimension.height);
    
}


    public: std::vector<Rectangle> getScreenSizesAsRectangleArray(){

    GraphicsEnvironment graphicsEnvironment = GraphicsEnvironment::getLocalGraphicsEnvironment();;
    

    std::vector<GraphicsDevice> graphicsDeviceArray = graphicsEnvironment.getScreenDevices();;
    

    GraphicsDevice graphicsDevice;;
    

    DisplayMode displayMode;;
    

    Rectangle rectangle;;
    

    int32_t size = graphicsDeviceArray.size();;
    

    std::vector<Rectangle> rectangleArray = new Array(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
graphicsDevice= graphicsDeviceArray[index]!;
    
displayMode= graphicsDevice.getDisplayMode();
    
rectangle= Rectangle(PointFactory::getInstance().ZERO_ZERO, displayMode.getWidth(), displayMode.getHeight());
    
rectangleArray[index]= rectangle;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangleArray;
    
}


};

            

