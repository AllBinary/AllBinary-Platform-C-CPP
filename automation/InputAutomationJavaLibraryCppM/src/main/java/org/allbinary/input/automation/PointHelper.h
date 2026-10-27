
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PointFactory;
class Point;
class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PointHelper
            : public virtual Object
         {

    private: static inline const double two = 2;

    public: static Point* getCenterPoint(Rectangle* rectangle);

public: PointHelper();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_POINTHELPER_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include("org/allbinary/input/automation/PointFactory.h")
#include "org/allbinary/input/automation/PointFactory.h"
#endif
#if __has_include("org/allbinary/input/automation/Point.h")
#include "org/allbinary/input/automation/Point.h"
#endif
#if __has_include("org/allbinary/input/automation/Rectangle.h")
#include "org/allbinary/input/automation/Rectangle.h"
#endif

        #endif
    
