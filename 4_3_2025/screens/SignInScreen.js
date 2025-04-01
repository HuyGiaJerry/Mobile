import React, { useState, useContext } from 'react';
import { View, Text, TextInput, TouchableOpacity, StyleSheet } from 'react-native';
import { UserContext } from '../contexts/UserContext';

const SignInScreen = ({ navigation }) => {
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const { setUser } = useContext(UserContext);

  const handleSignIn = () => {
    // Perform sign-in logic here
    // For demonstration, we assume the login is always successful
    const user = { email };
    setUser(user);
    navigation.replace('MainTabs');
  };

  return (
    <View style={styles.container}>
      <Text style={{ fontSize: 25, textAlign: 'center', marginBottom: 50 }}>Login</Text>
      <Text>Email ID</Text>
      <TextInput
        style={styles.input}
        editable
        maxLength={50}
        placeholder="Enter your email here"
        value={email}
        onChangeText={setEmail}
      />
      <Text style={{ marginTop: 20 }}>Password</Text>
      <TextInput
        style={styles.input}
        editable
        maxLength={50}
        placeholder="Enter your password here"
        value={password}
        onChangeText={setPassword}
        secureTextEntry
      />
      <TouchableOpacity
        style={styles.btnLogin}
        onPress={handleSignIn}
      >
        <Text style={{ color: 'white', textAlign: 'center' }}>Login</Text>
      </TouchableOpacity>
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    marginTop: 30,
  },
  btnLogin: {
    marginTop: 40,
    width: '90%',
    padding: 5,
    backgroundColor: "#f5f5",
  },
  input: {
    marginTop: 10,
    width: '90%',
    padding: 5,
    borderWidth: 1,
  }
});

export default SignInScreen;