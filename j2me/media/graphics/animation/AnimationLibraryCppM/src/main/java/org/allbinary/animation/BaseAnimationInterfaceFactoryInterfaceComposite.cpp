
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_CPP
        #define ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/BaseAnimationInterfaceFactoryInterfaceComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/Animation.h"


BaseAnimationInterfaceFactoryInterfaceComposite::BaseAnimationInterfaceFactoryInterfaceComposite(std::vector<BasicAnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray){
this->basicAnimationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseAnimationInterfaceFactoryInterfaceComposite::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    
}


    auto BaseAnimationInterfaceFactoryInterfaceComposite::getBasicAnimationInterfaceFactoryInterfaceArray() -> std::vector<BasicAnimationInterfaceFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicAnimationInterfaceFactoryInterfaceArray;
    
}


    auto BaseAnimationInterfaceFactoryInterfaceComposite::setBasicAnimationInterfaceFactoryInterfaceArray(std::vector<BasicAnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray) -> void{
this->basicAnimationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
}


    auto BaseAnimationInterfaceFactoryInterfaceComposite::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_CPP
