import React, { useState } from 'react';
import { View, Text, StyleSheet, Image, TouchableOpacity, Switch, ScrollView } from 'react-native';
import Icon from 'react-native-vector-icons/Ionicons';

const ProfileScreen = () => {
    const [isDarkMode, setIsDarkMode] = useState(false);

    const toggleDarkMode = () => {
        setIsDarkMode((previousState) => !previousState);
    };

    return (
        <ScrollView style={styles.container}>
            {/* Header */}
            <View style={styles.header}>
                <TouchableOpacity>
                    <Icon name="arrow-back-outline" size={24} color="#000" />
                </TouchableOpacity>
                <Text style={styles.headerTitle}>Profile</Text>
            </View>

            {/* Profile Info */}
            <View style={styles.profileContainer}>
                <Image
                    source={require('../assets/avatar.png')} // Replace with your avatar image
                    style={styles.avatar}
                    resizeMode="cover" // Ensure the image maintains its aspect ratio
                />
                <TouchableOpacity style={styles.editIcon}>
                    <Icon name="pencil-outline" size={16} color="#fff" />
                </TouchableOpacity>
                <Text style={styles.profileName}>Rakibul Hasan</Text>
                <Text style={styles.profileEmail}>rakibhbrand@gmail.com</Text>
            </View>

            {/* Menu Options */}
            <View style={styles.menuContainer}>
                <TouchableOpacity style={styles.menuItem}>
                    <Icon name="home-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>Home</Text>
                    <Icon name="chevron-forward-outline" size={20} color="#888" />
                </TouchableOpacity>
                <TouchableOpacity style={styles.menuItem}>
                    <Icon name="card-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>My Card</Text>
                    <Icon name="chevron-forward-outline" size={20} color="#888" />
                </TouchableOpacity>
                <View style={styles.menuItem}>
                    <Icon name="moon-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>Dark Mood</Text>
                    <Switch
                        value={isDarkMode}
                        onValueChange={toggleDarkMode}
                        trackColor={{ false: '#767577', true: '#6200EE' }}
                        thumbColor={isDarkMode ? '#fff' : '#f4f3f4'}
                    />
                </View>
                <TouchableOpacity style={styles.menuItem}>
                    <Icon name="location-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>Truck Your Order</Text>
                    <Icon name="chevron-forward-outline" size={20} color="#888" />
                </TouchableOpacity>
                <TouchableOpacity style={styles.menuItem}>
                    <Icon name="settings-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>Settings</Text>
                    <Icon name="chevron-forward-outline" size={20} color="#888" />
                </TouchableOpacity>
                <TouchableOpacity style={styles.menuItem}>
                    <Icon name="help-circle-outline" size={20} color="#6200EE" />
                    <Text style={styles.menuText}>Help Center</Text>
                    <Icon name="chevron-forward-outline" size={20} color="#888" />
                </TouchableOpacity>
            </View>

            {/* Logout Button */}
            <TouchableOpacity style={styles.logoutButton}>
                <Text style={styles.logoutText}>Log Out</Text>
                <Icon name="log-out-outline" size={20} color="#fff" />
            </TouchableOpacity>
        </ScrollView>
    );
};

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        padding: 16,
        marginTop: 20,
    },
    header: {
        flexDirection: 'row',
        alignItems: 'center',
        marginBottom: 16,
    },
    headerTitle: {
        fontSize: 18,
        fontWeight: 'bold',
        marginLeft: 8,
    },
    profileContainer: {
        alignItems: 'center',
        marginBottom: 24,
    },
    avatar: {
        width: 100,
        height: 100,
        borderRadius: 50,
        marginBottom: 8,
    },
    editIcon: {
        position: 'absolute',
        bottom: 45,
        right: 95,
        backgroundColor: '#6200EE',
        padding: 4,
        borderRadius: 12,
    },
    profileName: {
        fontSize: 20,
        fontWeight: 'bold',
    },
    profileEmail: {
        fontSize: 14,
        color: '#888',
    },
    menuContainer: {
        marginBottom: 24,
    },
    menuItem: {
        flexDirection: 'row',
        alignItems: 'center',
        justifyContent: 'space-between',
        paddingVertical: 12,
        borderBottomWidth: 1,
        borderBottomColor: '#F0F0F0',
    },
    menuText: {
        flex: 1,
        marginLeft: 16,
        fontSize: 16,
        color: '#000',
    },
    logoutButton: {
        flexDirection: 'row',
        alignItems: 'center',
        justifyContent: 'center',
        backgroundColor: '#6200EE',
        padding: 12,
        borderRadius: 8,
        marginBottom: 20,
    },
    logoutText: {
        color: '#fff',
        fontSize: 16,
        fontWeight: 'bold',
        marginRight: 8,
    },
});

export default ProfileScreen;