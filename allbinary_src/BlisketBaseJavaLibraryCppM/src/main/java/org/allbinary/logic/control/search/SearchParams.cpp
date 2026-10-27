
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/ToDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/search/SearchData.h"

class SearchParams
            : public Object
         {

    private: HashMap<Object*, Object*>* columnsAndSearchValues;

    private: std::string order;

    private: std::string sortBy;

    private: std::string listLength;

    private: std::string startPage;

    private: std::string endPage;

public: SearchParams(HttpServletRequest* request){
this->columnsAndSearchValues= StdUtil::getInstance()->createHashMap();
    
this->setLength(request->getParameter(SearchData::LENGTH));
    
this->setOrder(request->getParameter(SearchData::ORDER));
    

    std::string page = request->getParameter(SearchData::PAGE);;
    
this->setStartPage(page);
    
this->setEndPage(page);
    
this->setSortBy(request->getParameter(SearchData::SORTBY));
    

    int32_t index = 0;;
    

    std::string columnName = request->getParameter(SearchData::COLUMNNAME +"[0]");;
    

    std::string columnValue = request->getParameter(SearchData::COLUMNVALUE +"[0]");;
    

        while(true)
        {
this->add(columnName, columnValue);
    
index++;
    
columnName= request->getParameter(SearchData::COLUMNNAME +"[" +index +"]");
    
columnValue= request->getParameter(SearchData::COLUMNVALUE +"[" +index +"]");
    
}

}


    public: void add(std::string column, std::string value){
this->columnsAndSearchValues->put(column, value);
    
}


    public: void setOrder(std::string value){
this->order= value;
    
}


    public: void setSortBy(std::string value){
this->sortBy= value;
    
}


    public: void setLength(std::string value){
this->listLength= value;
    
}


    public: void setStartPage(std::string value){
this->startPage= value;
    
}


    public: void setEndPage(std::string value){
this->endPage= value;
    
}


    public: HashMap<Object*, Object*>* get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnsAndSearchValues;
    
}


    public: std::string getOrder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->order;
    
}


    public: std::string getSortBy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sortBy;
    
}


    public: std::string getLength(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->listLength;
    
}


    public: int32_t getLengthInt(){

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->listLength);
    

                                    }
                                
                             else 
                        if()
                        
}


    public: std::string getStartPage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startPage;
    
}


    public: std::string getEndPage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endPage;
    
}


    public: int32_t getStartPageInt(){

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->startPage);
    

                                    }
                                
                             else 
                        if()
                        
}


    public: int32_t getEndPageInt(){

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->endPage);
    

                                    }
                                
                             else 
                        if()
                        
}


                //@Throws(Exception.constructor)
            
    public: Node* getParamsNode(Document* document){

    Node* paramsNode = ModDomHelper::createNameValueNodes(document, SearchData::PARAMS, SearchData::PARAMS);;
    
paramsNode->appendChild(this->getFieldsNode(document));
    
paramsNode->appendChild(this->getOrderNode(document));
    
paramsNode->appendChild(this->getSortByNode(document));
    
paramsNode->appendChild(this->getLengthNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paramsNode;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* getFieldsNode(Document* document){

    Node* fieldsNode = ModDomHelper::createNameValueNodes(document, SearchData::FIELDS, (int32_t(this->columnsAndSearchValues->size())).toString());;
    

    Set* set = this->columnsAndSearchValues->keySet();;
    

    std::vector<Object*> searchValueArray = set->toArray();;
    

    int32_t size = searchValueArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = searchValueArray[index];;
    

    std::string searchValue = this->columnsAndSearchValues->get(key);;
    
fieldsNode->appendChild(ModDomHelper::createNameValueNodes(document, SearchData::FIELD, key, ToDomHelper::convertNull(searchValue)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fieldsNode;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* getOrderNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::ORDER, ToDomHelper::convertNull(this->getOrder()));;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* getSortByNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::SORTBY, ToDomHelper::convertNull(this->getSortBy()));;
    
}


                //@Throws(Exception.constructor)
            
    private: Node* getLengthNode(Document* document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::LENGTH, ToDomHelper::convertNull(this->getLength()));;
    
}


};

            

