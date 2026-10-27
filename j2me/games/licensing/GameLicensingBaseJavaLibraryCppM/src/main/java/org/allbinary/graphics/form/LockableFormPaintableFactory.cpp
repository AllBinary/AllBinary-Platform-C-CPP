
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/LockableFormPaintableFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/LockablePaintable.h"
#include "org/allbinary/graphics/form/ItemPaintable.h"
#include "org/allbinary/graphics/form/PaintableForm.h"


LockableFormPaintableFactory::LockableFormPaintableFactory(int32_t lockedIndex){
this->lockedIndex= lockedIndex;
    
}


                //@Throws(Exception.constructor)
            
    auto LockableFormPaintableFactory::getInstanceItemPaintable(PaintableForm* paintableForm) -> ItemPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LockablePaintable(this->lockedIndex);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_LOCKABLEFORMPAINTABLEFACTORY_CPP
