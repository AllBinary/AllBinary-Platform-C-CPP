
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
        

    private: columnsAndSearchValues: HashMap<any, any>;

    private: order: string;

    private: sortBy: string;

    private: listLength: string;

    private: startPage: string;

    private: endPage: string;

public constructor (HttpServletRequest request);

    public add(string column, string value);

    public setOrder(string value);

    public setSortBy(string value);

    public setLength(string value);

    public setStartPage(string value);

    public setEndPage(string value);

    public HashMap<any, any> get();

    public string getOrder();

    public string getSortBy();

    public string getLength();

    public Integer getLengthInt();

    public string getStartPage();

    public string getEndPage();

    public Integer getStartPageInt();

    public Integer getEndPageInt();

                //@Throws(Exception.constructor)
            
    public Node getParamsNode(Document document);

                //@Throws(Exception.constructor)
            
    Node getFieldsNode(Document document);

                //@Throws(Exception.constructor)
            
    Node getOrderNode(Document document);

                //@Throws(Exception.constructor)
            
    Node getSortByNode(Document document);

                //@Throws(Exception.constructor)
            
    Node getLengthNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_SEARCH_SEARCHPARAMS_H
