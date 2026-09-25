
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

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    private: static const std::string NOT_ROOT = "This is not the root so it has no file path.";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: CategoryHierarchyInterface categoryHierarchyInterface;

    private: CategoryPropertiesInterface categoryPropertiesInterface;

    private: const BasicArrayList childCategoryVector = BasicArrayListD();

    private: const BasicArrayList typeVector = BasicArrayListD();

    private: const Integer PROPERTIES = Integer(1);

    private: const Integer CATEGORY = Integer(0);

public: Category(CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, "Category(CategoryPropertiesFactoryInterface)");
    

                                    }
                                
this->categoryPropertiesInterface= categoryPropertiesFactoryInterface.getInstance();
    
this->categoryHierarchyInterface= CategoryHierarchy(this, this) as CategoryHierarchyInterface;
    
this->log();
    
}


public: Category(CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface, int32_t level){
this->categoryPropertiesInterface= categoryPropertiesFactoryInterface.getInstance();
    
this->categoryHierarchyInterface= CategoryHierarchy(this, this, level) as CategoryHierarchyInterface;
    
this->log();
    
}


public: Category(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface){
this->categoryPropertiesInterface= categoryPropertiesFactoryInterface.getInstance() as CategoryPropertiesInterface;
    
this->categoryHierarchyInterface= CategoryHierarchy(rootCategoryInterface, parentCategoryInterface) as CategoryHierarchyInterface;
    
this->log();
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPropertiesInterface.getKey();;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getRootFilePath(){

    AbPath rootAbPath = AbPath(NOT_ROOT, StringUtil::getInstance().EMPTY_STRING);;
    

    CategoryInterface categoryInterface = this->categoryHierarchyInterface.getRoot();;
    

                        if(categoryInterface.getProperties().isRoot())
                        
                                    {
                                    
    RootCategoryPropertiesInterface rootCategoryPropertiesInterface = categoryInterface.getProperties() as RootCategoryPropertiesInterface;;
    
rootAbPath= rootCategoryPropertiesInterface.getRootFilePath();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rootAbPath;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getFilePath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(this->getRootFilePath().toString() +this->getProperties().getPath(this->getHierarchy()).toString(), this->getProperties().getFileName());
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getWebAppPath(){

    CategoryInterface categoryInterface = this->categoryHierarchyInterface.getRoot();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryInterface.getProperties().getWebAppPath();;
    
}


                //@Throws(Exception.constructor)
            
    public: AbPath getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPropertiesInterface.getPath(this->categoryHierarchyInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChildProperty(CategoryPropertiesInterface categoryPropertiesInterface){
this->typeVector.add(this->PROPERTIES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->childCategoryVector.add(categoryPropertiesInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool addChild(CategoryInterface categoryInterface){
this->removeDuplicateChild(categoryInterface);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF("adding", this, "addChild");
    

                                    }
                                

    CategoryHierarchyInterface childCategoryHierarchyInterface = categoryInterface.getHierarchy();;
    
childCategoryHierarchyInterface.setParent(this);
    
childCategoryHierarchyInterface.setRoot(this->getHierarchy().getRoot());
    
categoryInterface.setHierarchy(childCategoryHierarchyInterface);
    
this->typeVector.add(this->CATEGORY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->childCategoryVector.add(categoryInterface);;
    
}


    public: BasicArrayList getChildNodes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->childCategoryVector;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool removeChild(CategoryInterface categoryInterface){

    BasicArrayList removalVector = BasicArrayListD();;
    

    bool bool_return = false;;
    

    int32_t size = this->childCategoryVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->CATEGORY == this->typeVector.get(index))
                        
                                    {
                                    
    Object* anyType = this->childCategoryVector.get(index);;
    

    CategoryInterface currentCategoryInterface = anyType as CategoryInterface;;
    

                        if(currentCategoryInterface.getProperties().getValue().compareTo(categoryInterface.getProperties().getValue()) == 0)
                        
                                    {
                                    removalVector.add(currentCategoryInterface);
    
bool_return= true;
    

                                    }
                                

                                    }
                                
}

this->removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bool_return;
    
}


    private: void removal(BasicArrayList removalVector){

    int32_t removalSize = removalVector.size();;
    




                        for (
    int32_t index = 0;index < removalSize; index++)
        {

    Object* anyType = removalVector.get(index);;
    

    int32_t objectIndex = this->childCategoryVector.indexOf(anyType);;
    
this->typeVector.remove(objectIndex);
    
this->childCategoryVector.remove(objectIndex);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool removeDuplicateChild(CategoryInterface categoryInterface){

    BasicArrayList removalVector = BasicArrayListD();;
    

    bool bool_return = false;;
    

    int32_t size = this->childCategoryVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = this->childCategoryVector.get(index);;
    

                        if(this->PROPERTIES == this->typeVector.get(index))
                        
                                    {
                                    
    CategoryPropertiesInterface categoryPropertiesInterface = anyType as CategoryPropertiesInterface;;
    

                        if(categoryInterface.getProperties().getValue().compareTo(categoryPropertiesInterface.getValue()) == 0)
                        
                                    {
                                    removalVector.add(categoryPropertiesInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->CATEGORY == this->typeVector.get(index))
                        
                                    {
                                    
    CategoryInterface existingCategoryInterface = anyType as CategoryInterface;;
    

    CategoryPropertiesInterface categoryPropertiesInterface = existingCategoryInterface.getProperties();;
    

                        if(categoryInterface.getProperties().getValue().compareTo(categoryPropertiesInterface.getValue()) == 0)
                        
                                    {
                                    removalVector.add(existingCategoryInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
}

this->removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return bool_return;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isLeaf(){

                        if(this->childCategoryVector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Category Error");
                    

                                    }
                                

                        if(this->childCategoryVector.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: CategoryPropertiesInterface getProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPropertiesInterface;
    
}


    public: void setProperties(CategoryPropertiesInterface categoryPropertiesInterface){
this->categoryPropertiesInterface= categoryPropertiesInterface;
    
}


    public: CategoryHierarchyInterface getHierarchy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryHierarchyInterface;
    
}


    public: void setHierarchy(CategoryHierarchyInterface categoryHierarchyInterface){
this->categoryHierarchyInterface= categoryHierarchyInterface;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Boolean isValid(){

                        if(!this->categoryPropertiesInterface.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

    int32_t size = this->childCategoryVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = this->childCategoryVector.get(index);;
    

                        if(this->PROPERTIES == this->typeVector.get(index))
                        
                                    {
                                    
    CategoryPropertiesInterface categoryPropertiesInterface = anyType as CategoryPropertiesInterface;;
    

                        if(!categoryPropertiesInterface.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->CATEGORY == this->typeVector.get(index))
                        
                                    {
                                    
    CategoryInterface categoryInterface = anyType as CategoryInterface;;
    

                        if(!categoryInterface.isValid().valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> categoryHashMap = this->categoryPropertiesInterface.toHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector(){

    BasicArrayList categoryVector = this->categoryPropertiesInterface.toVector();;
    
categoryVector.add(this->childCategoryVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    public: void log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Category Name: ");
    
stringBuffer.append(this->categoryPropertiesInterface.getValue());
    
stringBuffer.append("\nPath = ");
    
stringBuffer.append(this->getPath().toString());
    
stringBuffer.append("\nFile Path: ");
    
stringBuffer.append(this->getFilePath().toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "log()");
    

                                    }
                                
}


};

            

