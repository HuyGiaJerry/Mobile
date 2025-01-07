import React, { useState } from 'react';
import { StyleSheet, TextInput, View,  KeyboardAvoidingView,Platform, Text } from 'react-native';
import Square from './components/square';


const Home = () => {
  

  return (
    <View style={styles.container}>
      <Square title="Hello" backgroundColor= "red" />
      <Square title="Xin chao" backgroundColor= "blue" />
      <Square title="Sawadikap" backgroundColor= "orange" />
      <Square title="Ohio" backgroundColor= "purple" />
      <Square title="Ayongaxeyo" backgroundColor= "green" />
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    marginTop: '50',
    display: 'flex',
    flexDirection: 'row',
    flexWrap: 'wrap',
    gap: '20',
    justifyContent: 'space-between',
    width: '100%',
    height: '100%',
    backgroundColor: '#f123', 
  },
  
  
});

export default Home;
