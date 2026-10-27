
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
        



        #ifndef ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
        #define ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DisplayInfoSingleton;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StaticViewPosition;
class ViewPositionBase;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CenterStaticViewPositionFactory
            : public virtual Object
         {

public: CenterStaticViewPositionFactory();

    public: ViewPositionBase* getInstance(int32_t z);

};

            


        #endif //ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include("org/allbinary/view/StaticViewPosition.h")
#include "org/allbinary/view/StaticViewPosition.h"
#endif
#if __has_include("org/allbinary/view/ViewPositionBase.h")
#include "org/allbinary/view/ViewPositionBase.h"
#endif

        #endif
    
