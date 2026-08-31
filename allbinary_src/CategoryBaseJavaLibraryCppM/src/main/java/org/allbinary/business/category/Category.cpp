
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryInterface.h"

class Category
            : public Object
        : public CategoryInterface {
        

    private: static const NOT_ROOT: string = "This is not the root so it has no file path.";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: categoryHierarchyInterface: CategoryHierarchyInterface;

    private: categoryPropertiesInterface: CategoryPropertiesInterface;

    private: const childCategoryVector: Vector = new Vector();

    private: const typeVector: Vector = new Vector();

    private: const PROPERTIES: Integer = new Integer(1);

    private: const CATEGORY: Integer = new Integer(0);

public constructor (CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.CONSTRUCTOR, this, "Category(CategoryPropertiesFactoryInterface)");
    

                                    }
                                
this.categoryPropertiesInterface= categoryPropertiesFactoryInterface!.getInstance();
    
this.categoryHierarchyInterface= new CategoryHierarchy(this, this) as CategoryHierarchyInterface;
    
this.log();
    
}


public constructor (CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface, int32_t level){

            super();
        this.categoryPropertiesInterface= categoryPropertiesFactoryInterface!.getInstance();
    
this.categoryHierarchyInterface= new CategoryHierarchy(this, this, level) as CategoryHierarchyInterface;
    
this.log();
    
}


