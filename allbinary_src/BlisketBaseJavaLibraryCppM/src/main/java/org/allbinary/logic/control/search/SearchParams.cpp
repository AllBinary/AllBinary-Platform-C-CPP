
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

public constructor (HttpServletRequest request){

            super();
        this.columnsAndSearchValues= new HashMap<any, any>();
    
this.setLength(request.getParameter(SearchData.LENGTH));
    
this.setOrder(request.getParameter(SearchData.ORDER));
    

    page: string = request.getParameter(SearchData.PAGE)!;;
    
this.setStartPage(page);
    
this.setEndPage(page);
    
this.setSortBy(request.getParameter(SearchData.SORTBY));
    

    index: int32_t = 0;;
    

    columnName: string = request.getParameter(SearchData.COLUMNNAME +"[0]")!;;
    

    columnValue: string = request.getParameter(SearchData.COLUMNVALUE +"[0]")!;;
    

        while(columnName != 
                                    null
                                )
        {
this.add(columnName, columnValue);
    
index++;
    
columnName= request.getParameter(SearchData.COLUMNNAME +"[" +index +"]");
    
columnValue= request.getParameter(SearchData.COLUMNVALUE +"[" +index +"]");
    
}

}


    public add(string column, string value){
this.columnsAndSearchValues!.put(column, value);
    
}


    public setOrder(string value){
this.order= value;
    
}


    public setSortBy(string value){
this.sortBy= value;
    
}


    public setLength(string value){
this.listLength= value;
    
}


    public setStartPage(string value){
this.startPage= value;
    
}


    public setEndPage(string value){
this.endPage= value;
    
}


    public HashMap<any, any> get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.columnsAndSearchValues;
    
}


    public string getOrder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.order;
    
}


    public string getSortBy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sortBy;
    
}


    public string getLength(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.listLength;
    
}


    public Integer getLengthInt(){

                        if(this.listLength != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(this.listLength);
    

                                    }
                                
                             else 
                        if()
                        
}


    public string getStartPage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.startPage;
    
}


    public string getEndPage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.endPage;
    
}


    public Integer getStartPageInt(){

                        if(this.startPage != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(this.startPage);
    

                                    }
                                
                             else 
                        if()
                        
}


    public Integer getEndPageInt(){

                        if(this.endPage != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Integer(this.endPage);
    

                                    }
                                
                             else 
                        if()
                        
}


                //@Throws(Exception.constructor)
            
    public Node getParamsNode(Document document){

    paramsNode: Node = ModDomHelper.createNameValueNodes(document, SearchData.PARAMS, SearchData.PARAMS)!;;
    
paramsNode!.appendChild(this.getFieldsNode(document));
    
paramsNode!.appendChild(this.getOrderNode(document));
    
paramsNode!.appendChild(this.getSortByNode(document));
    
paramsNode!.appendChild(this.getLengthNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paramsNode;
    
}


                //@Throws(Exception.constructor)
            
    Node getFieldsNode(Document document){

    fieldsNode: Node = ModDomHelper.createNameValueNodes(document, SearchData.FIELDS, new Integer(this.columnsAndSearchValues!.size()).toString())!;;
    

    set: Set = this.columnsAndSearchValues!.keySet()!;;
    

    searchValueArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = searchValueArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: string = searchValueArray[index]! as string;;
    

    searchValue: string = this.columnsAndSearchValues!.get(key) as string;;
    
fieldsNode!.appendChild(ModDomHelper.createNameValueNodes(document, SearchData.FIELD, key, ToDomHelper.convertNull(searchValue)));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return fieldsNode;
    
}


                //@Throws(Exception.constructor)
            
    Node getOrderNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, SearchData.ORDER, ToDomHelper.convertNull(this.getOrder()));;
    
}


                //@Throws(Exception.constructor)
            
    Node getSortByNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, SearchData.SORTBY, ToDomHelper.convertNull(this.getSortBy()));;
    
}


                //@Throws(Exception.constructor)
            
    Node getLengthNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, SearchData.LENGTH, ToDomHelper.convertNull(this.getLength()));;
    
}


};

            

