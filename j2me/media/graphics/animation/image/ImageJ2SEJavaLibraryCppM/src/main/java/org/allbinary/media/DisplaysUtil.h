
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class PointFactory;
class Rectangle;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DisplaysUtil
            : public virtual Object
         {

    public: static DisplaysUtil* getInstance();

    private: static DisplaysUtil* instance_owner();
    private: static DisplaysUtil* instance;


            
    public: DisplaysUtil();
        
    public: Rectangle* getPrimaryScreenSize();

    public: std::vector<Rectangle*> getScreenSizesAsRectangleArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_DISPLAYSUTIL_H_COMPLETE
        #if __has_include(<java/awt/Dimension.h>)
#include <java/awt/Dimension.h>
#endif
#if __has_include(<java/awt/DisplayMode.h>)
#include <java/awt/DisplayMode.h>
#endif
#if __has_include(<java/awt/GraphicsDevice.h>)
#include <java/awt/GraphicsDevice.h>
#endif
#if __has_include(<java/awt/GraphicsEnvironment.h>)
#include <java/awt/GraphicsEnvironment.h>
#endif
#if __has_include(<java/awt/Toolkit.h>)
#include <java/awt/Toolkit.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif

        #endif
    
