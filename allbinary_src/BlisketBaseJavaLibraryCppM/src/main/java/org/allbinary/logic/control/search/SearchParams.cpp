
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/search/SearchParams.h"
        

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


SearchParams::SearchParams(HttpServletRequest* request){
this->columnsAndSearchValues= StdUtil::getInstance()->createHashMap();
    
this->setLength(request->getParameter(SearchData::LENGTH));
    
this->setOrder(request->getParameter(SearchData::ORDER));
    

    std::string page = request->getParameter(SearchData::PAGE);;
    
this->setStartPage(page);
    
this->setEndPage(page);
    
this->setSortBy(request->getParameter(SearchData::SORTBY));
    

    int32_t index = 0;;
    

    std::string columnName = request->getParameter(JavaString::valueOf(SearchData::COLUMNNAME) +JavaString::valueOf("[0]"));;
    

    std::string columnValue = request->getParameter(JavaString::valueOf(SearchData::COLUMNVALUE) +JavaString::valueOf("[0]"));;
    

        while(true)
        {
this->add(columnName, columnValue);
    
index++;
    
columnName= request->getParameter(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(SearchData::COLUMNNAME) +JavaString::valueOf("[")) +JavaString::valueOf(index)) +JavaString::valueOf("]"));
    
columnValue= request->getParameter(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(SearchData::COLUMNVALUE) +JavaString::valueOf("[")) +JavaString::valueOf(index)) +JavaString::valueOf("]"));
    
}

}


    auto SearchParams::add(std::string column, std::string value) -> void{
this->columnsAndSearchValues->put(column, value);
    
}


    auto SearchParams::setOrder(std::string value) -> void{
this->order= value;
    
}


    auto SearchParams::setSortBy(std::string value) -> void{
this->sortBy= value;
    
}


    auto SearchParams::setLength(std::string value) -> void{
this->listLength= value;
    
}


    auto SearchParams::setStartPage(std::string value) -> void{
this->startPage= value;
    
}


    auto SearchParams::setEndPage(std::string value) -> void{
this->endPage= value;
    
}


    auto SearchParams::get() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnsAndSearchValues;
    
}


    auto SearchParams::getOrder() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->order;
    
}


    auto SearchParams::getSortBy() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sortBy;
    
}


    auto SearchParams::getLength() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->listLength;
    
}


    auto SearchParams::getLengthInt() -> int32_t{

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->listLength);
    

                                    }
                                
                             else 
                        if()
                        
}


    auto SearchParams::getStartPage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startPage;
    
}


    auto SearchParams::getEndPage() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endPage;
    
}


    auto SearchParams::getStartPageInt() -> int32_t{

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->startPage);
    

                                    }
                                
                             else 
                        if()
                        
}


    auto SearchParams::getEndPageInt() -> int32_t{

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int32_t(this->endPage);
    

                                    }
                                
                             else 
                        if()
                        
}


                //@Throws(Exception.constructor)
            
    auto SearchParams::getParamsNode(Document* document) -> Node*{

    Node* paramsNode = ModDomHelper::createNameValueNodes(document, SearchData::PARAMS, SearchData::PARAMS);;
    
paramsNode->appendChild(this->getFieldsNode(document));
    
paramsNode->appendChild(this->getOrderNode(document));
    
paramsNode->appendChild(this->getSortByNode(document));
    
paramsNode->appendChild(this->getLengthNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paramsNode;
    
}


                //@Throws(Exception.constructor)
            
    auto SearchParams::getFieldsNode(Document* document) -> Node*{

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
            
    auto SearchParams::getOrderNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::ORDER, ToDomHelper::convertNull(this->getOrder()));;
    
}


                //@Throws(Exception.constructor)
            
    auto SearchParams::getSortByNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::SORTBY, ToDomHelper::convertNull(this->getSortBy()));;
    
}


                //@Throws(Exception.constructor)
            
    auto SearchParams::getLengthNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper::createNameValueNodes(document, SearchData::LENGTH, ToDomHelper::convertNull(this->getLength()));;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_CPP
