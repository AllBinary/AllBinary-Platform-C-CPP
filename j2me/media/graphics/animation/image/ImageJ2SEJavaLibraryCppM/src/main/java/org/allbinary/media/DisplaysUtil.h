
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
        



        #ifndef ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H
        #define ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H

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

    public: static DisplaysUtil getInstance();

    private: static DisplaysUtil instance() { return DisplaysUtil(); }

    public: Rectangle getPrimaryScreenSize();

    public: std::vector<Rectangle> getScreenSizesAsRectangleArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H
