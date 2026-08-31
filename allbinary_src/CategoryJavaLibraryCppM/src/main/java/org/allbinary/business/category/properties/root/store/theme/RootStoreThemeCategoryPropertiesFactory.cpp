
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RootStoreThemeCategoryProperties.h"

class RootStoreThemeCategoryPropertiesFactory
            : public Object
        : public CategoryPropertiesFactoryInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: categoryPropertiesInterface: CategoryPropertiesInterface;

public constructor (TransformInfoInterface transformInfoInterface){

            super();
        this.categoryPropertiesInterface= new RootStoreThemeCategoryProperties(transformInfoInterface) as CategoryPropertiesInterface;
    
}


public constructor (TransformInfoInterface transformInfoInterface, AbPath abPath){

            super();
        this.categoryPropertiesInterface= new RootStoreThemeCategoryProperties(transformInfoInterface, abPath) as CategoryPropertiesInterface;
    
}


public constructor (TransformInfoInterface transformInfoInterface, Node node){

            super();
        this.categoryPropertiesInterface= new RootStoreThemeCategoryProperties(transformInfoInterface, node) as CategoryPropertiesInterface;
    
}


public constructor (TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap){

            super();
        this.categoryPropertiesInterface= new RootStoreThemeCategoryProperties(transformInfoInterface, categoryPropertiesHashMap) as CategoryPropertiesInterface;
    
}


    public CategoryPropertiesInterface getInstance(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPropertiesInterface as CategoryPropertiesInterface;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.ENTITYFACTORYERROR))
                        
                                    {
                                    this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

