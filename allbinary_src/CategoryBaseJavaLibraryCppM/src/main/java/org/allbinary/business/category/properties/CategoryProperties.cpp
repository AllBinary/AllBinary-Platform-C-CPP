
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPropertiesInterface.h"

class CategoryProperties
            : public Object
        : public CategoryPropertiesInterface {
        

    private: static const MAXDEPTH: int32_t = 100;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: category: string;

public constructor (string name){

            super();
        this.category= name;
    
}


public constructor (Node node){

            super();
        this.category= CategoryUtil.getNameFromNode(node);
    
}


public constructor (HashMap<any, any> categoryPropertiesHashMap){

            super();
        this.category= .toCharArray();
    
}


    public bool isRealRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isRoot(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getValue();
    
}


    public string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.category;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getPath(CategoryHierarchyInterface categoryHierarchyInterface){

    abPathData: AbPathData = AbPathData.getInstance()!;;
    

    pathStringBuffer: StringMaker = new StringMaker();;
    

    list: BasicArrayList = new BasicArrayListD();;
    

    nextParentCategoryInterface: CategoryInterface = categoryHierarchyInterface!.getParent()!;;
    

                        if(this != nextParentCategoryInterface!.getProperties())
                        
                                    {
                                    
    depthIndex: int32_t = 0;;
    

        while(nextParentCategoryInterface != 
                                    null
                                )
        {

                        if(nextParentCategoryInterface!.getProperties()!.isRealRoot())
                        
                                    {
                                    break;

                    

                                    }
                                

                        if(nextParentCategoryInterface!.getProperties()!.isRoot())
                        
                                    {
                                    list.addAt(0, nextParentCategoryInterface!.getPath()!.toString());
    

                                    }
                                
                        else {
                            pathStringBuffer!.delete(0, pathStringBuffer!.length());
    
list.addAt(0, pathStringBuffer!.append(abPathData!.SEPARATOR)!.append(nextParentCategoryInterface!.getProperties()!.getValue())!.toString());
    

                        }
                            

                        if(nextParentCategoryInterface == nextParentCategoryInterface!.getHierarchy()!.getParent())
                        
                                    {
                                    break;

                    

                                    }
                                
nextParentCategoryInterface= nextParentCategoryInterface!.getHierarchy()!.getParent();
    
depthIndex++;
    

                        if(depthIndex > CategoryProperties.MAXDEPTH)
                        
                                    {
                                    


                            throw new Exception("Probably Major Error");
                    

                                    }
                                
}


                                    }
                                
pathStringBuffer!.delete(0, pathStringBuffer!.length());
    
pathStringBuffer!.append(abPathData!.SEPARATOR)!.append(this.getValue());
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
pathStringBuffer!.append(list.get(index) as string);
    
}

pathStringBuffer!.append(abPathData!.SEPARATOR);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.CATEGORY))
                        
                                    {
                                    this.logUtil!.putF("path = " +pathStringBuffer!.toString(), this, "getPath");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(pathStringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);
    
}


    public string getFileName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getValue() +AbPathData.getInstance()!.EXTENSION_SEP +CategoryData.getInstance()!.UNCRYPTED_EXTENSION;
    
}


                //@Throws(Exception.constructor)
            
    public AbPath getWebAppPath(){



                            throw new Exception("Not Root");
                    
}


    public setValue(string value){
this.category= value;
    
}


    public Boolean isValid(){

    returnBoolean: Boolean = Boolean.FALSE;;
    

                        if(StringValidationUtil.getInstance()!.isValidRequired(this.category, 1, AbSqlData.MAXSTRING))
                        
                                    {
                                    returnBoolean= Boolean.TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnBoolean;
    
}


    public HashMap<any, any> toHashMap(){

    categoryHashMap: HashMap<any, any> = new HashMap<any, any>();;
    
categoryHashMap!.put(CategoryData.getInstance()!.NAME, this.category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


    public Vector toVector(){

    categoryVector: Vector = new Vector();;
    
categoryVector!.add(this.category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
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


};

            

