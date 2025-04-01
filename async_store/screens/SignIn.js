import React, { useState } from 'react';
import { View, Text, TextInput, TouchableOpacity, StyleSheet, Alert } from 'react-native';
import AsyncStorage from '@react-native-async-storage/async-storage';
export default function SignIn({ navigation }) {
    const [email, setEmail] = useState('');
    const [password, setPassword] = useState('');

    const handleSignIn = async () => {
        if (!email || !password) {
            Alert.alert('Please enter your email and password!');
            return;
        }
        try {
            // Lưu email và password vào AsyncStorage
            await AsyncStorage.setItem('userEmail', email);
            await AsyncStorage.setItem('userPassword', password);

            // Điều hướng đến MainTabs
            navigation.navigate('MainTabs');
        } catch (error) {
            Alert.alert('Error saving data', error.message);
        }
    }

    return (
        <View style={styles.container}>
            <Text style={styles.title}>Sign In</Text>
            <TextInput
                style={styles.input}
                placeholder="Enter your email here!"
                keyboardType="email-address"
                value={email}
                onChangeText={setEmail}
            />
            <TextInput
                style={styles.input}
                placeholder="Enter your password here!"
                secureTextEntry
                value={password}
                onChangeText={setPassword}
            />
            <TouchableOpacity>
                <Text style={styles.forgotPassword}>Forgot password?</Text>
            </TouchableOpacity>
            <TouchableOpacity style={styles.signInButton} onPress={handleSignIn}>
                <Text style={styles.signInButtonText}>Sign In</Text>
            </TouchableOpacity>
            <Text style={styles.orText}>Or sign in with</Text>
            <View style={styles.socialButtonsContainer}>
                <TouchableOpacity style={styles.socialButton}>
                    <Text style={styles.socialButtonText}>Google</Text>
                </TouchableOpacity>
                <TouchableOpacity style={styles.socialButton}>
                    <Text style={styles.socialButtonText}>Facebook</Text>
                </TouchableOpacity>
            </View>
            <TouchableOpacity>
                <Text style={styles.signUpText}>Not yet a member? Sign Up</Text>
            </TouchableOpacity>
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        alignItems: 'center',
        justifyContent: 'center',
        padding: 16,
    },
    title: {
        fontSize: 24,
        fontWeight: 'bold',
        marginBottom: 24,
    },
    input: {
        width: '100%',
        height: 40,
        borderColor: '#ccc',
        borderWidth: 1,
        borderRadius: 5,
        paddingHorizontal: 10,
        marginBottom: 12,
    },
    forgotPassword: {
        alignSelf: 'flex-end',
        color: '#f57c00',
        marginBottom: 24,
    },
    signInButton: {
        width: '100%',
        height: 40,
        backgroundColor: '#f57c00',
        alignItems: 'center',
        justifyContent: 'center',
        borderRadius: 5,
        marginBottom: 24,
    },
    signInButtonText: {
        color: '#fff',
        fontSize: 16,
    },
    orText: {
        marginBottom: 16,
    },
    socialButtonsContainer: {
        flexDirection: 'row',
        justifyContent: 'space-between',
        width: '100%',
        marginBottom: 24,
    },
    socialButton: {
        flex: 1,
        height: 40,
        alignItems: 'center',
        justifyContent: 'center',
        borderColor: '#ccc',
        borderWidth: 1,
        borderRadius: 5,
        marginHorizontal: 5,
    },
    socialButtonText: {
        fontSize: 16,
    },
    signUpText: {
        color: '#f57c00',
    },
});