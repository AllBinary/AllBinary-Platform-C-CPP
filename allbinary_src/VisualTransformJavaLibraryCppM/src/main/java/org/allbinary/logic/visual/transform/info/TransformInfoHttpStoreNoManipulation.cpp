
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigNoManipulationFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoHttpStore.h"

class TransformInfoHttpStoreNoManipulation: public TransformInfoHttpStore {
        

public constructor (HashMap<any, any> propertiesHashMap, PageContext pageContext){
            super(propertiesHashMap, pageContext);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    setObjectConfigFile(string value){
this.setObjectConfigFileName(value);
    
this.setObjectConfigInterface(TransformInfoObjectConfigNoManipulationFactory.getInstance()!.getInstance(this, this.getObjectConfigFilePath()));
    
}


                //@Throws(Exception.constructor)
            
    setObjectConfig(string value){



                            throw new Exception("Should not set from config");
                    
}


};

            

