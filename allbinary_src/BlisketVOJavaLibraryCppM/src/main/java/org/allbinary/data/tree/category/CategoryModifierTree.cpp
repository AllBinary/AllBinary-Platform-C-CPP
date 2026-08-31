
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPrivateTree.h"
#include "CategoryModifierTreeInterface.h"

class CategoryModifierTree: public CategoryPrivateTree: public CategoryModifierTreeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

public constructor (CategoryFactoryInterface categoryFactoryInterface){
            super(categoryFactoryInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "CategoryModifierTree(CategoryFactoryInterface categoryFactoryInterface)");
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public insert(CategoryInterface parentCategoryInterface, CategoryInterface newChildCategoryInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF("Inserting", this, "insert()");
    

                                    }
                                

                        if(parentCategoryInterface!.isValid().valueOf())
                        
                                    {
                                    parentCategoryInterface!.addChild(newChildCategoryInterface);
    

    directoryToBeCreatedAbPath: AbPath = new AbPath(newChildCategoryInterface!.getRootFilePath()!.toString() +newChildCategoryInterface!.getPath()!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
this.directory.create(directoryToBeCreatedAbPath);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF("Saving", this, "insert()");
    

                                    }
                                
this.save(parentCategoryInterface);
    
this.save(newChildCategoryInterface);
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "insert", e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public delete(CategoryInterface parentCategoryInterface, CategoryInterface existingChildCategoryInterface){

        try {
            
                        if(parentCategoryInterface!.isValid().valueOf())
                        
                                    {
                                    parentCategoryInterface!.addChild(existingChildCategoryInterface);
    

    directoryToBeDeletedAbPath: AbPath = new AbPath(existingChildCategoryInterface!.getRootFilePath()!.toString() +existingChildCategoryInterface!.getPath()!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    
this.delete(existingChildCategoryInterface);
    
parentCategoryInterface!.removeChild(existingChildCategoryInterface);
    
this.save(parentCategoryInterface);
    
this.directory.remove(directoryToBeDeletedAbPath);
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, this.commonStrings!.delete, e);
    

                                    }
                                
}

}


};

            

