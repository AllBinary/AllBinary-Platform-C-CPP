
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "Frame.h"
#include "JTextField.h"
#include "JLabel.h"
#include "JPanel.h"
#include "JButton.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"
#include "WindowAdapter.h"
#include "WindowEvent.h"

class RotateJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args){
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
    public: void run(){

    RotateJDialog dialog = RotateJDialog(javax::swing::JFrame(), true);;
    
dialog.addWindowListener(class extends java::awt::event::WindowAdapter
                                {
                                
    public: void windowClosing(java::awt::event::WindowEvent e){
System.exit(0);
    
}

                                }
                            );
    
dialog.setVisible(true);
    
}

                                }
                            );
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();

public: RotateJDialog(java::awt::Frame parent, bool modal){
            super(parent, modal);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
}


    private: void initComponents(){
angleIncrementJTextField= javax::swing::JTextField();
    
this->jLabel1= javax::swing::JLabel();
    
this->totalRotationJTextField= javax::swing::JTextField();
    
this->jLabel2= javax::swing::JLabel();
    
this->jPanel1= javax::swing::JPanel();
    
this->jButton1= javax::swing::JButton();
    
setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
    
this->angleIncrementJTextField.setText("36");
    
this->jLabel1.setText("Angle Increment:");
    
this->totalRotationJTextField.setText("360");
    
this->jLabel2.setText("Total Angular Rotation:");
    
this->jButton1.setText("OK");
    
this->jButton1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout jPanel1Layout = javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addGap(62, 62, 62).addComponent(jButton1).addContainerGap(62, Short::MAX_VALUE)));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jButton1));
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(getContentPane());;
    
getContentPane().setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(jLabel1).addComponent(jLabel2)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(totalRotationJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 31, Short::MAX_VALUE).addComponent(angleIncrementJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 31, javax.swing.GroupLayout.PREFERRED_SIZE)).addContainerGap()).addComponent(jPanel1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(angleIncrementJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel1)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(totalRotationJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel2)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 16, Short::MAX_VALUE).addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap()));
    
pack();
    
}


    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->hashMap.put(Integer::valueOf(0)Integer::valueOf(this->angleIncrementJTextField.getText()));
    
this->hashMap.put(Integer::valueOf(1)Integer::valueOf(this->totalRotationJTextField.getText()));
    
getParent = this->getParent()getParent as HashMapJDialogListenerInterface
getParent.
                    onHashMap(this->hashMap);
    
this->setVisible(false);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.EXCEPTION, this, "jButton1ActionPerformed");
    
}

}


    private: javax::swing::JTextField angleIncrementJTextField;

    private: javax::swing::JButton jButton1;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JTextField totalRotationJTextField;

};

            

