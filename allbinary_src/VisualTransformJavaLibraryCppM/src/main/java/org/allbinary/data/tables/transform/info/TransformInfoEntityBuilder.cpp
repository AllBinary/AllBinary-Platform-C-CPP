
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/transform/info/TransformInfoEntityFactory.h"
#include "org/allbinary/data/tables/transform/info/TransformInfoEntity.h"

class TransformInfoEntityBuilder
            : public Object
         {

    public: static TransformInfoEntity* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoEntityFactory::getInstance(TransformInfoObjectConfigGeneratorFactory::getInstance(), TransformInfoObjectConfigAndManipulatorFactory::getInstance(), TransformInfoHttpStoreFactory::getInstance());;
    
}


};

            

