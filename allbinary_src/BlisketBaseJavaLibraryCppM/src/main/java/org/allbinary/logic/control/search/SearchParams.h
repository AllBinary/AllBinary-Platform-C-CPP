
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/ToDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SearchData.h"

class SearchParams
            : public Object
         {

    private: HashMap<any, any> columnsAndSearchValues;

    private: std::string order;

    private: std::string sortBy;

    private: std::string listLength;

    private: std::string startPage;

    private: std::string endPage;

public: SearchParams(HttpServletRequest request);

    public: void add(std::string column, std::string value);

    public: void setOrder(std::string value);

    public: void setSortBy(std::string value);

    public: void setLength(std::string value);

    public: void setStartPage(std::string value);

    public: void setEndPage(std::string value);

    public: HashMap<any, any> get();

    public: std::string getOrder();

    public: std::string getSortBy();

    public: std::string getLength();

    public: Integer getLengthInt();

    public: std::string getStartPage();

    public: std::string getEndPage();

    public: Integer getStartPageInt();

    public: Integer getEndPageInt();

                //@Throws(Exception.constructor)
            
    public: Node getParamsNode(Document document);

                //@Throws(Exception.constructor)
            
    private: Node getFieldsNode(Document document);

                //@Throws(Exception.constructor)
            
    private: Node getOrderNode(Document document);

                //@Throws(Exception.constructor)
            
    private: Node getSortByNode(Document document);

                //@Throws(Exception.constructor)
            
    private: Node getLengthNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H
