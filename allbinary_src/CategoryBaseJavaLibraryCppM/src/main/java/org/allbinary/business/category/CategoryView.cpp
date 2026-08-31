
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/anyType/InterfaceUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryInterface.h"
#include "CategoryData.h"

class CategoryView
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: categoryInterface: CategoryInterface;

public constructor (CategoryInterface categoryInterface){

            super();
        this.categoryInterface= categoryInterface;
    
}


    public CategoryInterface getCategoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(CategoryData.getInstance()!.NAME)!;;
    

    childCategoryVector: Vector = this.categoryInterface!.getChildNodes()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF("Number Of Children: " +childCategoryVector!.length, this, "toXmlNode");
    

                                    }
                                

    size: int32_t = childCategoryVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    anyType: any = childCategoryVector!.get(i)!;;
    

    categoryPropertiesInterface: CategoryPropertiesInterface = 
                null
            ;;
    

                        if(InterfaceUtil.isImplemented("CategoryPropertiesInterface", anyType))
                        
                                    {
                                    categoryPropertiesInterface= anyType as CategoryPropertiesInterface;
    

                                    }
                                
                             else 
                        if(InterfaceUtil.isImplemented("CategoryInterface", anyType))
                        
                                    {
                                    
    categoryInterface: CategoryInterface = anyType as CategoryInterface;;
    
categoryPropertiesInterface= categoryInterface!.getProperties();
    

                                    }
                                
                        else {
                            
    isImpl: string = InterfaceUtil.viewAll(anyType!.constructor, CommonSeps.getInstance()!.NEW_LINE)!;;
    



                            throw new Exception("CategoryView found unknown object.\n" +"Show Testing:" +isImpl);
                    

                        }
                            

    childCategoryNode: Node = new CategoryPropertiesView(categoryPropertiesInterface).toXmlNode(document)!;;
    
node.appendChild(childCategoryNode);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

