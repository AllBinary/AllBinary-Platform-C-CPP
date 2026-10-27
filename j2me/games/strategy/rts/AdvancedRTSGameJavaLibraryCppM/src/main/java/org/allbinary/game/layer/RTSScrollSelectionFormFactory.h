
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSSCROLLSELECTIONFORMFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSSCROLLSELECTIONFORMFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ABCustomItem;
class PointFactory;
class Rectangle;
class BasicColorFactory;
class DisplayInfoSingleton;
class FormTypeFactory;
class MultipleScrollSelectionHorizontalForm;
class ScrollSelectionForm;
class CommonButtons;
class TouchButtonLocationHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSScrollSelectionFormFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static ScrollSelectionForm* getInstance(std::string formLabel, std::vector<ABCustomItem*> items);


            
    public: RTSScrollSelectionFormFactory();
        
};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSSCROLLSELECTIONFORMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSSCROLLSELECTIONFORMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSSCROLLSELECTIONFORMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormTypeFactory.h>)
#include <org/allbinary/graphics/form/FormTypeFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h>)
#include <org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/CommonButtons.h>)
#include <org/allbinary/input/motion/button/CommonButtons.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchButtonLocationHelper.h>)
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>
#endif

        #endif
    
