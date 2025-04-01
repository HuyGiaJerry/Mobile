import React from 'react';
import { View, Text, TextInput, StyleSheet, ScrollView } from 'react-native';
import TopCategories from '../components/TopCategories';
import PopularItems from '../components/PopularItems';

export default function Explorer() {
    return (
        <ScrollView contentContainerStyle={styles.container}>
            <Text style={styles.title}>Explorer</Text>
            <TextInput
                style={styles.searchInput}
                placeholder="Search for meals or area"
            />
            <TopCategories />
            <PopularItems title="Popular Items" />
            <PopularItems title="Popular Items" />
        </ScrollView>
    );
}

const styles = StyleSheet.create({
    container: {
        flexGrow: 1,
        backgroundColor: '#fff',
        padding: 16,
    },
    title: {
        fontSize: 24,
        fontWeight: 'bold',
        marginBottom: 16,
    },
    searchInput: {
        height: 40,
        borderColor: '#ccc',
        borderWidth: 1,
        borderRadius: 5,
        paddingHorizontal: 10,
        marginBottom: 16,
    },
});