public constructor (CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface){

            super();
        this.categoryPropertiesInterface= categoryPropertiesFactoryInterface!.getInstance() as CategoryPropertiesInterface;
    
this.categoryHierarchyInterface= new CategoryHierarchy(rootCategoryInterface, parentCategoryInterface) as CategoryHierarchyInterface;
    
this.log();
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPropertiesInterface!.getKey();;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getRootFilePath(){

    rootAbPath: AbPath = new AbPath(NOT_ROOT, StringUtil.getInstance()!.EMPTY_STRING);;
    

    categoryInterface: CategoryInterface = this.categoryHierarchyInterface!.getRoot()!;;
    

                        if(categoryInterface!.getProperties()!.isRoot())
                        
                                    {
                                    
    rootCategoryPropertiesInterface: RootCategoryPropertiesInterface = categoryInterface!.getProperties() as RootCategoryPropertiesInterface;;
    
rootAbPath= rootCategoryPropertiesInterface!.getRootFilePath();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootAbPath;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(this.getRootFilePath()!.toString() +this.getProperties()!.getPath(this.getHierarchy())!.toString(), this.getProperties()!.getFileName());
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getWebAppPath(){

    categoryInterface: CategoryInterface = this.categoryHierarchyInterface!.getRoot()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryInterface!.getProperties()!.getWebAppPath();;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPropertiesInterface!.getPath(this.categoryHierarchyInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool addChildProperty(CategoryPropertiesInterface categoryPropertiesInterface){
this.typeVector!.add(this.PROPERTIES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.childCategoryVector!.add(categoryPropertiesInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool addChild(CategoryInterface categoryInterface){
this.removeDuplicateChild(categoryInterface);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF("adding", this, "addChild");
    

                                    }
                                

    childCategoryHierarchyInterface: CategoryHierarchyInterface = categoryInterface!.getHierarchy()!;;
    
childCategoryHierarchyInterface!.setParent(this);
    
childCategoryHierarchyInterface!.setRoot(this.getHierarchy()!.getRoot());
    
categoryInterface!.setHierarchy(childCategoryHierarchyInterface);
    
this.typeVector!.add(this.CATEGORY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.childCategoryVector!.add(categoryInterface);;
    
}


    public Vector getChildNodes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.childCategoryVector;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool removeChild(CategoryInterface categoryInterface){

    removalVector: Vector = new Vector();;
    

    bool_return: bool = false;;
    

    size: int32_t = this.childCategoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(this.CATEGORY == this.typeVector!.get(index))
                        
                                    {
                                    
    anyType: any = this.childCategoryVector!.get(index)!;;
    

    currentCategoryInterface: CategoryInterface = anyType as CategoryInterface;;
    

                        if(currentCategoryInterface!.getProperties()!.getValue()!.compareTo(categoryInterface!.getProperties()!.getValue()) == 0)
                        
                                    {
                                    removalVector!.add(currentCategoryInterface);
    
bool_return= true;
    

                                    }
                                

                                    }
                                
}

this.removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bool_return;
    
}


    removal(Vector removalVector){

    removalSize: int32_t = removalVector!.length!;;
    




                        for (
    index: int32_t = 0;index < removalSize; index++)
        {

    anyType: any = removalVector!.get(index)!;;
    

    objectIndex: int32_t = this.childCategoryVector!.indexOf(anyType)!;;
    
this.typeVector!.remove(objectIndex);
    
this.childCategoryVector!.remove(objectIndex);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool removeDuplicateChild(CategoryInterface categoryInterface){

    removalVector: Vector = new Vector();;
    

    bool_return: bool = false;;
    

    size: int32_t = this.childCategoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = this.childCategoryVector!.get(index)!;;
    

                        if(this.PROPERTIES == this.typeVector!.get(index))
                        
                                    {
                                    
    categoryPropertiesInterface: CategoryPropertiesInterface = anyType as CategoryPropertiesInterface;;
    

                        if(categoryInterface!.getProperties()!.getValue()!.compareTo(categoryPropertiesInterface!.getValue()) == 0)
                        
                                    {
                                    removalVector!.add(categoryPropertiesInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this.CATEGORY == this.typeVector!.get(index))
                        
                                    {
                                    
    existingCategoryInterface: CategoryInterface = anyType as CategoryInterface;;
    

    categoryPropertiesInterface: CategoryPropertiesInterface = existingCategoryInterface!.getProperties()!;;
    

                        if(categoryInterface!.getProperties()!.getValue()!.compareTo(categoryPropertiesInterface!.getValue()) == 0)
                        
                                    {
                                    removalVector!.add(existingCategoryInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
}

this.removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bool_return;
    
}


                //@Throws(Exception.constructor)
            
    public bool isLeaf(){

                        if(this.childCategoryVector == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Category Error");
                    

                                    }
                                

                        if(this.childCategoryVector!.length == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public CategoryPropertiesInterface getProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryPropertiesInterface;
    
}


    public setProperties(CategoryPropertiesInterface categoryPropertiesInterface){
this.categoryPropertiesInterface= categoryPropertiesInterface;
    
}


    public CategoryHierarchyInterface getHierarchy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.categoryHierarchyInterface;
    
}


    public setHierarchy(CategoryHierarchyInterface categoryHierarchyInterface){
this.categoryHierarchyInterface= categoryHierarchyInterface;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public Boolean isValid(){

                        if(!this.categoryPropertiesInterface!.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

    size: int32_t = this.childCategoryVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    anyType: any = this.childCategoryVector!.get(index)!;;
    

                        if(this.PROPERTIES == this.typeVector!.get(index))
                        
                                    {
                                    
    categoryPropertiesInterface: CategoryPropertiesInterface = anyType as CategoryPropertiesInterface;;
    

                        if(!categoryPropertiesInterface!.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this.CATEGORY == this.typeVector!.get(index))
                        
                                    {
                                    
    categoryInterface: CategoryInterface = anyType as CategoryInterface;;
    

                        if(!categoryInterface!.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


                //@Throws(Exception.constructor)
            
    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    categoryHashMap: HashMap<any, any> = this.categoryPropertiesInterface!.toHashMap()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    categoryVector: Vector = this.categoryPropertiesInterface!.toVector()!;;
    
categoryVector!.add(this.childCategoryVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    public log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Category Name: ");
    
stringBuffer!.append(this.categoryPropertiesInterface!.getValue());
    
stringBuffer!.append("\nPath = ");
    
stringBuffer!.append(this.getPath()!.toString());
    
stringBuffer!.append("\nFile Path: ");
    
stringBuffer!.append(this.getFilePath()!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "log()");
    

                                    }
                                
}


};

            

