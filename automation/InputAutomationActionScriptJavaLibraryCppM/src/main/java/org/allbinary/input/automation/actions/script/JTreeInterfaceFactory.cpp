
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JTreeInterface.h"

class JTreeInterfaceFactory
            : public Object
         {
        

    private: static const instance: JTreeInterfaceFactory = new JTreeInterfaceFactory();

    public static JTreeInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JTreeInterfaceFactory.instance;
    
}


    private: jTreeInterface: JTreeInterface;

    public set(JTreeInterface jTreeInterface){
this.jTreeInterface= jTreeInterface;
    
}


    public JTreeInterface getJTreeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jTreeInterface;
    
}


};

            

